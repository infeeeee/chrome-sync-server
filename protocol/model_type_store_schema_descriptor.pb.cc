// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_type_store_schema_descriptor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "model_type_store_schema_descriptor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto() {
  delete ModelTypeStoreSchemaDescriptor::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ModelTypeStoreSchemaDescriptor::default_instance_ = new ModelTypeStoreSchemaDescriptor();
  ModelTypeStoreSchemaDescriptor::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto_once_);
void protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto_once_,
                 &protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto {
  StaticDescriptorInitializer_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto() {
    protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
  }
} static_descriptor_initializer_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForModelTypeStoreSchemaDescriptor(
    ModelTypeStoreSchemaDescriptor* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ModelTypeStoreSchemaDescriptor::kVersionNumberFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ModelTypeStoreSchemaDescriptor::ModelTypeStoreSchemaDescriptor()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ModelTypeStoreSchemaDescriptor)
}

void ModelTypeStoreSchemaDescriptor::InitAsDefaultInstance() {
}

ModelTypeStoreSchemaDescriptor::ModelTypeStoreSchemaDescriptor(const ModelTypeStoreSchemaDescriptor& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.ModelTypeStoreSchemaDescriptor)
}

void ModelTypeStoreSchemaDescriptor::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_number_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ModelTypeStoreSchemaDescriptor::~ModelTypeStoreSchemaDescriptor() {
  // @@protoc_insertion_point(destructor:sync_pb.ModelTypeStoreSchemaDescriptor)
  SharedDtor();
}

void ModelTypeStoreSchemaDescriptor::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ModelTypeStoreSchemaDescriptor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ModelTypeStoreSchemaDescriptor& ModelTypeStoreSchemaDescriptor::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
#endif
  return *default_instance_;
}

ModelTypeStoreSchemaDescriptor* ModelTypeStoreSchemaDescriptor::default_instance_ = NULL;

ModelTypeStoreSchemaDescriptor* ModelTypeStoreSchemaDescriptor::New(::google::protobuf::Arena* arena) const {
  ModelTypeStoreSchemaDescriptor* n = new ModelTypeStoreSchemaDescriptor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ModelTypeStoreSchemaDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  version_number_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ModelTypeStoreSchemaDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForModelTypeStoreSchemaDescriptor, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 version_number = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_number_)));
          set_has_version_number();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.ModelTypeStoreSchemaDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ModelTypeStoreSchemaDescriptor)
  return false;
#undef DO_
}

void ModelTypeStoreSchemaDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  // optional int64 version_number = 1;
  if (has_version_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->version_number(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ModelTypeStoreSchemaDescriptor)
}

int ModelTypeStoreSchemaDescriptor::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  int total_size = 0;

  // optional int64 version_number = 1;
  if (has_version_number()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version_number());
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ModelTypeStoreSchemaDescriptor::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ModelTypeStoreSchemaDescriptor*>(&from));
}

void ModelTypeStoreSchemaDescriptor::MergeFrom(const ModelTypeStoreSchemaDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version_number()) {
      set_version_number(from.version_number());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void ModelTypeStoreSchemaDescriptor::CopyFrom(const ModelTypeStoreSchemaDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelTypeStoreSchemaDescriptor::IsInitialized() const {

  return true;
}

void ModelTypeStoreSchemaDescriptor::Swap(ModelTypeStoreSchemaDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ModelTypeStoreSchemaDescriptor::InternalSwap(ModelTypeStoreSchemaDescriptor* other) {
  std::swap(version_number_, other->version_number_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ModelTypeStoreSchemaDescriptor::GetTypeName() const {
  return "sync_pb.ModelTypeStoreSchemaDescriptor";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelTypeStoreSchemaDescriptor

// optional int64 version_number = 1;
bool ModelTypeStoreSchemaDescriptor::has_version_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ModelTypeStoreSchemaDescriptor::set_has_version_number() {
  _has_bits_[0] |= 0x00000001u;
}
void ModelTypeStoreSchemaDescriptor::clear_has_version_number() {
  _has_bits_[0] &= ~0x00000001u;
}
void ModelTypeStoreSchemaDescriptor::clear_version_number() {
  version_number_ = GOOGLE_LONGLONG(0);
  clear_has_version_number();
}
 ::google::protobuf::int64 ModelTypeStoreSchemaDescriptor::version_number() const {
  // @@protoc_insertion_point(field_get:sync_pb.ModelTypeStoreSchemaDescriptor.version_number)
  return version_number_;
}
 void ModelTypeStoreSchemaDescriptor::set_version_number(::google::protobuf::int64 value) {
  set_has_version_number();
  version_number_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ModelTypeStoreSchemaDescriptor.version_number)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
