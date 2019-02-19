// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PolicyVSMdmInteraction.proto

#ifndef PROTOBUF_PolicyVSMdmInteraction_2eproto__INCLUDED
#define PROTOBUF_PolicyVSMdmInteraction_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace policyvsmdminteraction {
class ReqDeviceActivity;
class ReqDeviceActivityDefaultTypeInternal;
extern ReqDeviceActivityDefaultTypeInternal _ReqDeviceActivity_default_instance_;
class RespDeviceActivity;
class RespDeviceActivityDefaultTypeInternal;
extern RespDeviceActivityDefaultTypeInternal _RespDeviceActivity_default_instance_;
}  // namespace policyvsmdminteraction

namespace policyvsmdminteraction {

namespace protobuf_PolicyVSMdmInteraction_2eproto {
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
}  // namespace protobuf_PolicyVSMdmInteraction_2eproto

enum RespDeviceActivity_NetWorkType {
  RespDeviceActivity_NetWorkType_NET_NO = 0,
  RespDeviceActivity_NetWorkType_NET_WIFI = 1,
  RespDeviceActivity_NetWorkType_NET_CELLULAR = 2,
  RespDeviceActivity_NetWorkType_RespDeviceActivity_NetWorkType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  RespDeviceActivity_NetWorkType_RespDeviceActivity_NetWorkType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool RespDeviceActivity_NetWorkType_IsValid(int value);
const RespDeviceActivity_NetWorkType RespDeviceActivity_NetWorkType_NetWorkType_MIN = RespDeviceActivity_NetWorkType_NET_NO;
const RespDeviceActivity_NetWorkType RespDeviceActivity_NetWorkType_NetWorkType_MAX = RespDeviceActivity_NetWorkType_NET_CELLULAR;
const int RespDeviceActivity_NetWorkType_NetWorkType_ARRAYSIZE = RespDeviceActivity_NetWorkType_NetWorkType_MAX + 1;

const ::google::protobuf::EnumDescriptor* RespDeviceActivity_NetWorkType_descriptor();
inline const ::std::string& RespDeviceActivity_NetWorkType_Name(RespDeviceActivity_NetWorkType value) {
  return ::google::protobuf::internal::NameOfEnum(
    RespDeviceActivity_NetWorkType_descriptor(), value);
}
inline bool RespDeviceActivity_NetWorkType_Parse(
    const ::std::string& name, RespDeviceActivity_NetWorkType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RespDeviceActivity_NetWorkType>(
    RespDeviceActivity_NetWorkType_descriptor(), name, value);
}
// ===================================================================

class ReqDeviceActivity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:policyvsmdminteraction.ReqDeviceActivity) */ {
 public:
  ReqDeviceActivity();
  virtual ~ReqDeviceActivity();

  ReqDeviceActivity(const ReqDeviceActivity& from);

  inline ReqDeviceActivity& operator=(const ReqDeviceActivity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ReqDeviceActivity(ReqDeviceActivity&& from) noexcept
    : ReqDeviceActivity() {
    *this = ::std::move(from);
  }

  inline ReqDeviceActivity& operator=(ReqDeviceActivity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ReqDeviceActivity& default_instance();

  static inline const ReqDeviceActivity* internal_default_instance() {
    return reinterpret_cast<const ReqDeviceActivity*>(
               &_ReqDeviceActivity_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ReqDeviceActivity* other);
  friend void swap(ReqDeviceActivity& a, ReqDeviceActivity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ReqDeviceActivity* New() const PROTOBUF_FINAL { return New(NULL); }

  ReqDeviceActivity* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReqDeviceActivity& from);
  void MergeFrom(const ReqDeviceActivity& from);
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
  void InternalSwap(ReqDeviceActivity* other);
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

  // uint64 activity_id = 1;
  void clear_activity_id();
  static const int kActivityIdFieldNumber = 1;
  ::google::protobuf::uint64 activity_id() const;
  void set_activity_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:policyvsmdminteraction.ReqDeviceActivity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 activity_id_;
  mutable int _cached_size_;
  friend struct protobuf_PolicyVSMdmInteraction_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class RespDeviceActivity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:policyvsmdminteraction.RespDeviceActivity) */ {
 public:
  RespDeviceActivity();
  virtual ~RespDeviceActivity();

  RespDeviceActivity(const RespDeviceActivity& from);

  inline RespDeviceActivity& operator=(const RespDeviceActivity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RespDeviceActivity(RespDeviceActivity&& from) noexcept
    : RespDeviceActivity() {
    *this = ::std::move(from);
  }

  inline RespDeviceActivity& operator=(RespDeviceActivity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RespDeviceActivity& default_instance();

  static inline const RespDeviceActivity* internal_default_instance() {
    return reinterpret_cast<const RespDeviceActivity*>(
               &_RespDeviceActivity_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(RespDeviceActivity* other);
  friend void swap(RespDeviceActivity& a, RespDeviceActivity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RespDeviceActivity* New() const PROTOBUF_FINAL { return New(NULL); }

  RespDeviceActivity* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RespDeviceActivity& from);
  void MergeFrom(const RespDeviceActivity& from);
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
  void InternalSwap(RespDeviceActivity* other);
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

  typedef RespDeviceActivity_NetWorkType NetWorkType;
  static const NetWorkType NET_NO =
    RespDeviceActivity_NetWorkType_NET_NO;
  static const NetWorkType NET_WIFI =
    RespDeviceActivity_NetWorkType_NET_WIFI;
  static const NetWorkType NET_CELLULAR =
    RespDeviceActivity_NetWorkType_NET_CELLULAR;
  static inline bool NetWorkType_IsValid(int value) {
    return RespDeviceActivity_NetWorkType_IsValid(value);
  }
  static const NetWorkType NetWorkType_MIN =
    RespDeviceActivity_NetWorkType_NetWorkType_MIN;
  static const NetWorkType NetWorkType_MAX =
    RespDeviceActivity_NetWorkType_NetWorkType_MAX;
  static const int NetWorkType_ARRAYSIZE =
    RespDeviceActivity_NetWorkType_NetWorkType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  NetWorkType_descriptor() {
    return RespDeviceActivity_NetWorkType_descriptor();
  }
  static inline const ::std::string& NetWorkType_Name(NetWorkType value) {
    return RespDeviceActivity_NetWorkType_Name(value);
  }
  static inline bool NetWorkType_Parse(const ::std::string& name,
      NetWorkType* value) {
    return RespDeviceActivity_NetWorkType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // uint64 user_id = 1;
  void clear_user_id();
  static const int kUserIdFieldNumber = 1;
  ::google::protobuf::uint64 user_id() const;
  void set_user_id(::google::protobuf::uint64 value);

  // uint64 enterprise_id = 2;
  void clear_enterprise_id();
  static const int kEnterpriseIdFieldNumber = 2;
  ::google::protobuf::uint64 enterprise_id() const;
  void set_enterprise_id(::google::protobuf::uint64 value);

  // uint64 device_id = 3;
  void clear_device_id();
  static const int kDeviceIdFieldNumber = 3;
  ::google::protobuf::uint64 device_id() const;
  void set_device_id(::google::protobuf::uint64 value);

  // uint32 map_id = 4;
  void clear_map_id();
  static const int kMapIdFieldNumber = 4;
  ::google::protobuf::uint32 map_id() const;
  void set_map_id(::google::protobuf::uint32 value);

  // .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
  void clear_network_id();
  static const int kNetworkIdFieldNumber = 5;
  ::policyvsmdminteraction::RespDeviceActivity_NetWorkType network_id() const;
  void set_network_id(::policyvsmdminteraction::RespDeviceActivity_NetWorkType value);

  // uint64 activity_id = 6;
  void clear_activity_id();
  static const int kActivityIdFieldNumber = 6;
  ::google::protobuf::uint64 activity_id() const;
  void set_activity_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:policyvsmdminteraction.RespDeviceActivity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 user_id_;
  ::google::protobuf::uint64 enterprise_id_;
  ::google::protobuf::uint64 device_id_;
  ::google::protobuf::uint32 map_id_;
  int network_id_;
  ::google::protobuf::uint64 activity_id_;
  mutable int _cached_size_;
  friend struct protobuf_PolicyVSMdmInteraction_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReqDeviceActivity

// uint64 activity_id = 1;
inline void ReqDeviceActivity::clear_activity_id() {
  activity_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ReqDeviceActivity::activity_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.ReqDeviceActivity.activity_id)
  return activity_id_;
}
inline void ReqDeviceActivity::set_activity_id(::google::protobuf::uint64 value) {
  
  activity_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.ReqDeviceActivity.activity_id)
}

// -------------------------------------------------------------------

// RespDeviceActivity

// uint64 user_id = 1;
inline void RespDeviceActivity::clear_user_id() {
  user_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 RespDeviceActivity::user_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.user_id)
  return user_id_;
}
inline void RespDeviceActivity::set_user_id(::google::protobuf::uint64 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.user_id)
}

// uint64 enterprise_id = 2;
inline void RespDeviceActivity::clear_enterprise_id() {
  enterprise_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 RespDeviceActivity::enterprise_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.enterprise_id)
  return enterprise_id_;
}
inline void RespDeviceActivity::set_enterprise_id(::google::protobuf::uint64 value) {
  
  enterprise_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.enterprise_id)
}

// uint64 device_id = 3;
inline void RespDeviceActivity::clear_device_id() {
  device_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 RespDeviceActivity::device_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.device_id)
  return device_id_;
}
inline void RespDeviceActivity::set_device_id(::google::protobuf::uint64 value) {
  
  device_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.device_id)
}

// uint32 map_id = 4;
inline void RespDeviceActivity::clear_map_id() {
  map_id_ = 0u;
}
inline ::google::protobuf::uint32 RespDeviceActivity::map_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.map_id)
  return map_id_;
}
inline void RespDeviceActivity::set_map_id(::google::protobuf::uint32 value) {
  
  map_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.map_id)
}

// .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
inline void RespDeviceActivity::clear_network_id() {
  network_id_ = 0;
}
inline ::policyvsmdminteraction::RespDeviceActivity_NetWorkType RespDeviceActivity::network_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.network_id)
  return static_cast< ::policyvsmdminteraction::RespDeviceActivity_NetWorkType >(network_id_);
}
inline void RespDeviceActivity::set_network_id(::policyvsmdminteraction::RespDeviceActivity_NetWorkType value) {
  
  network_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.network_id)
}

// uint64 activity_id = 6;
inline void RespDeviceActivity::clear_activity_id() {
  activity_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 RespDeviceActivity::activity_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.activity_id)
  return activity_id_;
}
inline void RespDeviceActivity::set_activity_id(::google::protobuf::uint64 value) {
  
  activity_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.activity_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace policyvsmdminteraction

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::policyvsmdminteraction::RespDeviceActivity_NetWorkType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::policyvsmdminteraction::RespDeviceActivity_NetWorkType>() {
  return ::policyvsmdminteraction::RespDeviceActivity_NetWorkType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PolicyVSMdmInteraction_2eproto__INCLUDED