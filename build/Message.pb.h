// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#ifndef PROTOBUF_Message_2eproto__INCLUDED
#define PROTOBUF_Message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Message_2eproto();
void protobuf_AssignDesc_Message_2eproto();
void protobuf_ShutdownFile_Message_2eproto();

class Message;
class Message_MessageData;

enum Message_MessageType {
  Message_MessageType_CONNECT = 0,
  Message_MessageType_DISCONNECT = 1,
  Message_MessageType_INPUTKEY = 2,
  Message_MessageType_UPDATEPOS = 3
};
bool Message_MessageType_IsValid(int value);
const Message_MessageType Message_MessageType_MessageType_MIN = Message_MessageType_CONNECT;
const Message_MessageType Message_MessageType_MessageType_MAX = Message_MessageType_UPDATEPOS;
const int Message_MessageType_MessageType_ARRAYSIZE = Message_MessageType_MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Message_MessageType_descriptor();
inline const ::std::string& Message_MessageType_Name(Message_MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Message_MessageType_descriptor(), value);
}
inline bool Message_MessageType_Parse(
    const ::std::string& name, Message_MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Message_MessageType>(
    Message_MessageType_descriptor(), name, value);
}
// ===================================================================

class Message_MessageData : public ::google::protobuf::Message {
 public:
  Message_MessageData();
  virtual ~Message_MessageData();

  Message_MessageData(const Message_MessageData& from);

  inline Message_MessageData& operator=(const Message_MessageData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Message_MessageData& default_instance();

  void Swap(Message_MessageData* other);

  // implements Message ----------------------------------------------

  Message_MessageData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message_MessageData& from);
  void MergeFrom(const Message_MessageData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const char* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // required .Message.MessageType type = 2 [default = CONNECT];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::Message_MessageType type() const;
  inline void set_type(::Message_MessageType value);

  // @@protoc_insertion_point(class_scope:Message.MessageData)
 private:
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* data_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static Message_MessageData* default_instance_;
};
// -------------------------------------------------------------------

class Message : public ::google::protobuf::Message {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  Message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Message_MessageData MessageData;

  typedef Message_MessageType MessageType;
  static const MessageType CONNECT = Message_MessageType_CONNECT;
  static const MessageType DISCONNECT = Message_MessageType_DISCONNECT;
  static const MessageType INPUTKEY = Message_MessageType_INPUTKEY;
  static const MessageType UPDATEPOS = Message_MessageType_UPDATEPOS;
  static inline bool MessageType_IsValid(int value) {
    return Message_MessageType_IsValid(value);
  }
  static const MessageType MessageType_MIN =
    Message_MessageType_MessageType_MIN;
  static const MessageType MessageType_MAX =
    Message_MessageType_MessageType_MAX;
  static const int MessageType_ARRAYSIZE =
    Message_MessageType_MessageType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MessageType_descriptor() {
    return Message_MessageType_descriptor();
  }
  static inline const ::std::string& MessageType_Name(MessageType value) {
    return Message_MessageType_Name(value);
  }
  static inline bool MessageType_Parse(const ::std::string& name,
      MessageType* value) {
    return Message_MessageType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string sessionId = 1;
  inline bool has_sessionid() const;
  inline void clear_sessionid();
  static const int kSessionIdFieldNumber = 1;
  inline const ::std::string& sessionid() const;
  inline void set_sessionid(const ::std::string& value);
  inline void set_sessionid(const char* value);
  inline void set_sessionid(const char* value, size_t size);
  inline ::std::string* mutable_sessionid();
  inline ::std::string* release_sessionid();
  inline void set_allocated_sessionid(::std::string* sessionid);

  // required string sessionHash = 2;
  inline bool has_sessionhash() const;
  inline void clear_sessionhash();
  static const int kSessionHashFieldNumber = 2;
  inline const ::std::string& sessionhash() const;
  inline void set_sessionhash(const ::std::string& value);
  inline void set_sessionhash(const char* value);
  inline void set_sessionhash(const char* value, size_t size);
  inline ::std::string* mutable_sessionhash();
  inline ::std::string* release_sessionhash();
  inline void set_allocated_sessionhash(::std::string* sessionhash);

  // repeated .Message.MessageData message = 3;
  inline int message_size() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 3;
  inline const ::Message_MessageData& message(int index) const;
  inline ::Message_MessageData* mutable_message(int index);
  inline ::Message_MessageData* add_message();
  inline const ::google::protobuf::RepeatedPtrField< ::Message_MessageData >&
      message() const;
  inline ::google::protobuf::RepeatedPtrField< ::Message_MessageData >*
      mutable_message();

  // @@protoc_insertion_point(class_scope:Message)
 private:
  inline void set_has_sessionid();
  inline void clear_has_sessionid();
  inline void set_has_sessionhash();
  inline void clear_has_sessionhash();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* sessionid_;
  ::std::string* sessionhash_;
  ::google::protobuf::RepeatedPtrField< ::Message_MessageData > message_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// ===================================================================


// ===================================================================

// Message_MessageData

// required string data = 1;
inline bool Message_MessageData::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message_MessageData::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message_MessageData::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message_MessageData::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& Message_MessageData::data() const {
  return *data_;
}
inline void Message_MessageData::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void Message_MessageData::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void Message_MessageData::set_data(const char* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message_MessageData::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* Message_MessageData::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message_MessageData::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .Message.MessageType type = 2 [default = CONNECT];
inline bool Message_MessageData::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message_MessageData::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message_MessageData::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message_MessageData::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::Message_MessageType Message_MessageData::type() const {
  return static_cast< ::Message_MessageType >(type_);
}
inline void Message_MessageData::set_type(::Message_MessageType value) {
  assert(::Message_MessageType_IsValid(value));
  set_has_type();
  type_ = value;
}

// -------------------------------------------------------------------

// Message

// required string sessionId = 1;
inline bool Message::has_sessionid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::set_has_sessionid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message::clear_has_sessionid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message::clear_sessionid() {
  if (sessionid_ != &::google::protobuf::internal::kEmptyString) {
    sessionid_->clear();
  }
  clear_has_sessionid();
}
inline const ::std::string& Message::sessionid() const {
  return *sessionid_;
}
inline void Message::set_sessionid(const ::std::string& value) {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::kEmptyString) {
    sessionid_ = new ::std::string;
  }
  sessionid_->assign(value);
}
inline void Message::set_sessionid(const char* value) {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::kEmptyString) {
    sessionid_ = new ::std::string;
  }
  sessionid_->assign(value);
}
inline void Message::set_sessionid(const char* value, size_t size) {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::kEmptyString) {
    sessionid_ = new ::std::string;
  }
  sessionid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_sessionid() {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::kEmptyString) {
    sessionid_ = new ::std::string;
  }
  return sessionid_;
}
inline ::std::string* Message::release_sessionid() {
  clear_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sessionid_;
    sessionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_sessionid(::std::string* sessionid) {
  if (sessionid_ != &::google::protobuf::internal::kEmptyString) {
    delete sessionid_;
  }
  if (sessionid) {
    set_has_sessionid();
    sessionid_ = sessionid;
  } else {
    clear_has_sessionid();
    sessionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string sessionHash = 2;
inline bool Message::has_sessionhash() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::set_has_sessionhash() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message::clear_has_sessionhash() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message::clear_sessionhash() {
  if (sessionhash_ != &::google::protobuf::internal::kEmptyString) {
    sessionhash_->clear();
  }
  clear_has_sessionhash();
}
inline const ::std::string& Message::sessionhash() const {
  return *sessionhash_;
}
inline void Message::set_sessionhash(const ::std::string& value) {
  set_has_sessionhash();
  if (sessionhash_ == &::google::protobuf::internal::kEmptyString) {
    sessionhash_ = new ::std::string;
  }
  sessionhash_->assign(value);
}
inline void Message::set_sessionhash(const char* value) {
  set_has_sessionhash();
  if (sessionhash_ == &::google::protobuf::internal::kEmptyString) {
    sessionhash_ = new ::std::string;
  }
  sessionhash_->assign(value);
}
inline void Message::set_sessionhash(const char* value, size_t size) {
  set_has_sessionhash();
  if (sessionhash_ == &::google::protobuf::internal::kEmptyString) {
    sessionhash_ = new ::std::string;
  }
  sessionhash_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_sessionhash() {
  set_has_sessionhash();
  if (sessionhash_ == &::google::protobuf::internal::kEmptyString) {
    sessionhash_ = new ::std::string;
  }
  return sessionhash_;
}
inline ::std::string* Message::release_sessionhash() {
  clear_has_sessionhash();
  if (sessionhash_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sessionhash_;
    sessionhash_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_sessionhash(::std::string* sessionhash) {
  if (sessionhash_ != &::google::protobuf::internal::kEmptyString) {
    delete sessionhash_;
  }
  if (sessionhash) {
    set_has_sessionhash();
    sessionhash_ = sessionhash;
  } else {
    clear_has_sessionhash();
    sessionhash_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .Message.MessageData message = 3;
inline int Message::message_size() const {
  return message_.size();
}
inline void Message::clear_message() {
  message_.Clear();
}
inline const ::Message_MessageData& Message::message(int index) const {
  return message_.Get(index);
}
inline ::Message_MessageData* Message::mutable_message(int index) {
  return message_.Mutable(index);
}
inline ::Message_MessageData* Message::add_message() {
  return message_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Message_MessageData >&
Message::message() const {
  return message_;
}
inline ::google::protobuf::RepeatedPtrField< ::Message_MessageData >*
Message::mutable_message() {
  return &message_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Message_MessageType>() {
  return ::Message_MessageType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Message_2eproto__INCLUDED
