// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: typed_url_specifics.proto

#ifndef PROTOBUF_typed_5furl_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_typed_5furl_5fspecifics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_typed_5furl_5fspecifics_2eproto();
void protobuf_AssignDesc_typed_5furl_5fspecifics_2eproto();
void protobuf_ShutdownFile_typed_5furl_5fspecifics_2eproto();

class TypedUrlSpecifics;

// ===================================================================

class TypedUrlSpecifics : public ::google::protobuf::MessageLite {
 public:
  TypedUrlSpecifics();
  virtual ~TypedUrlSpecifics();

  TypedUrlSpecifics(const TypedUrlSpecifics& from);

  inline TypedUrlSpecifics& operator=(const TypedUrlSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const TypedUrlSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TypedUrlSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(TypedUrlSpecifics* other);

  // implements Message ----------------------------------------------

  inline TypedUrlSpecifics* New() const { return New(NULL); }

  TypedUrlSpecifics* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TypedUrlSpecifics& from);
  void MergeFrom(const TypedUrlSpecifics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TypedUrlSpecifics* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string url = 1;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // optional string title = 2;
  bool has_title() const;
  void clear_title();
  static const int kTitleFieldNumber = 2;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // optional bool hidden = 4;
  bool has_hidden() const;
  void clear_hidden();
  static const int kHiddenFieldNumber = 4;
  bool hidden() const;
  void set_hidden(bool value);

  // repeated int64 visits = 7 [packed = true];
  int visits_size() const;
  void clear_visits();
  static const int kVisitsFieldNumber = 7;
  ::google::protobuf::int64 visits(int index) const;
  void set_visits(int index, ::google::protobuf::int64 value);
  void add_visits(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      visits() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_visits();

  // repeated int32 visit_transitions = 8 [packed = true];
  int visit_transitions_size() const;
  void clear_visit_transitions();
  static const int kVisitTransitionsFieldNumber = 8;
  ::google::protobuf::int32 visit_transitions(int index) const;
  void set_visit_transitions(int index, ::google::protobuf::int32 value);
  void add_visit_transitions(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      visit_transitions() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_visit_transitions();

  // @@protoc_insertion_point(class_scope:sync_pb.TypedUrlSpecifics)
 private:
  inline void set_has_url();
  inline void clear_has_url();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_hidden();
  inline void clear_has_hidden();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > visits_;
  mutable int _visits_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > visit_transitions_;
  mutable int _visit_transitions_cached_byte_size_;
  bool hidden_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_typed_5furl_5fspecifics_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_typed_5furl_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_typed_5furl_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_typed_5furl_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static TypedUrlSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TypedUrlSpecifics

// optional string url = 1;
inline bool TypedUrlSpecifics::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TypedUrlSpecifics::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TypedUrlSpecifics::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TypedUrlSpecifics::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& TypedUrlSpecifics::url() const {
  // @@protoc_insertion_point(field_get:sync_pb.TypedUrlSpecifics.url)
  return url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TypedUrlSpecifics::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.TypedUrlSpecifics.url)
}
inline void TypedUrlSpecifics::set_url(const char* value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.TypedUrlSpecifics.url)
}
inline void TypedUrlSpecifics::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.TypedUrlSpecifics.url)
}
inline ::std::string* TypedUrlSpecifics::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.TypedUrlSpecifics.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TypedUrlSpecifics::release_url() {
  // @@protoc_insertion_point(field_release:sync_pb.TypedUrlSpecifics.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TypedUrlSpecifics::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.TypedUrlSpecifics.url)
}

// optional string title = 2;
inline bool TypedUrlSpecifics::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TypedUrlSpecifics::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TypedUrlSpecifics::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TypedUrlSpecifics::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
inline const ::std::string& TypedUrlSpecifics::title() const {
  // @@protoc_insertion_point(field_get:sync_pb.TypedUrlSpecifics.title)
  return title_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TypedUrlSpecifics::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.TypedUrlSpecifics.title)
}
inline void TypedUrlSpecifics::set_title(const char* value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.TypedUrlSpecifics.title)
}
inline void TypedUrlSpecifics::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.TypedUrlSpecifics.title)
}
inline ::std::string* TypedUrlSpecifics::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:sync_pb.TypedUrlSpecifics.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TypedUrlSpecifics::release_title() {
  // @@protoc_insertion_point(field_release:sync_pb.TypedUrlSpecifics.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TypedUrlSpecifics::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.TypedUrlSpecifics.title)
}

// optional bool hidden = 4;
inline bool TypedUrlSpecifics::has_hidden() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TypedUrlSpecifics::set_has_hidden() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TypedUrlSpecifics::clear_has_hidden() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TypedUrlSpecifics::clear_hidden() {
  hidden_ = false;
  clear_has_hidden();
}
inline bool TypedUrlSpecifics::hidden() const {
  // @@protoc_insertion_point(field_get:sync_pb.TypedUrlSpecifics.hidden)
  return hidden_;
}
inline void TypedUrlSpecifics::set_hidden(bool value) {
  set_has_hidden();
  hidden_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.TypedUrlSpecifics.hidden)
}

// repeated int64 visits = 7 [packed = true];
inline int TypedUrlSpecifics::visits_size() const {
  return visits_.size();
}
inline void TypedUrlSpecifics::clear_visits() {
  visits_.Clear();
}
inline ::google::protobuf::int64 TypedUrlSpecifics::visits(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.TypedUrlSpecifics.visits)
  return visits_.Get(index);
}
inline void TypedUrlSpecifics::set_visits(int index, ::google::protobuf::int64 value) {
  visits_.Set(index, value);
  // @@protoc_insertion_point(field_set:sync_pb.TypedUrlSpecifics.visits)
}
inline void TypedUrlSpecifics::add_visits(::google::protobuf::int64 value) {
  visits_.Add(value);
  // @@protoc_insertion_point(field_add:sync_pb.TypedUrlSpecifics.visits)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
TypedUrlSpecifics::visits() const {
  // @@protoc_insertion_point(field_list:sync_pb.TypedUrlSpecifics.visits)
  return visits_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
TypedUrlSpecifics::mutable_visits() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.TypedUrlSpecifics.visits)
  return &visits_;
}

// repeated int32 visit_transitions = 8 [packed = true];
inline int TypedUrlSpecifics::visit_transitions_size() const {
  return visit_transitions_.size();
}
inline void TypedUrlSpecifics::clear_visit_transitions() {
  visit_transitions_.Clear();
}
inline ::google::protobuf::int32 TypedUrlSpecifics::visit_transitions(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.TypedUrlSpecifics.visit_transitions)
  return visit_transitions_.Get(index);
}
inline void TypedUrlSpecifics::set_visit_transitions(int index, ::google::protobuf::int32 value) {
  visit_transitions_.Set(index, value);
  // @@protoc_insertion_point(field_set:sync_pb.TypedUrlSpecifics.visit_transitions)
}
inline void TypedUrlSpecifics::add_visit_transitions(::google::protobuf::int32 value) {
  visit_transitions_.Add(value);
  // @@protoc_insertion_point(field_add:sync_pb.TypedUrlSpecifics.visit_transitions)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
TypedUrlSpecifics::visit_transitions() const {
  // @@protoc_insertion_point(field_list:sync_pb.TypedUrlSpecifics.visit_transitions)
  return visit_transitions_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
TypedUrlSpecifics::mutable_visit_transitions() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.TypedUrlSpecifics.visit_transitions)
  return &visit_transitions_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_typed_5furl_5fspecifics_2eproto__INCLUDED
