#include "netMutualFunc.h"

const char * protobufHead = "CSSG";

netMutualFunc::netMutualFunc()
{
}


netMutualFunc::~netMutualFunc()
{
}




int netMutualFunc::setNonBlockModel(int sock)
{
	int opts;
	opts = fcntl(sock, F_GETFL, 0);

	if (opts<0)
	{
		return -1;
	}

	opts = opts | O_NONBLOCK;

	if (fcntl(sock, F_SETFL, opts)<0)
	{
		return -1;
	}
	return 0;
}


int netMutualFunc::socketCreateListen(int port, int reuse, int backlog)
{
	int fd;
	struct sockaddr_in addr;

	fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd < 0)
	{
		perror("socket failed");
		return -1;
	}
	//第四个和第五个参数官方解释 they identify a buffer in which the value for the requested option(s) are to be returned.
	//可以理解为接收缓冲区
	if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, (const char *)&reuse, sizeof(int)) < 0)
	{
		perror("setsockopt error");
		pubFunc::logprint("setsockopt error", 1, LEVEL_INFO);
	}
	if (-1 == setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (const char *)&reuse, sizeof(int))){
		printf("setsockopt fail\n");
		pubFunc::logprint("setsockopt error", 1, LEVEL_INFO);
		return -1;
	}
	if (-1 == setsockopt(fd, IPPROTO_TCP, IP_MTU_DISCOVER, (const char *)&reuse, sizeof(int))){
		printf("setsockopt fail\n");
		pubFunc::logprint("setsockopt error", 1, LEVEL_INFO);
		return -1;
	}

	bzero(&addr, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(port);
	if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) != 0)
	{
		perror("bind error");
		close(fd);
		pubFunc::logprint("create socket bind error", 1, LEVEL_INFO);
		return -1;
	}


	setNonBlockModel(fd);//把本地的socketFD设置为非阻塞
	//第二个参数官方解释 The backlog argument defines the maximum length to which the queue of pending connections  for  sockfd  may  grow.
	if (listen(fd, backlog) < 0)
	{
		perror("listen error");

		close(fd);
		pubFunc::logprint("create socket listen error", 1, LEVEL_INFO);
		return -1;
	}
	return fd;
}


int netMutualFunc::getSocketFromList(list<int>& socketList)
{

	list<int>::iterator it;
	int iret = 0;
	if (0 != pthread_mutex_trylock(netParas::CLCT_SocketListLock))
	{
		return iret;

	}

	int len = socketList.size();
	if (0 >= len)
		goto SSEND;

	it = socketList.begin();
	iret = *it;
	socketList.erase(it);

SSEND:
	pthread_mutex_unlock(netParas::CLCT_SocketListLock);

	return iret;


}


int netMutualFunc::socketCreateConnect(string remoteIP, int remotePort, int localPort)
{
	int iret = -1;
	int  sockfd, num;
	struct sockaddr_in remoteSocketStruct;

	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1){
		perror("socket create failed \n");
		close(sockfd);
		return iret;
	}

	if (0 < localPort){
		sockaddr_in localSocketStruct;
		bzero(&localSocketStruct, sizeof(localSocketStruct));
		localSocketStruct.sin_family = AF_INET;
		localSocketStruct.sin_addr.s_addr = htonl(INADDR_ANY);
		localSocketStruct.sin_port = htons(localPort);
		if (bind(sockfd, (struct sockaddr *) &localSocketStruct, sizeof(localSocketStruct)) == -1) {
			perror("socket bind failed\n");
			close(sockfd);
			return iret;
		}
	}

	bzero(&remoteSocketStruct, sizeof(remoteSocketStruct));
	remoteSocketStruct.sin_family = AF_INET;
	remoteSocketStruct.sin_port = htons(remotePort);
	remoteSocketStruct.sin_addr.s_addr = inet_addr(remoteIP.data());

	if (connect(sockfd, (struct sockaddr *)&remoteSocketStruct, sizeof(remoteSocketStruct)) == -1){
		perror("socket connect failed\n");
		close(sockfd);
		return iret;
	}

	iret = sockfd;
	return iret;
}


int netMutualFunc::checkRemoteSocketStatus(int remoteSocket)
{
	if (remoteSocket <= 0)
		return 0;
	struct tcp_info info;
	int len = sizeof(info);
	getsockopt(remoteSocket, IPPROTO_TCP, TCP_INFO, &info, (socklen_t *)& len);
	if ((info.tcpi_state == TCP_ESTABLISHED)) {
		return 1;
	}
	else {
		return 0;
	}
}


int netMutualFunc::sendToRemoteServer(string IP, int port, char* reqBuf, int ireqBufSize, char* respBuf, int& respBufSize)
{
	int remoteSocket = 0;
	char tmpbuf[1024] = { 0 };
	int cnt = 1;
	int iret = 0, i = 0;
	char * buf = NULL;
	int nfds = 0;
	struct epoll_event localReqEvent, remoteRespevents[20];//
	int localRegEpollFd;//

	localRegEpollFd = epoll_create1(0);
	remoteSocket = socketCreateConnect(IP, port, 0);
	if (remoteSocket <= 0)
	{
		epoll_ctl(localRegEpollFd, EPOLL_CTL_DEL, remoteSocket, &localReqEvent);
		close(localRegEpollFd);
		close(remoteSocket);
		perror("create failed and iret :-1  \n");
		return -1;
	}

	localReqEvent.data.fd = remoteSocket;
	localReqEvent.events = EPOLLIN | EPOLLET;
    iret = epoll_ctl(localRegEpollFd, EPOLL_CTL_ADD, remoteSocket, &localReqEvent);

	iret = write(remoteSocket, reqBuf, ireqBufSize);
	if (iret != ireqBufSize)
	{
		epoll_ctl(localRegEpollFd, EPOLL_CTL_DEL, remoteSocket, &localReqEvent);
		close(localRegEpollFd);
		close(remoteSocket);
		char sTemp[1024] = {0};
		sprintf(sTemp, "-----write mdm failed --IP %s--port %d --\n", IP.c_str(), port);
		perror("write mdm failed \n");
		pubFunc::logprint(sTemp, LOGPRINT,LEVEL_ERROR);
		return -1;
	}

	nfds = epoll_wait(localRegEpollFd, remoteRespevents, 20, TIMEOUT);
		for (i = 0; i<nfds; ++i){

			if (remoteRespevents[i].data.fd == remoteSocket){

				iret = read(remoteSocket, respBuf, respBufSize);
				respBufSize = iret;
				close(remoteRespevents[i].data.fd);

			}
		}
		epoll_ctl(localRegEpollFd, EPOLL_CTL_DEL, remoteSocket, &localReqEvent);
		close(localRegEpollFd);
		close(remoteSocket);

	return 0;
}


int netMutualFunc::sendInfoToMDM(char* reqBuf, int ireqBufSize, char* respBuf, int& respBufSize)
{
	return sendToRemoteServer(netParas::mdmIP, netParas::mdmPort, reqBuf, ireqBufSize, respBuf, respBufSize);
}

int netMutualFunc::sendInfoToLogserver(char* reqBuf, int ireqBufSize, char* respBuf, int& respBufSize)
{
	return sendToRemoteServer(netParas::logServerIP, netParas::logServerPort, reqBuf, ireqBufSize, respBuf, respBufSize);
}


int netMutualFunc::sendInfoToDBPro(char* reqBuf, int ireqBufSize, char* respBuf, int& respBufSize)
{
	return sendToRemoteServer(netParas::DBProviderIP, netParas::dbProviderPort, reqBuf, ireqBufSize, respBuf, respBufSize);
}


int netMutualFunc::sendInfoToAlarm(char* reqBuf, int ireqBufSize, char* respBuf, int& respBufSize)
{
	return sendToRemoteServer(netParas::alarmServerIP, netParas::alarmServerPort, reqBuf, ireqBufSize, respBuf, respBufSize);
}



/*
	函数：处理control传输过来的数据
	参数：reqBuf control传输过来的protobuf的数据
		  respBuf 回传给control的protobuf的数据
		  respBufSize respBuf数据的大小
*/
int netMutualFunc::dataDisposeProcess(string reqBuf, char* respBuf, int& respBufSize)
{

	string sRecControl = reqBuf;
	string sRecMdm, sDBProProtoBuf;
	int iRecMdmSize;
	CtlRequstPolicy pConTP;
	int iRes = 0;

	//接收control发过来的数据
	pConTP.ParseFromString(sRecControl);

	char sTemp[1024] = {0};
	sprintf(sTemp, "----Recieve from control data %d %d %d %d %s %s %d ----",
		pConTP.msg_id(), pConTP.activity_id(), pConTP.product_id(), pConTP.event_id(), pConTP.session_id().c_str(), pConTP.traffic_id().c_str(), pConTP.enc_product_id());
	pubFunc::logprint(sTemp, LOGPRINT, LEVEL_INFO);


	iRes = sendRPCInfoToMDM(pConTP.activity_id(), sRecMdm);
	if (iRes != 0)
	{
		pubFunc::logprint("send RPC info to MDM failed", LOGPRINT, LEVEL_ERROR);
		return -1;
	}

	string revDBProviderStr;
	iRes = sendRPCInfoToDBPro(sRecMdm, sDBProProtoBuf, pConTP, revDBProviderStr);
	if (iRes != 0)
	{
		pubFunc::logprint("send RPC info to dbprovider failed", LOGPRINT, LEVEL_ERROR);
		return -1;
	}

	
	MsgDBProviderToPolicy pDBTP;
	pDBTP.ParseFromString(sDBProProtoBuf);

	RespDeviceActivity pMTP;
	pMTP.ParseFromString(sRecMdm);
	//if (pDBTP.log_type() != 0) q   
	//{
	//	int iRes = sendInfoToLogServer(revDBProviderStr, revDBProviderStr.length());
	//	printf("dy# send log server len:%d   write length : %d\n", revDBProviderStr.length(), iRes);
	//}



	PolicyResponseCtl pPTCon;
	pPTCon.set_msg_id(pDBTP.msg_id());
	pPTCon.set_activity_id(pMTP.activity_id());
	pPTCon.set_action_taken(pDBTP.action_taken());
	pPTCon.set_session_id(pDBTP.session_id());
	pPTCon.set_traffic_id(pDBTP.traffic_id());
	pPTCon.set_enc_enterprise_cipherkey(pDBTP.encry_value());
	pPTCon.set_enc_enterprice_test(pDBTP.encry_text());
	pPTCon.set_enc_enterprise_pwd(pDBTP.encry_key());
	//pPTCon.set_enc_enterprise_cipherkey("");
	//pPTCon.set_enc_enterprice_test("cloudscreen");
	//pPTCon.set_enc_enterprise_pwd("");
	pPTCon.set_product_id(pConTP.product_id());
	pPTCon.set_enterprise_id(pMTP.enterprise_id());
	pPTCon.set_user_id(pDBTP.user_id());
	pPTCon.set_csp_product_name(pDBTP.csp_name());
	pPTCon.set_block_result(pDBTP.enable_encry());
	//pPTCon.set_block_result(1);

	//printf("send to control msg_id %d activity_id %d  action_taken %d session_id %s  traffic_id %s  \n", pPTCon.msg_id(), pPTCon.activity_id(),
	//	pPTCon.action_taken(), pPTCon.session_id().c_str(), pPTCon.traffic_id().c_str());


	//printf("enc_enterprise_pwd %s  enc_enterprise_cipherkey %s  enc_enterprice_test %s  block_result %d  \n", pPTCon.enc_enterprise_pwd().c_str(), pPTCon.enc_enterprise_cipherkey().c_str(), pPTCon.enc_enterprice_test().c_str(), pPTCon.block_result());

	//printf("product_id %d enterprise_id %d  user_id %d csp_product_name %s \n", pPTCon.product_id(), pPTCon.enterprise_id(), pPTCon.user_id(), pPTCon.csp_product_name().c_str());

	string sSendCtlProto,sSendCtlRPC;
	int iSendCtlRPCSize;


	pPTCon.SerializeToString(&sSendCtlProto);
	memcpy(respBuf, sSendCtlProto.c_str(), sSendCtlProto.length());
	respBufSize = sSendCtlProto.length();
	return 0;
}


int netMutualFunc::ParseRPC(string& sRPCData, string& sProtobufData)
{

	string headstr = sRPCData.substr(0, sizeof(PrpcHead));
	PrpcHead head;
	memcpy((void*)&head, headstr.data(), sizeof(PrpcHead));
	//printf("parseRevFromServiceDatas start!%s,allLen:%d! metaLen:%d   sRPCData length %d !!!\n", head.magic, head.length, head.meta_length, sRPCData.length());
	if (strncmp((const char*)head.magic, protobufHead, strlen(protobufHead)) != 0)
		return -1;
	int allLen = ntohl(head.length);
	int metaLen = ntohl(head.meta_length);

	int privateDataLen = allLen - metaLen;
	if (privateDataLen <= 0/* || privateDataLen <(sizeof(PrpcHead)+metaLen) || sRPCData.length() < privateDataLen || sRPCData.length()<(sizeof(PrpcHead)+metaLen)*/)
		return -1;

	sProtobufData = sRPCData.substr(0 + sizeof(PrpcHead)+metaLen, privateDataLen);

	return 0;
}


int netMutualFunc::packRPC(string& sProtobufData, string& sRPCData,int& iRPCSize,string strServiceName, string strMethodName)
{
	RpcMeta rpcmeta;
	RpcRequestMeta *req = new RpcRequestMeta();
	PrpcHead head;
	head.magic[0] = protobufHead[0];
	head.magic[1] = protobufHead[1];
	head.magic[2] = protobufHead[2];
	head.magic[3] = protobufHead[3];
	int resProtoBufLen = sProtobufData.length();
	if (resProtoBufLen <= 0)
	{
		pubFunc::logprint("-----pack RPC length error  ------\n", LOGPRINT, LEVEL_INFO);
	}
	char szTemp[1024] = { 0 };
	memset(szTemp, 0, 1024);
	sprintf(szTemp, "---response to control proto buf length is %d--\n", resProtoBufLen);
	pubFunc::logprint(szTemp, LOGPRINT, LEVEL_ERROR);
	if (resProtoBufLen >47)
	printf("---response to control proto buf length is %d--", resProtoBufLen);

	req->set_service_name(strServiceName.c_str());
	req->set_method_name(strMethodName.c_str());
	rpcmeta.set_allocated_request(req);
	string metaData;
	rpcmeta.SerializeToString(&metaData);
	int metaLen = metaData.length();

	head.length = metaLen + resProtoBufLen;
	head.meta_length = metaLen;
	//printf("head.length:%d, head.meta_length:%d!\n", head.length, head.meta_length);
	char tmpBuf[1024] = { 0 };
	head.length = htonl(head.length);
	head.meta_length = htonl(head.meta_length);
	//printf("head.length:%d, head.meta_length:%d!\n", head.length, head.meta_length);
	memcpy(tmpBuf, (char *)&head, sizeof(PrpcHead));
	//printf("tmpBuf:%d,content:%s,PrpcHeadsize:%d!\n", strlen(tmpBuf), tmpBuf, sizeof(PrpcHead));

	sRPCData.assign(tmpBuf, sizeof(PrpcHead));
	sRPCData += metaData;
	sRPCData += sProtobufData;
	iRPCSize = sRPCData.length();


	return 0;
}


int netMutualFunc::sendInfoToLogServer(string sRPCData, int iRPCDataSize)
{

	int remoteSocket = 0;
	char tmpbuf[1024] = { 0 };
	int cnt = 1;
	int iret = 0, i = 0;
	char * buf = NULL;
	int nfds = 0;
	struct epoll_event localReqEvent, remoteRespevents[20];//
	int localRegEpollFd;//

	localRegEpollFd = epoll_create(1);
	remoteSocket = socketCreateConnect(netParas::logServerIP, netParas::logServerPort, 0);
	//remoteSocket = socketCreateConnect("10.10.7.131", 9222, 0);


	localReqEvent.data.fd = remoteSocket;
	localReqEvent.events = EPOLLIN | EPOLLET;
	epoll_ctl(localRegEpollFd, EPOLL_CTL_ADD, remoteSocket, &localReqEvent);

	if (remoteSocket <= 0)
	{
		printf("create failed \n");
		return -1;
	}
	iret = write(remoteSocket, sRPCData.c_str(), iRPCDataSize);
	close(localReqEvent.data.fd);
	close(remoteSocket);
	if (iret <= 0)
		return -1;

	return iret;
}


/*
	函数：将control传输过来的protobuf数据打包成RPC标准协议发给MDM，并将MDM返回的数据
	解包出protobuf数据
	参数：sActivityID	
		sMDMProtoBuf  MDM的序列化数据
*/
int netMutualFunc::sendRPCInfoToMDM(int sActivityID,  string& sMDMProtoBuf)
{
	//将device_activity_id 赋值给 即将发给mdm的结构体

	ReqDeviceActivity  pPTCenter;
	pPTCenter.set_activity_id(sActivityID);
	string sSendMdm, sSendRPCMdm;
	pPTCenter.SerializeToString(&sSendMdm);
	int iSendRPCMdmSize;

	packRPC(sSendMdm, sSendRPCMdm, iSendRPCMdmSize, "DeviceService", "GetActivityInfo");

	char* szRecMdm = NULL;
	pubFunc::applyOrRemoveMemory(&szRecMdm, 10240);

	char sTemp[1024] = { 0 };
	sprintf(sTemp, "----send to mdm length %d----", iSendRPCMdmSize);
	pubFunc::logprint(sTemp, LOGPRINT, LEVEL_INFO);

	int iRecMdmSize = READSOCKETBUF;

	struct timeval start, stop, diff;
	gettimeofday(&start, 0);

	int iRes = sendInfoToMDM((char*)sSendRPCMdm.c_str(), iSendRPCMdmSize, szRecMdm, iRecMdmSize);
	
	gettimeofday(&stop, 0);
	pubFunc::timeval_subtract(&diff, &start, &stop);

	if (iRes == -1 || iRecMdmSize < 0)
	{
		pubFunc::logprint("-----sendInfoToMDM failed----", LOGPRINT, LEVEL_INFO);
		return -1;
	}

	memset(sTemp, 0, 1024);
	sprintf(sTemp, "---the size from mdm is %d-----send to mdm cost time %d----\n", iRecMdmSize, diff.tv_usec);
	pubFunc::logprint(sTemp, LOGPRINT, LEVEL_INFO);

	string sRecRPCMdm;
	sRecRPCMdm.assign(szRecMdm, iRecMdmSize);
	pubFunc::applyOrRemoveMemory(&szRecMdm, 0);
	ParseRPC(sRecRPCMdm, sMDMProtoBuf);

	return 0;
}

/*
	函数：将mdm传输过来的protobuf数据打包成RPC标准协议发给DBProvider，并将DBProvider返回的数据
		  解包出protobuf数据
	参数：sMDMProtoBuf MDM的序列化的数据
		  sDBProProtoBuf  DBProvider的序列化数据
		  pConTP control饭序列化后的对象
*/
int netMutualFunc::	sendRPCInfoToDBPro(string sMDMProtoBuf, string& sDBProProtoBuf, CtlRequstPolicy& pConTP, string &sRecDBPRC)
{
	RespDeviceActivity pMTP;
	pMTP.ParseFromString(sMDMProtoBuf);
	MsgFromPolicyToDBProvider pPTDB;
	pPTDB.set_user_id(pMTP.user_id());
	pPTDB.set_device_id(pMTP.device_id());
	pPTDB.set_product_id(pConTP.product_id());
	pPTDB.set_event_id(pConTP.event_id());
	pPTDB.set_enterprise_id(pMTP.enterprise_id());
	pPTDB.set_network_id(pMTP.network_id());
	
	int iNum = pMTP.map_id_size();
	string strTemp;
	strTemp = strTemp + " recieve from mdm map count "; 
	char s[30] = {0};
	sprintf(s, "%d", iNum);
	strTemp = strTemp + s + " content ";

	for (int i = 0; i < iNum; i++)
	{
		pPTDB.add_map_id(pMTP.map_id(i));
		char s[30];
		sprintf(s, "%d", pMTP.map_id(i));
		strTemp = strTemp + s + " ";
	}

	strTemp = strTemp + "device_group_id count ";
	iNum = pMTP.device_group_id_size();
	memset(s, 0, 30);
	sprintf(s, "%d", iNum);
	strTemp = strTemp + s + " content ";
	for (int i = 0; i < iNum; i++)
	{
		pPTDB.add_device_group_id(pMTP.device_group_id(i));
		char s[30];
		sprintf(s, "%d", pMTP.device_group_id(i));
		strTemp = strTemp + s + " ";

	}
	pubFunc::logprint(strTemp.c_str(), LOGPRINT, LEVEL_INFO);
	pPTDB.set_msg_id(pConTP.msg_id());
	pPTDB.set_traffic_id(pConTP.traffic_id());
	pPTDB.set_session_id(pConTP.session_id());
	pPTDB.set_device_activity_id(pMTP.activity_id());
	pPTDB.set_enc_product_id(pConTP.enc_product_id());
	char sTemp[1024] = {0};
	sprintf(sTemp, "----Recieve from MDM data %d %d %d %d activity_id %d----", pMTP.user_id(), pMTP.enterprise_id(), pMTP.device_id(), pMTP.network_id(), pMTP.activity_id());
	pubFunc::logprint(sTemp, LOGPRINT, LEVEL_INFO);

	string sSendDB, sSendDBRPC, sRecDBProto;
	int iSendDBRPCSize, iRecDBRPCSize = 10240;
	char* szRecDB = NULL;
	pubFunc::applyOrRemoveMemory(&szRecDB, 10240);
	pPTDB.SerializeToString(&sSendDB);

	packRPC(sSendDB, sSendDBRPC, iSendDBRPCSize,"","");

	memset(sTemp, 0, 1024);
	sprintf(sTemp, "----Send to DBProvider data userid:%d  device_id:%d  product_id:%d  event_id:%d  network_id:%d  activity_id %d  sSendDBRPC length : %d  traffic_id %s session_id %s  enc_product_id %d------", pPTDB.user_id(), pPTDB.device_id(), pPTDB.product_id(),
		pPTDB.event_id(), pPTDB.network_id(), pMTP.activity_id(), iSendDBRPCSize, pConTP.traffic_id().c_str(), pConTP.session_id().c_str(), pConTP.enc_product_id());
	pubFunc::logprint(sTemp, LOGPRINT, LEVEL_INFO);

	struct timeval start, stop, diff;
	gettimeofday(&start, 0);

	int iRes = sendInfoToDBPro((char*)sSendDBRPC.c_str(), iSendDBRPCSize, szRecDB, iRecDBRPCSize);
	gettimeofday(&stop, 0);
	pubFunc::timeval_subtract(&diff, &start, &stop);

	memset(sTemp, 0, 1024);
	sprintf(sTemp, "---recieve from DBProvider length---iRecDBRPCSize %d---send to DBProvinder cost time : %d----\n", iRecDBRPCSize, diff.tv_usec);
	pubFunc::logprint(sTemp, LOGPRINT, LEVEL_INFO);



	if (iRes == -1 || iRecDBRPCSize < 0)
	{
		pubFunc::logprint("-----sendInfoToDBPro failed------\n", LOGPRINT, LEVEL_INFO);
		return -1;
	}

	sRecDBPRC.assign(szRecDB, iRecDBRPCSize);
	pubFunc::applyOrRemoveMemory(&szRecDB, 0);

	ParseRPC(sRecDBPRC, sDBProProtoBuf);
	return 0;
}
