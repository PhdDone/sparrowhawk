// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rule_order.proto

#ifndef PROTOBUF_rule_5forder_2eproto__INCLUDED
#define PROTOBUF_rule_5forder_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace speech {
namespace sparrowhawk {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rule_5forder_2eproto();
void protobuf_AssignDesc_rule_5forder_2eproto();
void protobuf_ShutdownFile_rule_5forder_2eproto();

class Rule;
class Grammar;

// ===================================================================

class Rule : public ::google::protobuf::Message {
 public:
  Rule();
  virtual ~Rule();

  Rule(const Rule& from);

  inline Rule& operator=(const Rule& from) {
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
  static const Rule& default_instance();

  void Swap(Rule* other);

  // implements Message ----------------------------------------------

  Rule* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Rule& from);
  void MergeFrom(const Rule& from);
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

  // required string main = 1;
  inline bool has_main() const;
  inline void clear_main();
  static const int kMainFieldNumber = 1;
  inline const ::std::string& main() const;
  inline void set_main(const ::std::string& value);
  inline void set_main(const char* value);
  inline void set_main(const char* value, size_t size);
  inline ::std::string* mutable_main();
  inline ::std::string* release_main();
  inline void set_allocated_main(::std::string* main);

  // optional string parens = 2;
  inline bool has_parens() const;
  inline void clear_parens();
  static const int kParensFieldNumber = 2;
  inline const ::std::string& parens() const;
  inline void set_parens(const ::std::string& value);
  inline void set_parens(const char* value);
  inline void set_parens(const char* value, size_t size);
  inline ::std::string* mutable_parens();
  inline ::std::string* release_parens();
  inline void set_allocated_parens(::std::string* parens);

  // optional string assignments = 3;
  inline bool has_assignments() const;
  inline void clear_assignments();
  static const int kAssignmentsFieldNumber = 3;
  inline const ::std::string& assignments() const;
  inline void set_assignments(const ::std::string& value);
  inline void set_assignments(const char* value);
  inline void set_assignments(const char* value, size_t size);
  inline ::std::string* mutable_assignments();
  inline ::std::string* release_assignments();
  inline void set_allocated_assignments(::std::string* assignments);

  // optional string redup = 4;
  inline bool has_redup() const;
  inline void clear_redup();
  static const int kRedupFieldNumber = 4;
  inline const ::std::string& redup() const;
  inline void set_redup(const ::std::string& value);
  inline void set_redup(const char* value);
  inline void set_redup(const char* value, size_t size);
  inline ::std::string* mutable_redup();
  inline ::std::string* release_redup();
  inline void set_allocated_redup(::std::string* redup);

  // @@protoc_insertion_point(class_scope:speech.sparrowhawk.Rule)
 private:
  inline void set_has_main();
  inline void clear_has_main();
  inline void set_has_parens();
  inline void clear_has_parens();
  inline void set_has_assignments();
  inline void clear_has_assignments();
  inline void set_has_redup();
  inline void clear_has_redup();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* main_;
  ::std::string* parens_;
  ::std::string* assignments_;
  ::std::string* redup_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_rule_5forder_2eproto();
  friend void protobuf_AssignDesc_rule_5forder_2eproto();
  friend void protobuf_ShutdownFile_rule_5forder_2eproto();

  void InitAsDefaultInstance();
  static Rule* default_instance_;
};
// -------------------------------------------------------------------

class Grammar : public ::google::protobuf::Message {
 public:
  Grammar();
  virtual ~Grammar();

  Grammar(const Grammar& from);

  inline Grammar& operator=(const Grammar& from) {
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
  static const Grammar& default_instance();

  void Swap(Grammar* other);

  // implements Message ----------------------------------------------

  Grammar* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Grammar& from);
  void MergeFrom(const Grammar& from);
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

  // required string grammar_file = 1;
  inline bool has_grammar_file() const;
  inline void clear_grammar_file();
  static const int kGrammarFileFieldNumber = 1;
  inline const ::std::string& grammar_file() const;
  inline void set_grammar_file(const ::std::string& value);
  inline void set_grammar_file(const char* value);
  inline void set_grammar_file(const char* value, size_t size);
  inline ::std::string* mutable_grammar_file();
  inline ::std::string* release_grammar_file();
  inline void set_allocated_grammar_file(::std::string* grammar_file);

  // required string grammar_name = 2;
  inline bool has_grammar_name() const;
  inline void clear_grammar_name();
  static const int kGrammarNameFieldNumber = 2;
  inline const ::std::string& grammar_name() const;
  inline void set_grammar_name(const ::std::string& value);
  inline void set_grammar_name(const char* value);
  inline void set_grammar_name(const char* value, size_t size);
  inline ::std::string* mutable_grammar_name();
  inline ::std::string* release_grammar_name();
  inline void set_allocated_grammar_name(::std::string* grammar_name);

  // repeated .speech.sparrowhawk.Rule rules = 3;
  inline int rules_size() const;
  inline void clear_rules();
  static const int kRulesFieldNumber = 3;
  inline const ::speech::sparrowhawk::Rule& rules(int index) const;
  inline ::speech::sparrowhawk::Rule* mutable_rules(int index);
  inline ::speech::sparrowhawk::Rule* add_rules();
  inline const ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >&
      rules() const;
  inline ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >*
      mutable_rules();

  // @@protoc_insertion_point(class_scope:speech.sparrowhawk.Grammar)
 private:
  inline void set_has_grammar_file();
  inline void clear_has_grammar_file();
  inline void set_has_grammar_name();
  inline void clear_has_grammar_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* grammar_file_;
  ::std::string* grammar_name_;
  ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule > rules_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_rule_5forder_2eproto();
  friend void protobuf_AssignDesc_rule_5forder_2eproto();
  friend void protobuf_ShutdownFile_rule_5forder_2eproto();

  void InitAsDefaultInstance();
  static Grammar* default_instance_;
};
// ===================================================================


// ===================================================================

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
  if (main_ != &::google::protobuf::internal::kEmptyString) {
    main_->clear();
  }
  clear_has_main();
}
inline const ::std::string& Rule::main() const {
  return *main_;
}
inline void Rule::set_main(const ::std::string& value) {
  set_has_main();
  if (main_ == &::google::protobuf::internal::kEmptyString) {
    main_ = new ::std::string;
  }
  main_->assign(value);
}
inline void Rule::set_main(const char* value) {
  set_has_main();
  if (main_ == &::google::protobuf::internal::kEmptyString) {
    main_ = new ::std::string;
  }
  main_->assign(value);
}
inline void Rule::set_main(const char* value, size_t size) {
  set_has_main();
  if (main_ == &::google::protobuf::internal::kEmptyString) {
    main_ = new ::std::string;
  }
  main_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Rule::mutable_main() {
  set_has_main();
  if (main_ == &::google::protobuf::internal::kEmptyString) {
    main_ = new ::std::string;
  }
  return main_;
}
inline ::std::string* Rule::release_main() {
  clear_has_main();
  if (main_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = main_;
    main_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Rule::set_allocated_main(::std::string* main) {
  if (main_ != &::google::protobuf::internal::kEmptyString) {
    delete main_;
  }
  if (main) {
    set_has_main();
    main_ = main;
  } else {
    clear_has_main();
    main_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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
  if (parens_ != &::google::protobuf::internal::kEmptyString) {
    parens_->clear();
  }
  clear_has_parens();
}
inline const ::std::string& Rule::parens() const {
  return *parens_;
}
inline void Rule::set_parens(const ::std::string& value) {
  set_has_parens();
  if (parens_ == &::google::protobuf::internal::kEmptyString) {
    parens_ = new ::std::string;
  }
  parens_->assign(value);
}
inline void Rule::set_parens(const char* value) {
  set_has_parens();
  if (parens_ == &::google::protobuf::internal::kEmptyString) {
    parens_ = new ::std::string;
  }
  parens_->assign(value);
}
inline void Rule::set_parens(const char* value, size_t size) {
  set_has_parens();
  if (parens_ == &::google::protobuf::internal::kEmptyString) {
    parens_ = new ::std::string;
  }
  parens_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Rule::mutable_parens() {
  set_has_parens();
  if (parens_ == &::google::protobuf::internal::kEmptyString) {
    parens_ = new ::std::string;
  }
  return parens_;
}
inline ::std::string* Rule::release_parens() {
  clear_has_parens();
  if (parens_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = parens_;
    parens_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Rule::set_allocated_parens(::std::string* parens) {
  if (parens_ != &::google::protobuf::internal::kEmptyString) {
    delete parens_;
  }
  if (parens) {
    set_has_parens();
    parens_ = parens;
  } else {
    clear_has_parens();
    parens_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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
  if (assignments_ != &::google::protobuf::internal::kEmptyString) {
    assignments_->clear();
  }
  clear_has_assignments();
}
inline const ::std::string& Rule::assignments() const {
  return *assignments_;
}
inline void Rule::set_assignments(const ::std::string& value) {
  set_has_assignments();
  if (assignments_ == &::google::protobuf::internal::kEmptyString) {
    assignments_ = new ::std::string;
  }
  assignments_->assign(value);
}
inline void Rule::set_assignments(const char* value) {
  set_has_assignments();
  if (assignments_ == &::google::protobuf::internal::kEmptyString) {
    assignments_ = new ::std::string;
  }
  assignments_->assign(value);
}
inline void Rule::set_assignments(const char* value, size_t size) {
  set_has_assignments();
  if (assignments_ == &::google::protobuf::internal::kEmptyString) {
    assignments_ = new ::std::string;
  }
  assignments_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Rule::mutable_assignments() {
  set_has_assignments();
  if (assignments_ == &::google::protobuf::internal::kEmptyString) {
    assignments_ = new ::std::string;
  }
  return assignments_;
}
inline ::std::string* Rule::release_assignments() {
  clear_has_assignments();
  if (assignments_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = assignments_;
    assignments_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Rule::set_allocated_assignments(::std::string* assignments) {
  if (assignments_ != &::google::protobuf::internal::kEmptyString) {
    delete assignments_;
  }
  if (assignments) {
    set_has_assignments();
    assignments_ = assignments;
  } else {
    clear_has_assignments();
    assignments_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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
  if (redup_ != &::google::protobuf::internal::kEmptyString) {
    redup_->clear();
  }
  clear_has_redup();
}
inline const ::std::string& Rule::redup() const {
  return *redup_;
}
inline void Rule::set_redup(const ::std::string& value) {
  set_has_redup();
  if (redup_ == &::google::protobuf::internal::kEmptyString) {
    redup_ = new ::std::string;
  }
  redup_->assign(value);
}
inline void Rule::set_redup(const char* value) {
  set_has_redup();
  if (redup_ == &::google::protobuf::internal::kEmptyString) {
    redup_ = new ::std::string;
  }
  redup_->assign(value);
}
inline void Rule::set_redup(const char* value, size_t size) {
  set_has_redup();
  if (redup_ == &::google::protobuf::internal::kEmptyString) {
    redup_ = new ::std::string;
  }
  redup_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Rule::mutable_redup() {
  set_has_redup();
  if (redup_ == &::google::protobuf::internal::kEmptyString) {
    redup_ = new ::std::string;
  }
  return redup_;
}
inline ::std::string* Rule::release_redup() {
  clear_has_redup();
  if (redup_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = redup_;
    redup_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Rule::set_allocated_redup(::std::string* redup) {
  if (redup_ != &::google::protobuf::internal::kEmptyString) {
    delete redup_;
  }
  if (redup) {
    set_has_redup();
    redup_ = redup;
  } else {
    clear_has_redup();
    redup_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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
  if (grammar_file_ != &::google::protobuf::internal::kEmptyString) {
    grammar_file_->clear();
  }
  clear_has_grammar_file();
}
inline const ::std::string& Grammar::grammar_file() const {
  return *grammar_file_;
}
inline void Grammar::set_grammar_file(const ::std::string& value) {
  set_has_grammar_file();
  if (grammar_file_ == &::google::protobuf::internal::kEmptyString) {
    grammar_file_ = new ::std::string;
  }
  grammar_file_->assign(value);
}
inline void Grammar::set_grammar_file(const char* value) {
  set_has_grammar_file();
  if (grammar_file_ == &::google::protobuf::internal::kEmptyString) {
    grammar_file_ = new ::std::string;
  }
  grammar_file_->assign(value);
}
inline void Grammar::set_grammar_file(const char* value, size_t size) {
  set_has_grammar_file();
  if (grammar_file_ == &::google::protobuf::internal::kEmptyString) {
    grammar_file_ = new ::std::string;
  }
  grammar_file_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Grammar::mutable_grammar_file() {
  set_has_grammar_file();
  if (grammar_file_ == &::google::protobuf::internal::kEmptyString) {
    grammar_file_ = new ::std::string;
  }
  return grammar_file_;
}
inline ::std::string* Grammar::release_grammar_file() {
  clear_has_grammar_file();
  if (grammar_file_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = grammar_file_;
    grammar_file_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Grammar::set_allocated_grammar_file(::std::string* grammar_file) {
  if (grammar_file_ != &::google::protobuf::internal::kEmptyString) {
    delete grammar_file_;
  }
  if (grammar_file) {
    set_has_grammar_file();
    grammar_file_ = grammar_file;
  } else {
    clear_has_grammar_file();
    grammar_file_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
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
  if (grammar_name_ != &::google::protobuf::internal::kEmptyString) {
    grammar_name_->clear();
  }
  clear_has_grammar_name();
}
inline const ::std::string& Grammar::grammar_name() const {
  return *grammar_name_;
}
inline void Grammar::set_grammar_name(const ::std::string& value) {
  set_has_grammar_name();
  if (grammar_name_ == &::google::protobuf::internal::kEmptyString) {
    grammar_name_ = new ::std::string;
  }
  grammar_name_->assign(value);
}
inline void Grammar::set_grammar_name(const char* value) {
  set_has_grammar_name();
  if (grammar_name_ == &::google::protobuf::internal::kEmptyString) {
    grammar_name_ = new ::std::string;
  }
  grammar_name_->assign(value);
}
inline void Grammar::set_grammar_name(const char* value, size_t size) {
  set_has_grammar_name();
  if (grammar_name_ == &::google::protobuf::internal::kEmptyString) {
    grammar_name_ = new ::std::string;
  }
  grammar_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Grammar::mutable_grammar_name() {
  set_has_grammar_name();
  if (grammar_name_ == &::google::protobuf::internal::kEmptyString) {
    grammar_name_ = new ::std::string;
  }
  return grammar_name_;
}
inline ::std::string* Grammar::release_grammar_name() {
  clear_has_grammar_name();
  if (grammar_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = grammar_name_;
    grammar_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Grammar::set_allocated_grammar_name(::std::string* grammar_name) {
  if (grammar_name_ != &::google::protobuf::internal::kEmptyString) {
    delete grammar_name_;
  }
  if (grammar_name) {
    set_has_grammar_name();
    grammar_name_ = grammar_name;
  } else {
    clear_has_grammar_name();
    grammar_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .speech.sparrowhawk.Rule rules = 3;
inline int Grammar::rules_size() const {
  return rules_.size();
}
inline void Grammar::clear_rules() {
  rules_.Clear();
}
inline const ::speech::sparrowhawk::Rule& Grammar::rules(int index) const {
  return rules_.Get(index);
}
inline ::speech::sparrowhawk::Rule* Grammar::mutable_rules(int index) {
  return rules_.Mutable(index);
}
inline ::speech::sparrowhawk::Rule* Grammar::add_rules() {
  return rules_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >&
Grammar::rules() const {
  return rules_;
}
inline ::google::protobuf::RepeatedPtrField< ::speech::sparrowhawk::Rule >*
Grammar::mutable_rules() {
  return &rules_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sparrowhawk
}  // namespace speech

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rule_5forder_2eproto__INCLUDED
