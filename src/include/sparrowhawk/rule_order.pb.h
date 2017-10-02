// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rule_order.proto

#ifndef PROTOBUF_rule_5forder_2eproto__INCLUDED
#define PROTOBUF_rule_5forder_2eproto__INCLUDED

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

namespace protobuf_rule_5forder_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsRuleImpl();
void InitDefaultsRule();
void InitDefaultsGrammarImpl();
void InitDefaultsGrammar();
inline void InitDefaults() {
  InitDefaultsRule();
  InitDefaultsGrammar();
}
}  // namespace protobuf_rule_5forder_2eproto
namespace speech {
namespace sparrowhawk {
class Grammar;
class GrammarDefaultTypeInternal;
extern GrammarDefaultTypeInternal _Grammar_default_instance_;
class Rule;
class RuleDefaultTypeInternal;
extern RuleDefaultTypeInternal _Rule_default_instance_;
}  // namespace sparrowhawk
}  // namespace speech
namespace speech {
namespace sparrowhawk {

// ===================================================================

class Rule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:speech.sparrowhawk.Rule) */ {
 public:
  Rule();
  virtual ~Rule();

  Rule(const Rule& from);

  inline Rule& operator=(const Rule& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Rule(Rule&& from) noexcept
    : Rule() {
    *this = ::std::move(from);
  }

  inline Rule& operator=(Rule&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Rule& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rule* internal_default_instance() {
    return reinterpret_cast<const Rule*>(
               &_Rule_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Rule* other);
  friend void swap(Rule& a, Rule& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Rule* New() const PROTOBUF_FINAL { return New(NULL); }

  Rule* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Rule& from);
  void MergeFrom(const Rule& from);
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
  void InternalSwap(Rule* other);
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

  // required string main = 1;
  bool has_main() const;
  void clear_main();
  static const int kMainFieldNumber = 1;
  const ::std::string& main() const;
  void set_main(const ::std::string& value);
  #if LANG_CXX11
  void set_main(::std::string&& value);
  #endif
  void set_main(const char* value);
  void set_main(const char* value, size_t size);
  ::std::string* mutable_main();
  ::std::string* release_main();
  void set_allocated_main(::std::string* main);

  // optional string parens = 2;
  bool has_parens() const;
  void clear_parens();
  static const int kParensFieldNumber = 2;
  const ::std::string& parens() const;
  void set_parens(const ::std::string& value);
  #if LANG_CXX11
  void set_parens(::std::string&& value);
  #endif
  void set_parens(const char* value);
  void set_parens(const char* value, size_t size);
  ::std::string* mutable_parens();
  ::std::string* release_parens();
  void set_allocated_parens(::std::string* parens);

  // optional string assignments = 3;
  bool has_assignments() const;
  void clear_assignments();
  static const int kAssignmentsFieldNumber = 3;
  const ::std::string& assignments() const;
  void set_assignments(const ::std::string& value);
  #if LANG_CXX11
  void set_assignments(::std::string&& value);
  #endif
  void set_assignments(const char* value);
  void set_assignments(const char* value, size_t size);
  ::std::string* mutable_assignments();
  ::std::string* release_assignments();
  void set_allocated_assignments(::std::string* assignments);

  // optional string redup = 4;
  bool has_redup() const;
  void clear_redup();
  static const int kRedupFieldNumber = 4;
  const ::std::string& redup() const;
  void set_redup(const ::std::string& value);
  #if LANG_CXX11
  void set_redup(::std::string&& value);
  #endif
  void set_redup(const char* value);
  void set_redup(const char* value, size_t size);
  ::std::string* mutable_redup();
  ::std::string* release_redup();
  void set_allocated_redup(::std::string* redup);

  // @@protoc_insertion_point(class_scope:speech.sparrowhawk.Rule)
 private:
  void set_has_main();
  void clear_has_main();
  void set_has_parens();
  void clear_has_parens();
  void set_has_assignments();
  void clear_has_assignments();
  void set_has_redup();
  void clear_has_redup();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr main_;
  ::google::protobuf::internal::ArenaStringPtr parens_;
  ::google::protobuf::internal::ArenaStringPtr assignments_;
  ::google::protobuf::internal::ArenaStringPtr redup_;
  friend struct ::protobuf_rule_5forder_2eproto::TableStruct;
  friend void ::protobuf_rule_5forder_2eproto::InitDefaultsRuleImpl();
};
// -------------------------------------------------------------------

class Grammar : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:speech.sparrowhawk.Grammar) */ {
 public:
  Grammar();
  virtual ~Grammar();

  Grammar(const Grammar& from);

  inline Grammar& operator=(const Grammar& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Grammar(Grammar&& from) noexcept
    : Grammar() {
    *this = ::std::move(from);
  }

  inline Grammar& operator=(Grammar&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Grammar& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Grammar* internal_default_instance() {
    return reinterpret_cast<const Grammar*>(
               &_Grammar_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Grammar* other);
  friend void swap(Grammar& a, Grammar& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Grammar* New() const PROTOBUF_FINAL { return New(NULL); }

  Grammar* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Grammar& from);
  void MergeFrom(const Grammar& from);
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
  void InternalSwap(Grammar* other);
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

  // repeated .speech.sparrowhawk.Rule rules = 3;
  int rules_size() const;
  void clear_rules();
  static const int kRulesFieldNumber = 3;
  const ::speech::sparrowhawk::Rule& rules(int index) const;
  ::speech::sparrowhawk::Rule* mutable_rules(int index);
  ::speech::sparrowhawk::Rule* add_rules();
  ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >*
      mutable_rules();
  const ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >&
      rules() const;

  // required string grammar_file = 1;
  bool has_grammar_file() const;
  void clear_grammar_file();
  static const int kGrammarFileFieldNumber = 1;
  const ::std::string& grammar_file() const;
  void set_grammar_file(const ::std::string& value);
  #if LANG_CXX11
  void set_grammar_file(::std::string&& value);
  #endif
  void set_grammar_file(const char* value);
  void set_grammar_file(const char* value, size_t size);
  ::std::string* mutable_grammar_file();
  ::std::string* release_grammar_file();
  void set_allocated_grammar_file(::std::string* grammar_file);

  // required string grammar_name = 2;
  bool has_grammar_name() const;
  void clear_grammar_name();
  static const int kGrammarNameFieldNumber = 2;
  const ::std::string& grammar_name() const;
  void set_grammar_name(const ::std::string& value);
  #if LANG_CXX11
  void set_grammar_name(::std::string&& value);
  #endif
  void set_grammar_name(const char* value);
  void set_grammar_name(const char* value, size_t size);
  ::std::string* mutable_grammar_name();
  ::std::string* release_grammar_name();
  void set_allocated_grammar_name(::std::string* grammar_name);

  // @@protoc_insertion_point(class_scope:speech.sparrowhawk.Grammar)
 private:
  void set_has_grammar_file();
  void clear_has_grammar_file();
  void set_has_grammar_name();
  void clear_has_grammar_name();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule > rules_;
  ::google::protobuf::internal::ArenaStringPtr grammar_file_;
  ::google::protobuf::internal::ArenaStringPtr grammar_name_;
  friend struct ::protobuf_rule_5forder_2eproto::TableStruct;
  friend void ::protobuf_rule_5forder_2eproto::InitDefaultsGrammarImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Rule

// required string main = 1;
inline bool Rule::has_main() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Rule::set_has_main() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Rule::clear_has_main() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Rule::clear_main() {
  main_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_main();
}
inline const ::std::string& Rule::main() const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Rule.main)
  return main_.GetNoArena();
}
inline void Rule::set_main(const ::std::string& value) {
  set_has_main();
  main_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:speech.sparrowhawk.Rule.main)
}
#if LANG_CXX11
inline void Rule::set_main(::std::string&& value) {
  set_has_main();
  main_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:speech.sparrowhawk.Rule.main)
}
#endif
inline void Rule::set_main(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_main();
  main_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:speech.sparrowhawk.Rule.main)
}
inline void Rule::set_main(const char* value, size_t size) {
  set_has_main();
  main_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:speech.sparrowhawk.Rule.main)
}
inline ::std::string* Rule::mutable_main() {
  set_has_main();
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Rule.main)
  return main_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Rule::release_main() {
  // @@protoc_insertion_point(field_release:speech.sparrowhawk.Rule.main)
  clear_has_main();
  return main_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rule::set_allocated_main(::std::string* main) {
  if (main != NULL) {
    set_has_main();
  } else {
    clear_has_main();
  }
  main_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), main);
  // @@protoc_insertion_point(field_set_allocated:speech.sparrowhawk.Rule.main)
}

// optional string parens = 2;
inline bool Rule::has_parens() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Rule::set_has_parens() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Rule::clear_has_parens() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Rule::clear_parens() {
  parens_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_parens();
}
inline const ::std::string& Rule::parens() const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Rule.parens)
  return parens_.GetNoArena();
}
inline void Rule::set_parens(const ::std::string& value) {
  set_has_parens();
  parens_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:speech.sparrowhawk.Rule.parens)
}
#if LANG_CXX11
inline void Rule::set_parens(::std::string&& value) {
  set_has_parens();
  parens_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:speech.sparrowhawk.Rule.parens)
}
#endif
inline void Rule::set_parens(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_parens();
  parens_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:speech.sparrowhawk.Rule.parens)
}
inline void Rule::set_parens(const char* value, size_t size) {
  set_has_parens();
  parens_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:speech.sparrowhawk.Rule.parens)
}
inline ::std::string* Rule::mutable_parens() {
  set_has_parens();
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Rule.parens)
  return parens_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Rule::release_parens() {
  // @@protoc_insertion_point(field_release:speech.sparrowhawk.Rule.parens)
  clear_has_parens();
  return parens_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rule::set_allocated_parens(::std::string* parens) {
  if (parens != NULL) {
    set_has_parens();
  } else {
    clear_has_parens();
  }
  parens_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parens);
  // @@protoc_insertion_point(field_set_allocated:speech.sparrowhawk.Rule.parens)
}

// optional string assignments = 3;
inline bool Rule::has_assignments() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Rule::set_has_assignments() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Rule::clear_has_assignments() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Rule::clear_assignments() {
  assignments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_assignments();
}
inline const ::std::string& Rule::assignments() const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Rule.assignments)
  return assignments_.GetNoArena();
}
inline void Rule::set_assignments(const ::std::string& value) {
  set_has_assignments();
  assignments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:speech.sparrowhawk.Rule.assignments)
}
#if LANG_CXX11
inline void Rule::set_assignments(::std::string&& value) {
  set_has_assignments();
  assignments_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:speech.sparrowhawk.Rule.assignments)
}
#endif
inline void Rule::set_assignments(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_assignments();
  assignments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:speech.sparrowhawk.Rule.assignments)
}
inline void Rule::set_assignments(const char* value, size_t size) {
  set_has_assignments();
  assignments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:speech.sparrowhawk.Rule.assignments)
}
inline ::std::string* Rule::mutable_assignments() {
  set_has_assignments();
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Rule.assignments)
  return assignments_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Rule::release_assignments() {
  // @@protoc_insertion_point(field_release:speech.sparrowhawk.Rule.assignments)
  clear_has_assignments();
  return assignments_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rule::set_allocated_assignments(::std::string* assignments) {
  if (assignments != NULL) {
    set_has_assignments();
  } else {
    clear_has_assignments();
  }
  assignments_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), assignments);
  // @@protoc_insertion_point(field_set_allocated:speech.sparrowhawk.Rule.assignments)
}

// optional string redup = 4;
inline bool Rule::has_redup() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Rule::set_has_redup() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Rule::clear_has_redup() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Rule::clear_redup() {
  redup_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_redup();
}
inline const ::std::string& Rule::redup() const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Rule.redup)
  return redup_.GetNoArena();
}
inline void Rule::set_redup(const ::std::string& value) {
  set_has_redup();
  redup_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:speech.sparrowhawk.Rule.redup)
}
#if LANG_CXX11
inline void Rule::set_redup(::std::string&& value) {
  set_has_redup();
  redup_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:speech.sparrowhawk.Rule.redup)
}
#endif
inline void Rule::set_redup(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_redup();
  redup_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:speech.sparrowhawk.Rule.redup)
}
inline void Rule::set_redup(const char* value, size_t size) {
  set_has_redup();
  redup_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:speech.sparrowhawk.Rule.redup)
}
inline ::std::string* Rule::mutable_redup() {
  set_has_redup();
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Rule.redup)
  return redup_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Rule::release_redup() {
  // @@protoc_insertion_point(field_release:speech.sparrowhawk.Rule.redup)
  clear_has_redup();
  return redup_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rule::set_allocated_redup(::std::string* redup) {
  if (redup != NULL) {
    set_has_redup();
  } else {
    clear_has_redup();
  }
  redup_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), redup);
  // @@protoc_insertion_point(field_set_allocated:speech.sparrowhawk.Rule.redup)
}

// -------------------------------------------------------------------

// Grammar

// required string grammar_file = 1;
inline bool Grammar::has_grammar_file() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Grammar::set_has_grammar_file() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Grammar::clear_has_grammar_file() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Grammar::clear_grammar_file() {
  grammar_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_grammar_file();
}
inline const ::std::string& Grammar::grammar_file() const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Grammar.grammar_file)
  return grammar_file_.GetNoArena();
}
inline void Grammar::set_grammar_file(const ::std::string& value) {
  set_has_grammar_file();
  grammar_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:speech.sparrowhawk.Grammar.grammar_file)
}
#if LANG_CXX11
inline void Grammar::set_grammar_file(::std::string&& value) {
  set_has_grammar_file();
  grammar_file_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:speech.sparrowhawk.Grammar.grammar_file)
}
#endif
inline void Grammar::set_grammar_file(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_grammar_file();
  grammar_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:speech.sparrowhawk.Grammar.grammar_file)
}
inline void Grammar::set_grammar_file(const char* value, size_t size) {
  set_has_grammar_file();
  grammar_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:speech.sparrowhawk.Grammar.grammar_file)
}
inline ::std::string* Grammar::mutable_grammar_file() {
  set_has_grammar_file();
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Grammar.grammar_file)
  return grammar_file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Grammar::release_grammar_file() {
  // @@protoc_insertion_point(field_release:speech.sparrowhawk.Grammar.grammar_file)
  clear_has_grammar_file();
  return grammar_file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Grammar::set_allocated_grammar_file(::std::string* grammar_file) {
  if (grammar_file != NULL) {
    set_has_grammar_file();
  } else {
    clear_has_grammar_file();
  }
  grammar_file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), grammar_file);
  // @@protoc_insertion_point(field_set_allocated:speech.sparrowhawk.Grammar.grammar_file)
}

// required string grammar_name = 2;
inline bool Grammar::has_grammar_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Grammar::set_has_grammar_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Grammar::clear_has_grammar_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Grammar::clear_grammar_name() {
  grammar_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_grammar_name();
}
inline const ::std::string& Grammar::grammar_name() const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Grammar.grammar_name)
  return grammar_name_.GetNoArena();
}
inline void Grammar::set_grammar_name(const ::std::string& value) {
  set_has_grammar_name();
  grammar_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:speech.sparrowhawk.Grammar.grammar_name)
}
#if LANG_CXX11
inline void Grammar::set_grammar_name(::std::string&& value) {
  set_has_grammar_name();
  grammar_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:speech.sparrowhawk.Grammar.grammar_name)
}
#endif
inline void Grammar::set_grammar_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_grammar_name();
  grammar_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:speech.sparrowhawk.Grammar.grammar_name)
}
inline void Grammar::set_grammar_name(const char* value, size_t size) {
  set_has_grammar_name();
  grammar_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:speech.sparrowhawk.Grammar.grammar_name)
}
inline ::std::string* Grammar::mutable_grammar_name() {
  set_has_grammar_name();
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Grammar.grammar_name)
  return grammar_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Grammar::release_grammar_name() {
  // @@protoc_insertion_point(field_release:speech.sparrowhawk.Grammar.grammar_name)
  clear_has_grammar_name();
  return grammar_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Grammar::set_allocated_grammar_name(::std::string* grammar_name) {
  if (grammar_name != NULL) {
    set_has_grammar_name();
  } else {
    clear_has_grammar_name();
  }
  grammar_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), grammar_name);
  // @@protoc_insertion_point(field_set_allocated:speech.sparrowhawk.Grammar.grammar_name)
}

// repeated .speech.sparrowhawk.Rule rules = 3;
inline int Grammar::rules_size() const {
  return rules_.size();
}
inline void Grammar::clear_rules() {
  rules_.Clear();
}
inline const ::speech::sparrowhawk::Rule& Grammar::rules(int index) const {
  // @@protoc_insertion_point(field_get:speech.sparrowhawk.Grammar.rules)
  return rules_.Get(index);
}
inline ::speech::sparrowhawk::Rule* Grammar::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:speech.sparrowhawk.Grammar.rules)
  return rules_.Mutable(index);
}
inline ::speech::sparrowhawk::Rule* Grammar::add_rules() {
  // @@protoc_insertion_point(field_add:speech.sparrowhawk.Grammar.rules)
  return rules_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >*
Grammar::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:speech.sparrowhawk.Grammar.rules)
  return &rules_;
}
inline const ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >&
Grammar::rules() const {
  // @@protoc_insertion_point(field_list:speech.sparrowhawk.Grammar.rules)
  return rules_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sparrowhawk
}  // namespace speech

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rule_5forder_2eproto__INCLUDED
