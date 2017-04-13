// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dependency.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dependency.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* dep_cfg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  dep_cfg_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* game_const_config_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* cost_type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_dependency_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_dependency_2eproto() {
  protobuf_AddDesc_dependency_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dependency.proto");
  GOOGLE_CHECK(file != NULL);
  dep_cfg_descriptor_ = file->message_type(0);
  static const int dep_cfg_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dep_cfg, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dep_cfg, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dep_cfg, dep2_),
  };
  dep_cfg_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      dep_cfg_descriptor_,
      dep_cfg::internal_default_instance(),
      dep_cfg_offsets_,
      -1,
      -1,
      -1,
      sizeof(dep_cfg),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dep_cfg, _internal_metadata_));
  game_const_config_descriptor_ = file->enum_type(0);
  cost_type_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dependency_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      dep_cfg_descriptor_, dep_cfg::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dependency_2eproto() {
  dep_cfg_default_instance_.Shutdown();
  delete dep_cfg_reflection_;
}

void protobuf_InitDefaults_dependency_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_InitDefaults_dep_5flevel2_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  dep_cfg_default_instance_.DefaultConstruct();
  dep_cfg_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_dependency_2eproto_once_);
void protobuf_InitDefaults_dependency_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_dependency_2eproto_once_,
                 &protobuf_InitDefaults_dependency_2eproto_impl);
}
void protobuf_AddDesc_dependency_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_dependency_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020dependency.proto\032\020dep_level2.proto\"<\n\007"
    "dep_cfg\022\n\n\002id\030\001 \001(\r\022\014\n\004name\030\002 \001(\t\022\027\n\004dep"
    "2\030\003 \001(\0132\t.dep2_cfg*\313\002\n\021game_const_config"
    "\022\022\n\016EN_GCC_UNKNOWN\020\000\022\030\n\023EN_GCC_PERCENT_B"
    "ASE\020\220N\022\034\n\030EN_GCC_RANDOM_RANGE_UNIT\020\n\022 \n\031"
    "EN_GCC_RESOURCE_MAX_LIMIT\020\377\254\342\004\022\027\n\022EN_GCC"
    "_LEVEL_LIMIT\020\347\007\022\034\n\030EN_GCC_SOLDIER_TYPE_M"
    "ASK\020d\022\036\n\031EN_GCC_ACTIVITY_TYPE_MASK\020\350\007\022\035\n"
    "\031EN_GCC_FORMULAR_TYPE_MASK\020\n\022\030\n\023EN_GCC_S"
    "CREEN_WIDTH\020\360\010\022\031\n\024EN_GCC_SCREEN_HEIGHT\020\200"
    "\005\022\031\n\024EN_GCC_CAMERA_OFFSET\020\214\002\032\002\020\001*D\n\tcost"
    "_type\022\021\n\rEN_CT_UNKNOWN\020\000\022\020\n\013EN_CT_MONEY\020"
    "\221N\022\022\n\rEN_CT_DIAMOND\020\365Nb\006proto3", 510);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dependency.proto", &protobuf_RegisterTypes);
  ::protobuf_AddDesc_dep_5flevel2_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dependency_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_dependency_2eproto_once_);
void protobuf_AddDesc_dependency_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_dependency_2eproto_once_,
                 &protobuf_AddDesc_dependency_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dependency_2eproto {
  StaticDescriptorInitializer_dependency_2eproto() {
    protobuf_AddDesc_dependency_2eproto();
  }
} static_descriptor_initializer_dependency_2eproto_;
const ::google::protobuf::EnumDescriptor* game_const_config_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return game_const_config_descriptor_;
}
bool game_const_config_IsValid(int value) {
  switch (value) {
    case 0:
    case 10:
    case 100:
    case 268:
    case 640:
    case 999:
    case 1000:
    case 1136:
    case 10000:
    case 9999999:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* cost_type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return cost_type_descriptor_;
}
bool cost_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 10001:
    case 10101:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int dep_cfg::kIdFieldNumber;
const int dep_cfg::kNameFieldNumber;
const int dep_cfg::kDep2FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

dep_cfg::dep_cfg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_dependency_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:dep_cfg)
}

void dep_cfg::InitAsDefaultInstance() {
  dep2_ = const_cast< ::dep2_cfg*>(
      ::dep2_cfg::internal_default_instance());
}

dep_cfg::dep_cfg(const dep_cfg& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dep_cfg)
}

void dep_cfg::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dep2_ = NULL;
  id_ = 0u;
  _cached_size_ = 0;
}

dep_cfg::~dep_cfg() {
  // @@protoc_insertion_point(destructor:dep_cfg)
  SharedDtor();
}

void dep_cfg::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &dep_cfg_default_instance_.get()) {
    delete dep2_;
  }
}

void dep_cfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* dep_cfg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return dep_cfg_descriptor_;
}

const dep_cfg& dep_cfg::default_instance() {
  protobuf_InitDefaults_dependency_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<dep_cfg> dep_cfg_default_instance_;

dep_cfg* dep_cfg::New(::google::protobuf::Arena* arena) const {
  dep_cfg* n = new dep_cfg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void dep_cfg::Clear() {
// @@protoc_insertion_point(message_clear_start:dep_cfg)
  id_ = 0u;
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && dep2_ != NULL) delete dep2_;
  dep2_ = NULL;
}

bool dep_cfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dep_cfg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dep_cfg.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_dep2;
        break;
      }

      // optional .dep2_cfg dep2 = 3;
      case 3: {
        if (tag == 26) {
         parse_dep2:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_dep2()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dep_cfg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dep_cfg)
  return false;
#undef DO_
}

void dep_cfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dep_cfg)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dep_cfg.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional .dep2_cfg dep2 = 3;
  if (this->has_dep2()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->dep2_, output);
  }

  // @@protoc_insertion_point(serialize_end:dep_cfg)
}

::google::protobuf::uint8* dep_cfg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dep_cfg)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dep_cfg.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional .dep2_cfg dep2 = 3;
  if (this->has_dep2()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->dep2_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:dep_cfg)
  return target;
}

size_t dep_cfg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dep_cfg)
  size_t total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional .dep2_cfg dep2 = 3;
  if (this->has_dep2()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->dep2_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void dep_cfg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dep_cfg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const dep_cfg* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const dep_cfg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dep_cfg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dep_cfg)
    UnsafeMergeFrom(*source);
  }
}

void dep_cfg::MergeFrom(const dep_cfg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dep_cfg)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void dep_cfg::UnsafeMergeFrom(const dep_cfg& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_dep2()) {
    mutable_dep2()->::dep2_cfg::MergeFrom(from.dep2());
  }
}

void dep_cfg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dep_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void dep_cfg::CopyFrom(const dep_cfg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dep_cfg)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool dep_cfg::IsInitialized() const {

  return true;
}

void dep_cfg::Swap(dep_cfg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void dep_cfg::InternalSwap(dep_cfg* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  std::swap(dep2_, other->dep2_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata dep_cfg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = dep_cfg_descriptor_;
  metadata.reflection = dep_cfg_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// dep_cfg

// optional uint32 id = 1;
void dep_cfg::clear_id() {
  id_ = 0u;
}
::google::protobuf::uint32 dep_cfg::id() const {
  // @@protoc_insertion_point(field_get:dep_cfg.id)
  return id_;
}
void dep_cfg::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:dep_cfg.id)
}

// optional string name = 2;
void dep_cfg::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& dep_cfg::name() const {
  // @@protoc_insertion_point(field_get:dep_cfg.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void dep_cfg::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dep_cfg.name)
}
void dep_cfg::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dep_cfg.name)
}
void dep_cfg::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dep_cfg.name)
}
::std::string* dep_cfg::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:dep_cfg.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* dep_cfg::release_name() {
  // @@protoc_insertion_point(field_release:dep_cfg.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void dep_cfg::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:dep_cfg.name)
}

// optional .dep2_cfg dep2 = 3;
bool dep_cfg::has_dep2() const {
  return this != internal_default_instance() && dep2_ != NULL;
}
void dep_cfg::clear_dep2() {
  if (GetArenaNoVirtual() == NULL && dep2_ != NULL) delete dep2_;
  dep2_ = NULL;
}
const ::dep2_cfg& dep_cfg::dep2() const {
  // @@protoc_insertion_point(field_get:dep_cfg.dep2)
  return dep2_ != NULL ? *dep2_
                         : *::dep2_cfg::internal_default_instance();
}
::dep2_cfg* dep_cfg::mutable_dep2() {
  
  if (dep2_ == NULL) {
    dep2_ = new ::dep2_cfg;
  }
  // @@protoc_insertion_point(field_mutable:dep_cfg.dep2)
  return dep2_;
}
::dep2_cfg* dep_cfg::release_dep2() {
  // @@protoc_insertion_point(field_release:dep_cfg.dep2)
  
  ::dep2_cfg* temp = dep2_;
  dep2_ = NULL;
  return temp;
}
void dep_cfg::set_allocated_dep2(::dep2_cfg* dep2) {
  delete dep2_;
  dep2_ = dep2;
  if (dep2) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:dep_cfg.dep2)
}

inline const dep_cfg* dep_cfg::internal_default_instance() {
  return &dep_cfg_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
