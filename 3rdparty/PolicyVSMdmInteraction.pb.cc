// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PolicyVSMdmInteraction.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PolicyVSMdmInteraction.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace policyvsmdminteraction {
class ReqDeviceActivityDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ReqDeviceActivity>
     _instance;
} _ReqDeviceActivity_default_instance_;
class RespDeviceActivityDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<RespDeviceActivity>
     _instance;
} _RespDeviceActivity_default_instance_;

namespace protobuf_PolicyVSMdmInteraction_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReqDeviceActivity, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReqDeviceActivity, activity_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, user_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, enterprise_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, device_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, map_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, network_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RespDeviceActivity, activity_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(ReqDeviceActivity)},
  { 6, -1, sizeof(RespDeviceActivity)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ReqDeviceActivity_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_RespDeviceActivity_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "PolicyVSMdmInteraction.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ReqDeviceActivity_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ReqDeviceActivity_default_instance_);_RespDeviceActivity_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_RespDeviceActivity_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034PolicyVSMdmInteraction.proto\022\026policyvs"
      "mdminteraction\"(\n\021ReqDeviceActivity\022\023\n\013a"
      "ctivity_id\030\001 \001(\004\"\373\001\n\022RespDeviceActivity\022"
      "\017\n\007user_id\030\001 \001(\004\022\025\n\renterprise_id\030\002 \001(\004\022"
      "\021\n\tdevice_id\030\003 \001(\004\022\016\n\006map_id\030\004 \001(\r\022J\n\nne"
      "twork_id\030\005 \001(\01626.policyvsmdminteraction."
      "RespDeviceActivity.NetWorkType\022\023\n\013activi"
      "ty_id\030\006 \001(\004\"9\n\013NetWorkType\022\n\n\006NET_NO\020\000\022\014"
      "\n\010NET_WIFI\020\001\022\020\n\014NET_CELLULAR\020\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 358);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PolicyVSMdmInteraction.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_PolicyVSMdmInteraction_2eproto

const ::google::protobuf::EnumDescriptor* RespDeviceActivity_NetWorkType_descriptor() {
  protobuf_PolicyVSMdmInteraction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PolicyVSMdmInteraction_2eproto::file_level_enum_descriptors[0];
}
bool RespDeviceActivity_NetWorkType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const RespDeviceActivity_NetWorkType RespDeviceActivity::NET_NO;
const RespDeviceActivity_NetWorkType RespDeviceActivity::NET_WIFI;
const RespDeviceActivity_NetWorkType RespDeviceActivity::NET_CELLULAR;
const RespDeviceActivity_NetWorkType RespDeviceActivity::NetWorkType_MIN;
const RespDeviceActivity_NetWorkType RespDeviceActivity::NetWorkType_MAX;
const int RespDeviceActivity::NetWorkType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReqDeviceActivity::kActivityIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReqDeviceActivity::ReqDeviceActivity()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_PolicyVSMdmInteraction_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:policyvsmdminteraction.ReqDeviceActivity)
}
ReqDeviceActivity::ReqDeviceActivity(const ReqDeviceActivity& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  activity_id_ = from.activity_id_;
  // @@protoc_insertion_point(copy_constructor:policyvsmdminteraction.ReqDeviceActivity)
}

void ReqDeviceActivity::SharedCtor() {
  activity_id_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

ReqDeviceActivity::~ReqDeviceActivity() {
  // @@protoc_insertion_point(destructor:policyvsmdminteraction.ReqDeviceActivity)
  SharedDtor();
}

void ReqDeviceActivity::SharedDtor() {
}

void ReqDeviceActivity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReqDeviceActivity::descriptor() {
  protobuf_PolicyVSMdmInteraction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PolicyVSMdmInteraction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReqDeviceActivity& ReqDeviceActivity::default_instance() {
  protobuf_PolicyVSMdmInteraction_2eproto::InitDefaults();
  return *internal_default_instance();
}

ReqDeviceActivity* ReqDeviceActivity::New(::google::protobuf::Arena* arena) const {
  ReqDeviceActivity* n = new ReqDeviceActivity;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReqDeviceActivity::Clear() {
// @@protoc_insertion_point(message_clear_start:policyvsmdminteraction.ReqDeviceActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  activity_id_ = GOOGLE_ULONGLONG(0);
  _internal_metadata_.Clear();
}

bool ReqDeviceActivity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:policyvsmdminteraction.ReqDeviceActivity)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 activity_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &activity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:policyvsmdminteraction.ReqDeviceActivity)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:policyvsmdminteraction.ReqDeviceActivity)
  return false;
#undef DO_
}

void ReqDeviceActivity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:policyvsmdminteraction.ReqDeviceActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 activity_id = 1;
  if (this->activity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->activity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:policyvsmdminteraction.ReqDeviceActivity)
}

::google::protobuf::uint8* ReqDeviceActivity::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:policyvsmdminteraction.ReqDeviceActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 activity_id = 1;
  if (this->activity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->activity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:policyvsmdminteraction.ReqDeviceActivity)
  return target;
}

size_t ReqDeviceActivity::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:policyvsmdminteraction.ReqDeviceActivity)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 activity_id = 1;
  if (this->activity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->activity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReqDeviceActivity::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:policyvsmdminteraction.ReqDeviceActivity)
  GOOGLE_DCHECK_NE(&from, this);
  const ReqDeviceActivity* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReqDeviceActivity>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:policyvsmdminteraction.ReqDeviceActivity)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:policyvsmdminteraction.ReqDeviceActivity)
    MergeFrom(*source);
  }
}

void ReqDeviceActivity::MergeFrom(const ReqDeviceActivity& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:policyvsmdminteraction.ReqDeviceActivity)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.activity_id() != 0) {
    set_activity_id(from.activity_id());
  }
}

void ReqDeviceActivity::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:policyvsmdminteraction.ReqDeviceActivity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReqDeviceActivity::CopyFrom(const ReqDeviceActivity& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:policyvsmdminteraction.ReqDeviceActivity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReqDeviceActivity::IsInitialized() const {
  return true;
}

void ReqDeviceActivity::Swap(ReqDeviceActivity* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReqDeviceActivity::InternalSwap(ReqDeviceActivity* other) {
  using std::swap;
  swap(activity_id_, other->activity_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReqDeviceActivity::GetMetadata() const {
  protobuf_PolicyVSMdmInteraction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PolicyVSMdmInteraction_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReqDeviceActivity

// uint64 activity_id = 1;
void ReqDeviceActivity::clear_activity_id() {
  activity_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 ReqDeviceActivity::activity_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.ReqDeviceActivity.activity_id)
  return activity_id_;
}
void ReqDeviceActivity::set_activity_id(::google::protobuf::uint64 value) {
  
  activity_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.ReqDeviceActivity.activity_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RespDeviceActivity::kUserIdFieldNumber;
const int RespDeviceActivity::kEnterpriseIdFieldNumber;
const int RespDeviceActivity::kDeviceIdFieldNumber;
const int RespDeviceActivity::kMapIdFieldNumber;
const int RespDeviceActivity::kNetworkIdFieldNumber;
const int RespDeviceActivity::kActivityIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RespDeviceActivity::RespDeviceActivity()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_PolicyVSMdmInteraction_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:policyvsmdminteraction.RespDeviceActivity)
}
RespDeviceActivity::RespDeviceActivity(const RespDeviceActivity& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&user_id_, &from.user_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&activity_id_) -
    reinterpret_cast<char*>(&user_id_)) + sizeof(activity_id_));
  // @@protoc_insertion_point(copy_constructor:policyvsmdminteraction.RespDeviceActivity)
}

void RespDeviceActivity::SharedCtor() {
  ::memset(&user_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&activity_id_) -
      reinterpret_cast<char*>(&user_id_)) + sizeof(activity_id_));
  _cached_size_ = 0;
}

RespDeviceActivity::~RespDeviceActivity() {
  // @@protoc_insertion_point(destructor:policyvsmdminteraction.RespDeviceActivity)
  SharedDtor();
}

void RespDeviceActivity::SharedDtor() {
}

void RespDeviceActivity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RespDeviceActivity::descriptor() {
  protobuf_PolicyVSMdmInteraction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PolicyVSMdmInteraction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RespDeviceActivity& RespDeviceActivity::default_instance() {
  protobuf_PolicyVSMdmInteraction_2eproto::InitDefaults();
  return *internal_default_instance();
}

RespDeviceActivity* RespDeviceActivity::New(::google::protobuf::Arena* arena) const {
  RespDeviceActivity* n = new RespDeviceActivity;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RespDeviceActivity::Clear() {
// @@protoc_insertion_point(message_clear_start:policyvsmdminteraction.RespDeviceActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&user_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&activity_id_) -
      reinterpret_cast<char*>(&user_id_)) + sizeof(activity_id_));
  _internal_metadata_.Clear();
}

bool RespDeviceActivity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:policyvsmdminteraction.RespDeviceActivity)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 user_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &user_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 enterprise_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &enterprise_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 device_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &device_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 map_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &map_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_network_id(static_cast< ::policyvsmdminteraction::RespDeviceActivity_NetWorkType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 activity_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &activity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:policyvsmdminteraction.RespDeviceActivity)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:policyvsmdminteraction.RespDeviceActivity)
  return false;
#undef DO_
}

void RespDeviceActivity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:policyvsmdminteraction.RespDeviceActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 user_id = 1;
  if (this->user_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->user_id(), output);
  }

  // uint64 enterprise_id = 2;
  if (this->enterprise_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->enterprise_id(), output);
  }

  // uint64 device_id = 3;
  if (this->device_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->device_id(), output);
  }

  // uint32 map_id = 4;
  if (this->map_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->map_id(), output);
  }

  // .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
  if (this->network_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->network_id(), output);
  }

  // uint64 activity_id = 6;
  if (this->activity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->activity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:policyvsmdminteraction.RespDeviceActivity)
}

::google::protobuf::uint8* RespDeviceActivity::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:policyvsmdminteraction.RespDeviceActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 user_id = 1;
  if (this->user_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->user_id(), target);
  }

  // uint64 enterprise_id = 2;
  if (this->enterprise_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->enterprise_id(), target);
  }

  // uint64 device_id = 3;
  if (this->device_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->device_id(), target);
  }

  // uint32 map_id = 4;
  if (this->map_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->map_id(), target);
  }

  // .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
  if (this->network_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->network_id(), target);
  }

  // uint64 activity_id = 6;
  if (this->activity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->activity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:policyvsmdminteraction.RespDeviceActivity)
  return target;
}

size_t RespDeviceActivity::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:policyvsmdminteraction.RespDeviceActivity)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 user_id = 1;
  if (this->user_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->user_id());
  }

  // uint64 enterprise_id = 2;
  if (this->enterprise_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->enterprise_id());
  }

  // uint64 device_id = 3;
  if (this->device_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->device_id());
  }

  // uint32 map_id = 4;
  if (this->map_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->map_id());
  }

  // .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
  if (this->network_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->network_id());
  }

  // uint64 activity_id = 6;
  if (this->activity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->activity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RespDeviceActivity::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:policyvsmdminteraction.RespDeviceActivity)
  GOOGLE_DCHECK_NE(&from, this);
  const RespDeviceActivity* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RespDeviceActivity>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:policyvsmdminteraction.RespDeviceActivity)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:policyvsmdminteraction.RespDeviceActivity)
    MergeFrom(*source);
  }
}

void RespDeviceActivity::MergeFrom(const RespDeviceActivity& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:policyvsmdminteraction.RespDeviceActivity)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.user_id() != 0) {
    set_user_id(from.user_id());
  }
  if (from.enterprise_id() != 0) {
    set_enterprise_id(from.enterprise_id());
  }
  if (from.device_id() != 0) {
    set_device_id(from.device_id());
  }
  if (from.map_id() != 0) {
    set_map_id(from.map_id());
  }
  if (from.network_id() != 0) {
    set_network_id(from.network_id());
  }
  if (from.activity_id() != 0) {
    set_activity_id(from.activity_id());
  }
}

void RespDeviceActivity::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:policyvsmdminteraction.RespDeviceActivity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RespDeviceActivity::CopyFrom(const RespDeviceActivity& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:policyvsmdminteraction.RespDeviceActivity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RespDeviceActivity::IsInitialized() const {
  return true;
}

void RespDeviceActivity::Swap(RespDeviceActivity* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RespDeviceActivity::InternalSwap(RespDeviceActivity* other) {
  using std::swap;
  swap(user_id_, other->user_id_);
  swap(enterprise_id_, other->enterprise_id_);
  swap(device_id_, other->device_id_);
  swap(map_id_, other->map_id_);
  swap(network_id_, other->network_id_);
  swap(activity_id_, other->activity_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RespDeviceActivity::GetMetadata() const {
  protobuf_PolicyVSMdmInteraction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PolicyVSMdmInteraction_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RespDeviceActivity

// uint64 user_id = 1;
void RespDeviceActivity::clear_user_id() {
  user_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 RespDeviceActivity::user_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.user_id)
  return user_id_;
}
void RespDeviceActivity::set_user_id(::google::protobuf::uint64 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.user_id)
}

// uint64 enterprise_id = 2;
void RespDeviceActivity::clear_enterprise_id() {
  enterprise_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 RespDeviceActivity::enterprise_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.enterprise_id)
  return enterprise_id_;
}
void RespDeviceActivity::set_enterprise_id(::google::protobuf::uint64 value) {
  
  enterprise_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.enterprise_id)
}

// uint64 device_id = 3;
void RespDeviceActivity::clear_device_id() {
  device_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 RespDeviceActivity::device_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.device_id)
  return device_id_;
}
void RespDeviceActivity::set_device_id(::google::protobuf::uint64 value) {
  
  device_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.device_id)
}

// uint32 map_id = 4;
void RespDeviceActivity::clear_map_id() {
  map_id_ = 0u;
}
::google::protobuf::uint32 RespDeviceActivity::map_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.map_id)
  return map_id_;
}
void RespDeviceActivity::set_map_id(::google::protobuf::uint32 value) {
  
  map_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.map_id)
}

// .policyvsmdminteraction.RespDeviceActivity.NetWorkType network_id = 5;
void RespDeviceActivity::clear_network_id() {
  network_id_ = 0;
}
::policyvsmdminteraction::RespDeviceActivity_NetWorkType RespDeviceActivity::network_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.network_id)
  return static_cast< ::policyvsmdminteraction::RespDeviceActivity_NetWorkType >(network_id_);
}
void RespDeviceActivity::set_network_id(::policyvsmdminteraction::RespDeviceActivity_NetWorkType value) {
  
  network_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.network_id)
}

// uint64 activity_id = 6;
void RespDeviceActivity::clear_activity_id() {
  activity_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 RespDeviceActivity::activity_id() const {
  // @@protoc_insertion_point(field_get:policyvsmdminteraction.RespDeviceActivity.activity_id)
  return activity_id_;
}
void RespDeviceActivity::set_activity_id(::google::protobuf::uint64 value) {
  
  activity_id_ = value;
  // @@protoc_insertion_point(field_set:policyvsmdminteraction.RespDeviceActivity.activity_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace policyvsmdminteraction

// @@protoc_insertion_point(global_scope)