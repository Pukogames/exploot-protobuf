// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Message_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Message_reflection_ = NULL;
const ::google::protobuf::Descriptor* Message_MessageData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Message_MessageData_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Message_MessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Message_2eproto() {
  protobuf_AddDesc_Message_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Message.proto");
  GOOGLE_CHECK(file != NULL);
  Message_descriptor_ = file->message_type(0);
  static const int Message_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, sessionid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, sessionhash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, message_),
  };
  Message_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Message_descriptor_,
      Message::default_instance_,
      Message_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Message));
  Message_MessageData_descriptor_ = Message_descriptor_->nested_type(0);
  static const int Message_MessageData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message_MessageData, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message_MessageData, type_),
  };
  Message_MessageData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Message_MessageData_descriptor_,
      Message_MessageData::default_instance_,
      Message_MessageData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message_MessageData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message_MessageData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Message_MessageData));
  Message_MessageType_descriptor_ = Message_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Message_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Message_descriptor_, &Message::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Message_MessageData_descriptor_, &Message_MessageData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Message_2eproto() {
  delete Message::default_instance_;
  delete Message_reflection_;
  delete Message_MessageData::default_instance_;
  delete Message_MessageData_reflection_;
}

void protobuf_AddDesc_Message_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rMessage.proto\"\216\002\n\007Message\022\021\n\tsessionId"
    "\030\001 \001(\t\022\023\n\013sessionHash\030\002 \001(\t\022%\n\007message\030\003"
    " \003(\0132\024.Message.MessageData\032H\n\013MessageDat"
    "a\022\014\n\004data\030\001 \002(\t\022+\n\004type\030\002 \002(\0162\024.Message."
    "MessageType:\007CONNECT\"j\n\013MessageType\022\013\n\007C"
    "ONNECT\020\000\022\016\n\nDISCONNECT\020\001\022\014\n\010INPUTKEY\020\002\022\r"
    "\n\tUPDATEPOS\020\003\022\r\n\tCHALLENGE\020\004\022\022\n\016LOGIN_CA"
    "LLBACK\020\005", 288);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Message.proto", &protobuf_RegisterTypes);
  Message::default_instance_ = new Message();
  Message_MessageData::default_instance_ = new Message_MessageData();
  Message::default_instance_->InitAsDefaultInstance();
  Message_MessageData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Message_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Message_2eproto {
  StaticDescriptorInitializer_Message_2eproto() {
    protobuf_AddDesc_Message_2eproto();
  }
} static_descriptor_initializer_Message_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Message_MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Message_MessageType_descriptor_;
}
bool Message_MessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Message_MessageType Message::CONNECT;
const Message_MessageType Message::DISCONNECT;
const Message_MessageType Message::INPUTKEY;
const Message_MessageType Message::UPDATEPOS;
const Message_MessageType Message::CHALLENGE;
const Message_MessageType Message::LOGIN_CALLBACK;
const Message_MessageType Message::MessageType_MIN;
const Message_MessageType Message::MessageType_MAX;
const int Message::MessageType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Message_MessageData::kDataFieldNumber;
const int Message_MessageData::kTypeFieldNumber;
#endif  // !_MSC_VER

Message_MessageData::Message_MessageData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Message_MessageData::InitAsDefaultInstance() {
}

Message_MessageData::Message_MessageData(const Message_MessageData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Message_MessageData::SharedCtor() {
  _cached_size_ = 0;
  data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Message_MessageData::~Message_MessageData() {
  SharedDtor();
}

void Message_MessageData::SharedDtor() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void Message_MessageData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Message_MessageData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Message_MessageData_descriptor_;
}

const Message_MessageData& Message_MessageData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Message_2eproto();
  return *default_instance_;
}

Message_MessageData* Message_MessageData::default_instance_ = NULL;

Message_MessageData* Message_MessageData::New() const {
  return new Message_MessageData;
}

void Message_MessageData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_data()) {
      if (data_ != &::google::protobuf::internal::kEmptyString) {
        data_->clear();
      }
    }
    type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Message_MessageData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_data()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->data().data(), this->data().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // required .Message.MessageType type = 2 [default = CONNECT];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Message_MessageType_IsValid(value)) {
            set_type(static_cast< ::Message_MessageType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Message_MessageData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->data().data(), this->data().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->data(), output);
  }

  // required .Message.MessageType type = 2 [default = CONNECT];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Message_MessageData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->data().data(), this->data().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->data(), target);
  }

  // required .Message.MessageType type = 2 [default = CONNECT];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Message_MessageData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string data = 1;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->data());
    }

    // required .Message.MessageType type = 2 [default = CONNECT];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Message_MessageData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Message_MessageData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Message_MessageData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Message_MessageData::MergeFrom(const Message_MessageData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      set_data(from.data());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Message_MessageData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message_MessageData::CopyFrom(const Message_MessageData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message_MessageData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Message_MessageData::Swap(Message_MessageData* other) {
  if (other != this) {
    std::swap(data_, other->data_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Message_MessageData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Message_MessageData_descriptor_;
  metadata.reflection = Message_MessageData_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Message::kSessionIdFieldNumber;
const int Message::kSessionHashFieldNumber;
const int Message::kMessageFieldNumber;
#endif  // !_MSC_VER

Message::Message()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Message::InitAsDefaultInstance() {
}

Message::Message(const Message& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Message::SharedCtor() {
  _cached_size_ = 0;
  sessionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  sessionhash_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Message::~Message() {
  SharedDtor();
}

void Message::SharedDtor() {
  if (sessionid_ != &::google::protobuf::internal::kEmptyString) {
    delete sessionid_;
  }
  if (sessionhash_ != &::google::protobuf::internal::kEmptyString) {
    delete sessionhash_;
  }
  if (this != default_instance_) {
  }
}

void Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Message::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Message_descriptor_;
}

const Message& Message::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Message_2eproto();
  return *default_instance_;
}

Message* Message::default_instance_ = NULL;

Message* Message::New() const {
  return new Message;
}

void Message::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_sessionid()) {
      if (sessionid_ != &::google::protobuf::internal::kEmptyString) {
        sessionid_->clear();
      }
    }
    if (has_sessionhash()) {
      if (sessionhash_ != &::google::protobuf::internal::kEmptyString) {
        sessionhash_->clear();
      }
    }
  }
  message_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string sessionId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sessionid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->sessionid().data(), this->sessionid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_sessionHash;
        break;
      }

      // optional string sessionHash = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sessionHash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sessionhash()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->sessionhash().data(), this->sessionhash().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_message;
        break;
      }

      // repeated .Message.MessageData message = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_message()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_message;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string sessionId = 1;
  if (has_sessionid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sessionid().data(), this->sessionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->sessionid(), output);
  }

  // optional string sessionHash = 2;
  if (has_sessionhash()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sessionhash().data(), this->sessionhash().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->sessionhash(), output);
  }

  // repeated .Message.MessageData message = 3;
  for (int i = 0; i < this->message_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->message(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Message::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string sessionId = 1;
  if (has_sessionid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sessionid().data(), this->sessionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->sessionid(), target);
  }

  // optional string sessionHash = 2;
  if (has_sessionhash()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sessionhash().data(), this->sessionhash().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->sessionhash(), target);
  }

  // repeated .Message.MessageData message = 3;
  for (int i = 0; i < this->message_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->message(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Message::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string sessionId = 1;
    if (has_sessionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sessionid());
    }

    // optional string sessionHash = 2;
    if (has_sessionhash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sessionhash());
    }

  }
  // repeated .Message.MessageData message = 3;
  total_size += 1 * this->message_size();
  for (int i = 0; i < this->message_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->message(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Message::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Message* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Message*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  message_.MergeFrom(from.message_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_sessionid()) {
      set_sessionid(from.sessionid());
    }
    if (from.has_sessionhash()) {
      set_sessionhash(from.sessionhash());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Message::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {

  for (int i = 0; i < message_size(); i++) {
    if (!this->message(i).IsInitialized()) return false;
  }
  return true;
}

void Message::Swap(Message* other) {
  if (other != this) {
    std::swap(sessionid_, other->sessionid_);
    std::swap(sessionhash_, other->sessionhash_);
    message_.Swap(&other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Message::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Message_descriptor_;
  metadata.reflection = Message_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
