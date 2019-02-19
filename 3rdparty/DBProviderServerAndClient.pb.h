// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DBProviderServerAndClient.proto

#ifndef PROTOBUF_DBProviderServerAndClient_2eproto__INCLUDED
#define PROTOBUF_DBProviderServerAndClient_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace com {
namespace policy {
namespace msgdbproviderserverandclient {
class MsgDBProviderServerClient;
class MsgDBProviderServerClientDefaultTypeInternal;
extern MsgDBProviderServerClientDefaultTypeInternal _MsgDBProviderServerClient_default_instance_;
}  // namespace msgdbproviderserverandclient
}  // namespace policy
}  // namespace com

namespace com {
namespace policy {
namespace msgdbproviderserverandclient {

namespace protobuf_DBProviderServerAndClient_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_DBProviderServerAndClient_2eproto

// ===================================================================

class MsgDBProviderServerClient : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient) */ {
 public:
  MsgDBProviderServerClient();
  virtual ~MsgDBProviderServerClient();

  MsgDBProviderServerClient(const MsgDBProviderServerClient& from);

  inline MsgDBProviderServerClient& operator=(const MsgDBProviderServerClient& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgDBProviderServerClient(MsgDBProviderServerClient&& from) noexcept
    : MsgDBProviderServerClient() {
    *this = ::std::move(from);
  }

  inline MsgDBProviderServerClient& operator=(MsgDBProviderServerClient&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgDBProviderServerClient& default_instance();

  static inline const MsgDBProviderServerClient* internal_default_instance() {
    return reinterpret_cast<const MsgDBProviderServerClient*>(
               &_MsgDBProviderServerClient_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MsgDBProviderServerClient* other);
  friend void swap(MsgDBProviderServerClient& a, MsgDBProviderServerClient& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgDBProviderServerClient* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgDBProviderServerClient* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MsgDBProviderServerClient& from);
  void MergeFrom(const MsgDBProviderServerClient& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MsgDBProviderServerClient* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 dataport = 30;
  void clear_dataport();
  static const int kDataportFieldNumber = 30;
  ::google::protobuf::uint32 dataport() const;
  void set_dataport(::google::protobuf::uint32 value);

  // uint32 capability = 10;
  void clear_capability();
  static const int kCapabilityFieldNumber = 10;
  ::google::protobuf::uint32 capability() const;
  void set_capability(::google::protobuf::uint32 value);

  // uint32 keepalive = 20;
  void clear_keepalive();
  static const int kKeepaliveFieldNumber = 20;
  ::google::protobuf::uint32 keepalive() const;
  void set_keepalive(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 dataport_;
  ::google::protobuf::uint32 capability_;
  ::google::protobuf::uint32 keepalive_;
  mutable int _cached_size_;
  friend struct protobuf_DBProviderServerAndClient_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgDBProviderServerClient

// uint32 capability = 10;
inline void MsgDBProviderServerClient::clear_capability() {
  capability_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderServerClient::capability() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient.capability)
  return capability_;
}
inline void MsgDBProviderServerClient::set_capability(::google::protobuf::uint32 value) {
  
  capability_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient.capability)
}

// uint32 keepalive = 20;
inline void MsgDBProviderServerClient::clear_keepalive() {
  keepalive_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderServerClient::keepalive() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient.keepalive)
  return keepalive_;
}
inline void MsgDBProviderServerClient::set_keepalive(::google::protobuf::uint32 value) {
  
  keepalive_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient.keepalive)
}

// uint32 dataport = 30;
inline void MsgDBProviderServerClient::clear_dataport() {
  dataport_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderServerClient::dataport() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient.dataport)
  return dataport_;
}
inline void MsgDBProviderServerClient::set_dataport(::google::protobuf::uint32 value) {
  
  dataport_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbproviderserverandclient.MsgDBProviderServerClient.dataport)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace msgdbproviderserverandclient
}  // namespace policy
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DBProviderServerAndClient_2eproto__INCLUDED