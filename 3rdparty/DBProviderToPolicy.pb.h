// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DBProviderToPolicy.proto

#ifndef PROTOBUF_DBProviderToPolicy_2eproto__INCLUDED
#define PROTOBUF_DBProviderToPolicy_2eproto__INCLUDED

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
namespace msgdbprovidertopolicy {
class MsgDBProviderToPolicy;
class MsgDBProviderToPolicyDefaultTypeInternal;
extern MsgDBProviderToPolicyDefaultTypeInternal _MsgDBProviderToPolicy_default_instance_;
}  // namespace msgdbprovidertopolicy
}  // namespace policy
}  // namespace com

namespace com {
namespace policy {
namespace msgdbprovidertopolicy {

namespace protobuf_DBProviderToPolicy_2eproto {
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
}  // namespace protobuf_DBProviderToPolicy_2eproto

// ===================================================================

class MsgDBProviderToPolicy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy) */ {
 public:
  MsgDBProviderToPolicy();
  virtual ~MsgDBProviderToPolicy();

  MsgDBProviderToPolicy(const MsgDBProviderToPolicy& from);

  inline MsgDBProviderToPolicy& operator=(const MsgDBProviderToPolicy& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgDBProviderToPolicy(MsgDBProviderToPolicy&& from) noexcept
    : MsgDBProviderToPolicy() {
    *this = ::std::move(from);
  }

  inline MsgDBProviderToPolicy& operator=(MsgDBProviderToPolicy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgDBProviderToPolicy& default_instance();

  static inline const MsgDBProviderToPolicy* internal_default_instance() {
    return reinterpret_cast<const MsgDBProviderToPolicy*>(
               &_MsgDBProviderToPolicy_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MsgDBProviderToPolicy* other);
  friend void swap(MsgDBProviderToPolicy& a, MsgDBProviderToPolicy& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgDBProviderToPolicy* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgDBProviderToPolicy* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MsgDBProviderToPolicy& from);
  void MergeFrom(const MsgDBProviderToPolicy& from);
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
  void InternalSwap(MsgDBProviderToPolicy* other);
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

  // string session_id = 10;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 10;
  const ::std::string& session_id() const;
  void set_session_id(const ::std::string& value);
  #if LANG_CXX11
  void set_session_id(::std::string&& value);
  #endif
  void set_session_id(const char* value);
  void set_session_id(const char* value, size_t size);
  ::std::string* mutable_session_id();
  ::std::string* release_session_id();
  void set_allocated_session_id(::std::string* session_id);

  // string traffic_id = 20;
  void clear_traffic_id();
  static const int kTrafficIdFieldNumber = 20;
  const ::std::string& traffic_id() const;
  void set_traffic_id(const ::std::string& value);
  #if LANG_CXX11
  void set_traffic_id(::std::string&& value);
  #endif
  void set_traffic_id(const char* value);
  void set_traffic_id(const char* value, size_t size);
  ::std::string* mutable_traffic_id();
  ::std::string* release_traffic_id();
  void set_allocated_traffic_id(::std::string* traffic_id);

  // string encry_key = 60;
  void clear_encry_key();
  static const int kEncryKeyFieldNumber = 60;
  const ::std::string& encry_key() const;
  void set_encry_key(const ::std::string& value);
  #if LANG_CXX11
  void set_encry_key(::std::string&& value);
  #endif
  void set_encry_key(const char* value);
  void set_encry_key(const char* value, size_t size);
  ::std::string* mutable_encry_key();
  ::std::string* release_encry_key();
  void set_allocated_encry_key(::std::string* encry_key);

  // string encry_value = 70;
  void clear_encry_value();
  static const int kEncryValueFieldNumber = 70;
  const ::std::string& encry_value() const;
  void set_encry_value(const ::std::string& value);
  #if LANG_CXX11
  void set_encry_value(::std::string&& value);
  #endif
  void set_encry_value(const char* value);
  void set_encry_value(const char* value, size_t size);
  ::std::string* mutable_encry_value();
  ::std::string* release_encry_value();
  void set_allocated_encry_value(::std::string* encry_value);

  // string encry_text = 80;
  void clear_encry_text();
  static const int kEncryTextFieldNumber = 80;
  const ::std::string& encry_text() const;
  void set_encry_text(const ::std::string& value);
  #if LANG_CXX11
  void set_encry_text(::std::string&& value);
  #endif
  void set_encry_text(const char* value);
  void set_encry_text(const char* value, size_t size);
  ::std::string* mutable_encry_text();
  ::std::string* release_encry_text();
  void set_allocated_encry_text(::std::string* encry_text);

  // string csp_name = 90;
  void clear_csp_name();
  static const int kCspNameFieldNumber = 90;
  const ::std::string& csp_name() const;
  void set_csp_name(const ::std::string& value);
  #if LANG_CXX11
  void set_csp_name(::std::string&& value);
  #endif
  void set_csp_name(const char* value);
  void set_csp_name(const char* value, size_t size);
  ::std::string* mutable_csp_name();
  ::std::string* release_csp_name();
  void set_allocated_csp_name(::std::string* csp_name);

  // uint32 action_taken = 30;
  void clear_action_taken();
  static const int kActionTakenFieldNumber = 30;
  ::google::protobuf::uint32 action_taken() const;
  void set_action_taken(::google::protobuf::uint32 value);

  // uint32 msg_id = 40;
  void clear_msg_id();
  static const int kMsgIdFieldNumber = 40;
  ::google::protobuf::uint32 msg_id() const;
  void set_msg_id(::google::protobuf::uint32 value);

  // uint32 log_type = 50;
  void clear_log_type();
  static const int kLogTypeFieldNumber = 50;
  ::google::protobuf::uint32 log_type() const;
  void set_log_type(::google::protobuf::uint32 value);

  // uint32 enable_encry = 100;
  void clear_enable_encry();
  static const int kEnableEncryFieldNumber = 100;
  ::google::protobuf::uint32 enable_encry() const;
  void set_enable_encry(::google::protobuf::uint32 value);

  // uint64 user_id = 110;
  void clear_user_id();
  static const int kUserIdFieldNumber = 110;
  ::google::protobuf::uint64 user_id() const;
  void set_user_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr session_id_;
  ::google::protobuf::internal::ArenaStringPtr traffic_id_;
  ::google::protobuf::internal::ArenaStringPtr encry_key_;
  ::google::protobuf::internal::ArenaStringPtr encry_value_;
  ::google::protobuf::internal::ArenaStringPtr encry_text_;
  ::google::protobuf::internal::ArenaStringPtr csp_name_;
  ::google::protobuf::uint32 action_taken_;
  ::google::protobuf::uint32 msg_id_;
  ::google::protobuf::uint32 log_type_;
  ::google::protobuf::uint32 enable_encry_;
  ::google::protobuf::uint64 user_id_;
  mutable int _cached_size_;
  friend struct protobuf_DBProviderToPolicy_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgDBProviderToPolicy

// string session_id = 10;
inline void MsgDBProviderToPolicy::clear_session_id() {
  session_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgDBProviderToPolicy::session_id() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
  return session_id_.GetNoArena();
}
inline void MsgDBProviderToPolicy::set_session_id(const ::std::string& value) {
  
  session_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
}
#if LANG_CXX11
inline void MsgDBProviderToPolicy::set_session_id(::std::string&& value) {
  
  session_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
}
#endif
inline void MsgDBProviderToPolicy::set_session_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  session_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
}
inline void MsgDBProviderToPolicy::set_session_id(const char* value, size_t size) {
  
  session_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
}
inline ::std::string* MsgDBProviderToPolicy::mutable_session_id() {
  
  // @@protoc_insertion_point(field_mutable:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
  return session_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgDBProviderToPolicy::release_session_id() {
  // @@protoc_insertion_point(field_release:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
  
  return session_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgDBProviderToPolicy::set_allocated_session_id(::std::string* session_id) {
  if (session_id != NULL) {
    
  } else {
    
  }
  session_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), session_id);
  // @@protoc_insertion_point(field_set_allocated:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.session_id)
}

// string traffic_id = 20;
inline void MsgDBProviderToPolicy::clear_traffic_id() {
  traffic_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgDBProviderToPolicy::traffic_id() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
  return traffic_id_.GetNoArena();
}
inline void MsgDBProviderToPolicy::set_traffic_id(const ::std::string& value) {
  
  traffic_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
}
#if LANG_CXX11
inline void MsgDBProviderToPolicy::set_traffic_id(::std::string&& value) {
  
  traffic_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
}
#endif
inline void MsgDBProviderToPolicy::set_traffic_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  traffic_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
}
inline void MsgDBProviderToPolicy::set_traffic_id(const char* value, size_t size) {
  
  traffic_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
}
inline ::std::string* MsgDBProviderToPolicy::mutable_traffic_id() {
  
  // @@protoc_insertion_point(field_mutable:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
  return traffic_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgDBProviderToPolicy::release_traffic_id() {
  // @@protoc_insertion_point(field_release:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
  
  return traffic_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgDBProviderToPolicy::set_allocated_traffic_id(::std::string* traffic_id) {
  if (traffic_id != NULL) {
    
  } else {
    
  }
  traffic_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), traffic_id);
  // @@protoc_insertion_point(field_set_allocated:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.traffic_id)
}

// uint32 action_taken = 30;
inline void MsgDBProviderToPolicy::clear_action_taken() {
  action_taken_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderToPolicy::action_taken() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.action_taken)
  return action_taken_;
}
inline void MsgDBProviderToPolicy::set_action_taken(::google::protobuf::uint32 value) {
  
  action_taken_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.action_taken)
}

// uint32 msg_id = 40;
inline void MsgDBProviderToPolicy::clear_msg_id() {
  msg_id_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderToPolicy::msg_id() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.msg_id)
  return msg_id_;
}
inline void MsgDBProviderToPolicy::set_msg_id(::google::protobuf::uint32 value) {
  
  msg_id_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.msg_id)
}

// uint32 log_type = 50;
inline void MsgDBProviderToPolicy::clear_log_type() {
  log_type_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderToPolicy::log_type() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.log_type)
  return log_type_;
}
inline void MsgDBProviderToPolicy::set_log_type(::google::protobuf::uint32 value) {
  
  log_type_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.log_type)
}

// string encry_key = 60;
inline void MsgDBProviderToPolicy::clear_encry_key() {
  encry_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgDBProviderToPolicy::encry_key() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
  return encry_key_.GetNoArena();
}
inline void MsgDBProviderToPolicy::set_encry_key(const ::std::string& value) {
  
  encry_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
}
#if LANG_CXX11
inline void MsgDBProviderToPolicy::set_encry_key(::std::string&& value) {
  
  encry_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
}
#endif
inline void MsgDBProviderToPolicy::set_encry_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  encry_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
}
inline void MsgDBProviderToPolicy::set_encry_key(const char* value, size_t size) {
  
  encry_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
}
inline ::std::string* MsgDBProviderToPolicy::mutable_encry_key() {
  
  // @@protoc_insertion_point(field_mutable:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
  return encry_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgDBProviderToPolicy::release_encry_key() {
  // @@protoc_insertion_point(field_release:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
  
  return encry_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgDBProviderToPolicy::set_allocated_encry_key(::std::string* encry_key) {
  if (encry_key != NULL) {
    
  } else {
    
  }
  encry_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encry_key);
  // @@protoc_insertion_point(field_set_allocated:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_key)
}

// string encry_value = 70;
inline void MsgDBProviderToPolicy::clear_encry_value() {
  encry_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgDBProviderToPolicy::encry_value() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
  return encry_value_.GetNoArena();
}
inline void MsgDBProviderToPolicy::set_encry_value(const ::std::string& value) {
  
  encry_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
}
#if LANG_CXX11
inline void MsgDBProviderToPolicy::set_encry_value(::std::string&& value) {
  
  encry_value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
}
#endif
inline void MsgDBProviderToPolicy::set_encry_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  encry_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
}
inline void MsgDBProviderToPolicy::set_encry_value(const char* value, size_t size) {
  
  encry_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
}
inline ::std::string* MsgDBProviderToPolicy::mutable_encry_value() {
  
  // @@protoc_insertion_point(field_mutable:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
  return encry_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgDBProviderToPolicy::release_encry_value() {
  // @@protoc_insertion_point(field_release:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
  
  return encry_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgDBProviderToPolicy::set_allocated_encry_value(::std::string* encry_value) {
  if (encry_value != NULL) {
    
  } else {
    
  }
  encry_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encry_value);
  // @@protoc_insertion_point(field_set_allocated:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_value)
}

// string encry_text = 80;
inline void MsgDBProviderToPolicy::clear_encry_text() {
  encry_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgDBProviderToPolicy::encry_text() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
  return encry_text_.GetNoArena();
}
inline void MsgDBProviderToPolicy::set_encry_text(const ::std::string& value) {
  
  encry_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
}
#if LANG_CXX11
inline void MsgDBProviderToPolicy::set_encry_text(::std::string&& value) {
  
  encry_text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
}
#endif
inline void MsgDBProviderToPolicy::set_encry_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  encry_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
}
inline void MsgDBProviderToPolicy::set_encry_text(const char* value, size_t size) {
  
  encry_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
}
inline ::std::string* MsgDBProviderToPolicy::mutable_encry_text() {
  
  // @@protoc_insertion_point(field_mutable:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
  return encry_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgDBProviderToPolicy::release_encry_text() {
  // @@protoc_insertion_point(field_release:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
  
  return encry_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgDBProviderToPolicy::set_allocated_encry_text(::std::string* encry_text) {
  if (encry_text != NULL) {
    
  } else {
    
  }
  encry_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encry_text);
  // @@protoc_insertion_point(field_set_allocated:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.encry_text)
}

// string csp_name = 90;
inline void MsgDBProviderToPolicy::clear_csp_name() {
  csp_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgDBProviderToPolicy::csp_name() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
  return csp_name_.GetNoArena();
}
inline void MsgDBProviderToPolicy::set_csp_name(const ::std::string& value) {
  
  csp_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
}
#if LANG_CXX11
inline void MsgDBProviderToPolicy::set_csp_name(::std::string&& value) {
  
  csp_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
}
#endif
inline void MsgDBProviderToPolicy::set_csp_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  csp_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
}
inline void MsgDBProviderToPolicy::set_csp_name(const char* value, size_t size) {
  
  csp_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
}
inline ::std::string* MsgDBProviderToPolicy::mutable_csp_name() {
  
  // @@protoc_insertion_point(field_mutable:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
  return csp_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgDBProviderToPolicy::release_csp_name() {
  // @@protoc_insertion_point(field_release:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
  
  return csp_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgDBProviderToPolicy::set_allocated_csp_name(::std::string* csp_name) {
  if (csp_name != NULL) {
    
  } else {
    
  }
  csp_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), csp_name);
  // @@protoc_insertion_point(field_set_allocated:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.csp_name)
}

// uint32 enable_encry = 100;
inline void MsgDBProviderToPolicy::clear_enable_encry() {
  enable_encry_ = 0u;
}
inline ::google::protobuf::uint32 MsgDBProviderToPolicy::enable_encry() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.enable_encry)
  return enable_encry_;
}
inline void MsgDBProviderToPolicy::set_enable_encry(::google::protobuf::uint32 value) {
  
  enable_encry_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.enable_encry)
}

// uint64 user_id = 110;
inline void MsgDBProviderToPolicy::clear_user_id() {
  user_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 MsgDBProviderToPolicy::user_id() const {
  // @@protoc_insertion_point(field_get:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.user_id)
  return user_id_;
}
inline void MsgDBProviderToPolicy::set_user_id(::google::protobuf::uint64 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:com.policy.msgdbprovidertopolicy.MsgDBProviderToPolicy.user_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace msgdbprovidertopolicy
}  // namespace policy
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DBProviderToPolicy_2eproto__INCLUDED