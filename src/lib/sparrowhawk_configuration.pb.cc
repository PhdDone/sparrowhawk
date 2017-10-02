// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sparrowhawk_configuration.proto

#include "sparrowhawk_configuration.pb.h"

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
namespace speech {
namespace sparrowhawk {
class SparrowhawkConfigurationDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SparrowhawkConfiguration>
      _instance;
} _SparrowhawkConfiguration_default_instance_;
}  // namespace sparrowhawk
}  // namespace speech
namespace protobuf_sparrowhawk_5fconfiguration_2eproto {
void InitDefaultsSparrowhawkConfigurationImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  {
    void* ptr = &::speech::sparrowhawk::_SparrowhawkConfiguration_default_instance_;
    new (ptr) ::speech::sparrowhawk::SparrowhawkConfiguration();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::speech::sparrowhawk::SparrowhawkConfiguration::InitAsDefaultInstance();
}

void InitDefaultsSparrowhawkConfiguration() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSparrowhawkConfigurationImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, tokenizer_grammar_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, verbalizer_grammar_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, sentence_boundary_regexp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, sentence_boundary_exceptions_file_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::speech::sparrowhawk::SparrowhawkConfiguration, serialization_spec_),
  0,
  1,
  2,
  3,
  4,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::speech::sparrowhawk::SparrowhawkConfiguration)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::speech::sparrowhawk::_SparrowhawkConfiguration_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "sparrowhawk_configuration.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\037sparrowhawk_configuration.proto\022\022speec"
      "h.sparrowhawk\"\272\001\n\030SparrowhawkConfigurati"
      "on\022\031\n\021tokenizer_grammar\030\001 \001(\t\022\032\n\022verbali"
      "zer_grammar\030\002 \001(\t\022 \n\030sentence_boundary_r"
      "egexp\030\003 \001(\t\022)\n!sentence_boundary_excepti"
      "ons_file\030\004 \001(\t\022\032\n\022serialization_spec\030\005 \001"
      "(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sparrowhawk_configuration.proto", &protobuf_RegisterTypes);
}

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
}  // namespace protobuf_sparrowhawk_5fconfiguration_2eproto
namespace speech {
namespace sparrowhawk {

// ===================================================================

void SparrowhawkConfiguration::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SparrowhawkConfiguration::kTokenizerGrammarFieldNumber;
const int SparrowhawkConfiguration::kVerbalizerGrammarFieldNumber;
const int SparrowhawkConfiguration::kSentenceBoundaryRegexpFieldNumber;
const int SparrowhawkConfiguration::kSentenceBoundaryExceptionsFileFieldNumber;
const int SparrowhawkConfiguration::kSerializationSpecFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SparrowhawkConfiguration::SparrowhawkConfiguration()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_sparrowhawk_5fconfiguration_2eproto::InitDefaultsSparrowhawkConfiguration();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:speech.sparrowhawk.SparrowhawkConfiguration)
}
SparrowhawkConfiguration::SparrowhawkConfiguration(const SparrowhawkConfiguration& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  tokenizer_grammar_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_tokenizer_grammar()) {
    tokenizer_grammar_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tokenizer_grammar_);
  }
  verbalizer_grammar_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_verbalizer_grammar()) {
    verbalizer_grammar_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.verbalizer_grammar_);
  }
  sentence_boundary_regexp_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_sentence_boundary_regexp()) {
    sentence_boundary_regexp_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sentence_boundary_regexp_);
  }
  sentence_boundary_exceptions_file_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_sentence_boundary_exceptions_file()) {
    sentence_boundary_exceptions_file_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sentence_boundary_exceptions_file_);
  }
  serialization_spec_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serialization_spec()) {
    serialization_spec_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serialization_spec_);
  }
  // @@protoc_insertion_point(copy_constructor:speech.sparrowhawk.SparrowhawkConfiguration)
}

void SparrowhawkConfiguration::SharedCtor() {
  _cached_size_ = 0;
  tokenizer_grammar_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  verbalizer_grammar_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sentence_boundary_regexp_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sentence_boundary_exceptions_file_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialization_spec_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SparrowhawkConfiguration::~SparrowhawkConfiguration() {
  // @@protoc_insertion_point(destructor:speech.sparrowhawk.SparrowhawkConfiguration)
  SharedDtor();
}

void SparrowhawkConfiguration::SharedDtor() {
  tokenizer_grammar_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  verbalizer_grammar_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sentence_boundary_regexp_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sentence_boundary_exceptions_file_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialization_spec_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SparrowhawkConfiguration::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SparrowhawkConfiguration::descriptor() {
  ::protobuf_sparrowhawk_5fconfiguration_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sparrowhawk_5fconfiguration_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SparrowhawkConfiguration& SparrowhawkConfiguration::default_instance() {
  ::protobuf_sparrowhawk_5fconfiguration_2eproto::InitDefaultsSparrowhawkConfiguration();
  return *internal_default_instance();
}

SparrowhawkConfiguration* SparrowhawkConfiguration::New(::google::protobuf::Arena* arena) const {
  SparrowhawkConfiguration* n = new SparrowhawkConfiguration;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SparrowhawkConfiguration::Clear() {
// @@protoc_insertion_point(message_clear_start:speech.sparrowhawk.SparrowhawkConfiguration)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!tokenizer_grammar_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*tokenizer_grammar_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!verbalizer_grammar_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*verbalizer_grammar_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!sentence_boundary_regexp_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*sentence_boundary_regexp_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(!sentence_boundary_exceptions_file_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*sentence_boundary_exceptions_file_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(!serialization_spec_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*serialization_spec_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SparrowhawkConfiguration::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:speech.sparrowhawk.SparrowhawkConfiguration)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string tokenizer_grammar = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tokenizer_grammar()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->tokenizer_grammar().data(), static_cast<int>(this->tokenizer_grammar().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "speech.sparrowhawk.SparrowhawkConfiguration.tokenizer_grammar");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string verbalizer_grammar = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_verbalizer_grammar()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->verbalizer_grammar().data(), static_cast<int>(this->verbalizer_grammar().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "speech.sparrowhawk.SparrowhawkConfiguration.verbalizer_grammar");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string sentence_boundary_regexp = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sentence_boundary_regexp()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->sentence_boundary_regexp().data(), static_cast<int>(this->sentence_boundary_regexp().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "speech.sparrowhawk.SparrowhawkConfiguration.sentence_boundary_regexp");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string sentence_boundary_exceptions_file = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sentence_boundary_exceptions_file()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->sentence_boundary_exceptions_file().data(), static_cast<int>(this->sentence_boundary_exceptions_file().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "speech.sparrowhawk.SparrowhawkConfiguration.sentence_boundary_exceptions_file");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string serialization_spec = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serialization_spec()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->serialization_spec().data(), static_cast<int>(this->serialization_spec().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "speech.sparrowhawk.SparrowhawkConfiguration.serialization_spec");
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
  // @@protoc_insertion_point(parse_success:speech.sparrowhawk.SparrowhawkConfiguration)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:speech.sparrowhawk.SparrowhawkConfiguration)
  return false;
#undef DO_
}

void SparrowhawkConfiguration::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:speech.sparrowhawk.SparrowhawkConfiguration)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string tokenizer_grammar = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tokenizer_grammar().data(), static_cast<int>(this->tokenizer_grammar().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.tokenizer_grammar");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->tokenizer_grammar(), output);
  }

  // optional string verbalizer_grammar = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->verbalizer_grammar().data(), static_cast<int>(this->verbalizer_grammar().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.verbalizer_grammar");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->verbalizer_grammar(), output);
  }

  // optional string sentence_boundary_regexp = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sentence_boundary_regexp().data(), static_cast<int>(this->sentence_boundary_regexp().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.sentence_boundary_regexp");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->sentence_boundary_regexp(), output);
  }

  // optional string sentence_boundary_exceptions_file = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sentence_boundary_exceptions_file().data(), static_cast<int>(this->sentence_boundary_exceptions_file().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.sentence_boundary_exceptions_file");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->sentence_boundary_exceptions_file(), output);
  }

  // optional string serialization_spec = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->serialization_spec().data(), static_cast<int>(this->serialization_spec().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.serialization_spec");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->serialization_spec(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:speech.sparrowhawk.SparrowhawkConfiguration)
}

::google::protobuf::uint8* SparrowhawkConfiguration::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:speech.sparrowhawk.SparrowhawkConfiguration)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string tokenizer_grammar = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tokenizer_grammar().data(), static_cast<int>(this->tokenizer_grammar().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.tokenizer_grammar");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->tokenizer_grammar(), target);
  }

  // optional string verbalizer_grammar = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->verbalizer_grammar().data(), static_cast<int>(this->verbalizer_grammar().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.verbalizer_grammar");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->verbalizer_grammar(), target);
  }

  // optional string sentence_boundary_regexp = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sentence_boundary_regexp().data(), static_cast<int>(this->sentence_boundary_regexp().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.sentence_boundary_regexp");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->sentence_boundary_regexp(), target);
  }

  // optional string sentence_boundary_exceptions_file = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sentence_boundary_exceptions_file().data(), static_cast<int>(this->sentence_boundary_exceptions_file().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.sentence_boundary_exceptions_file");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->sentence_boundary_exceptions_file(), target);
  }

  // optional string serialization_spec = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->serialization_spec().data(), static_cast<int>(this->serialization_spec().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "speech.sparrowhawk.SparrowhawkConfiguration.serialization_spec");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->serialization_spec(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:speech.sparrowhawk.SparrowhawkConfiguration)
  return target;
}

size_t SparrowhawkConfiguration::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:speech.sparrowhawk.SparrowhawkConfiguration)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 31u) {
    // optional string tokenizer_grammar = 1;
    if (has_tokenizer_grammar()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tokenizer_grammar());
    }

    // optional string verbalizer_grammar = 2;
    if (has_verbalizer_grammar()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->verbalizer_grammar());
    }

    // optional string sentence_boundary_regexp = 3;
    if (has_sentence_boundary_regexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sentence_boundary_regexp());
    }

    // optional string sentence_boundary_exceptions_file = 4;
    if (has_sentence_boundary_exceptions_file()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sentence_boundary_exceptions_file());
    }

    // optional string serialization_spec = 5;
    if (has_serialization_spec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serialization_spec());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SparrowhawkConfiguration::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:speech.sparrowhawk.SparrowhawkConfiguration)
  GOOGLE_DCHECK_NE(&from, this);
  const SparrowhawkConfiguration* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SparrowhawkConfiguration>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:speech.sparrowhawk.SparrowhawkConfiguration)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:speech.sparrowhawk.SparrowhawkConfiguration)
    MergeFrom(*source);
  }
}

void SparrowhawkConfiguration::MergeFrom(const SparrowhawkConfiguration& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:speech.sparrowhawk.SparrowhawkConfiguration)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_tokenizer_grammar();
      tokenizer_grammar_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tokenizer_grammar_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_verbalizer_grammar();
      verbalizer_grammar_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.verbalizer_grammar_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_sentence_boundary_regexp();
      sentence_boundary_regexp_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sentence_boundary_regexp_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_sentence_boundary_exceptions_file();
      sentence_boundary_exceptions_file_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sentence_boundary_exceptions_file_);
    }
    if (cached_has_bits & 0x00000010u) {
      set_has_serialization_spec();
      serialization_spec_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serialization_spec_);
    }
  }
}

void SparrowhawkConfiguration::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:speech.sparrowhawk.SparrowhawkConfiguration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SparrowhawkConfiguration::CopyFrom(const SparrowhawkConfiguration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:speech.sparrowhawk.SparrowhawkConfiguration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SparrowhawkConfiguration::IsInitialized() const {
  return true;
}

void SparrowhawkConfiguration::Swap(SparrowhawkConfiguration* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SparrowhawkConfiguration::InternalSwap(SparrowhawkConfiguration* other) {
  using std::swap;
  tokenizer_grammar_.Swap(&other->tokenizer_grammar_);
  verbalizer_grammar_.Swap(&other->verbalizer_grammar_);
  sentence_boundary_regexp_.Swap(&other->sentence_boundary_regexp_);
  sentence_boundary_exceptions_file_.Swap(&other->sentence_boundary_exceptions_file_);
  serialization_spec_.Swap(&other->serialization_spec_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SparrowhawkConfiguration::GetMetadata() const {
  protobuf_sparrowhawk_5fconfiguration_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sparrowhawk_5fconfiguration_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sparrowhawk
}  // namespace speech

// @@protoc_insertion_point(global_scope)
