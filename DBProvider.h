
#ifndef DBPROVIDER_H_
#define DBPROVIDER_H_

#include <stdio.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//#include <linux/tcp.h>
#include <linux/types.h>
#include <linux/ip.h>
#include <netinet/tcp.h>

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <map>
#include <sstream> 
#include <fstream>


#if	0
#include "RpcMeta.pb.h"
#include "policyToDBProvider.pb.h"
#include "cloudPolicy.pb.h"
#include "DBProviderToPolicy.pb.h"
#include "DBProviderServerAndClient.pb.h"
#else
#include "3rdparty.h"
#endif

using namespace std; //std �����ռ�

#define SERVER_IP_MAX_LEN	20
#define BUF_SIZE			1024
#define MINI_BUF_SIZE		128

#define	MINI_PACKAGE_LEN_LIMIT	12
#define LIMIT_KEEPALIVE		3
#define MAX_PROCESS_PTHREAD_CNT 10

#define DISPATCH_TASK_NUM	3

#define PROTO_HEAD_ID_LEN	8
#define MSG_ID_MAX_LIMIT	60000

#define MSG_HEAD_STR		0xFE
#define MSG_HEAD_LEN_IDENT	1
#define MSG_DATA_LEN_IDENT	3

#define TASK_AGE_LIMIT		5	//�ϻ����ݣ���λΪ��

#define INT64	unsigned long long int
#define	INT32	int
#define UINT32	unsigned int
#define	INT16	short int
#define INT8 	char

#define	HEARTPORT_STR		"heartPort"
#define	HEARTPORT_DEFAULT	11010

#define	DATAPORT_STR		"dataPort"
#define	DATAPORT_DEFAULT	11012

#define	SERVICEPORT_STR		"servicePort"
#define	SERVICEPORT_DEFAULT	11011

#define	LOGFILENAME_STR		"logFileName"
#define	LOGFILENAME_DEFAULT	"DBProviderServer.log"

#define CAPABILITY_LIMIT_MIN	0
#define CAPABILITY_LIMIT_MAX	10

typedef enum {
	LEVEL_ERROR,
	LEVEL_WARN,
	LEVEL_DEBUG,
	LEVEL_INFO,
	LEVEL_MAX
}LOG_LEVEL;


struct _taskInfo{
	policymsgpolicytodbprovider::MsgFromPolicyToDBProvider  taskStruct;
	
	INT64	msg_id;
	INT64	local_msg_id;
	time_t	ageTime;
	int		sock;

	void *policyData;

	bool operator==(const struct _taskInfo &rhs) const
	{
	   if( this->local_msg_id != rhs.local_msg_id) return false;
	   if( this->sock != rhs.sock) return false;

	   return true;
	}		

	bool operator<(const struct _taskInfo & rhs) const
	{
		if (rhs.sock < this->sock) return true;
		return false;
	}

	bool operator>(const struct _taskInfo & rhs) const
	{
		if (rhs.sock < this->sock) return false;
		return true;
	}


	bool operator!=(const struct _taskInfo &rhs) const
	{
	   if( this->local_msg_id != rhs.local_msg_id) return true;
	   if( this->sock != rhs.sock) return true;
	
	   return false;
	}	
};

typedef struct _taskInfo TaskInfo;


typedef struct _ClientList{

	string strIpAddr;
	int clientRegPort;
	int clientDataPort;
	
	int	dataSock;
	int clientSock;
	int capability;

	int keepalive;
	int errCount;

	pthread_mutex_t *taskPoolLock;
	//list<TaskInfo> taskPool;
	map<int, TaskInfo> taskPool;
	struct _ClientList* next;
}ClientList;

typedef struct _taskCToSList{

	string ipAddr;
	int port;

	int sock;
}TaskCToSList;

/*protobuf*/
typedef struct PrpcHead_t {
	uint8_t magic[4];      //'P','R','P','C'
	uint32_t length;
	uint32_t meta_length;
}PrpcHead;


typedef struct{
	int heartPort;
	int dataPort;
	int servicePort;
	string logFileName;
}ParseConfig;


#endif


