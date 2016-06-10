/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>
#include <boost/operators.hpp>




namespace cpp2 {

class QueryInput;
class QuerySpec;

class QueryInput : private boost::totally_ordered<QueryInput> {
 public:

  QueryInput() {}
  // FragileConstructor for use in initialization lists only

  QueryInput(apache::thrift::FragileConstructor, std::string type__arg, std::vector<std::string> data__arg, std::vector<std::string> tags__arg) :
      type(std::move(type__arg)),
      data(std::move(data__arg)),
      tags(std::move(tags__arg)) {
    __isset.type = true;
    __isset.data = true;
    __isset.tags = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  QueryInput(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    QueryInput(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    type = arg.move();
    __isset.type = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  QueryInput(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    QueryInput(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    data = arg.move();
    __isset.data = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  QueryInput(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    QueryInput(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    tags = arg.move();
    __isset.tags = true;
  }

  QueryInput(QueryInput&&) = default;

  QueryInput(const QueryInput&) = default;

  QueryInput& operator=(QueryInput&&) = default;

  QueryInput& operator=(const QueryInput&) = default;
  void __clear();

  virtual ~QueryInput() throw() {}

  std::string type;
  std::vector<std::string> data;
  std::vector<std::string> tags;

  struct __isset {
    void __clear() {
      type = false;
      data = false;
      tags = false;
    }

    bool type = false;
    bool data = false;
    bool tags = false;
  } __isset;
  bool operator==(const QueryInput& rhs) const;

  bool operator < (const QueryInput& rhs) const {
    if (!(type == rhs.type)) {
      return type < rhs.type;
    }
    if (!(data == rhs.data)) {
      return data < rhs.data;
    }
    if (!(tags == rhs.tags)) {
      return tags < rhs.tags;
    }
    return false;
  }

  const std::string& get_type() const& {
    return type;
  }

  std::string get_type() && {
    return std::move(type);
  }

  template <typename T_QueryInput_type_struct_setter>
  std::string& set_type(T_QueryInput_type_struct_setter&& type_) {
    type = std::forward<T_QueryInput_type_struct_setter>(type_);
    __isset.type = true;
    return type;
  }
  const std::vector<std::string>& get_data() const&;
  std::vector<std::string> get_data() &&;
  template <typename T_QueryInput_data_struct_setter>
  std::vector<std::string>& set_data(T_QueryInput_data_struct_setter&& data_);
  const std::vector<std::string>& get_tags() const&;
  std::vector<std::string> get_tags() &&;
  template <typename T_QueryInput_tags_struct_setter>
  std::vector<std::string>& set_tags(T_QueryInput_tags_struct_setter&& tags_);

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(QueryInput& a, QueryInput& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::QueryInput>::clear( ::cpp2::QueryInput* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::QueryInput>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QueryInput>::write(Protocol* proto, const  ::cpp2::QueryInput* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QueryInput>::read(Protocol* proto,   ::cpp2::QueryInput* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QueryInput>::serializedSize(Protocol* proto, const  ::cpp2::QueryInput* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QueryInput>::serializedSizeZC(Protocol* proto, const  ::cpp2::QueryInput* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class QuerySpec : private boost::totally_ordered<QuerySpec> {
 public:

  QuerySpec() {}
  // FragileConstructor for use in initialization lists only

  QuerySpec(apache::thrift::FragileConstructor, std::string name__arg, std::vector< ::cpp2::QueryInput> content__arg) :
      name(std::move(name__arg)),
      content(std::move(content__arg)) {
    __isset.name = true;
    __isset.content = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  QuerySpec(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    QuerySpec(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
    __isset.name = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  QuerySpec(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    QuerySpec(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    content = arg.move();
    __isset.content = true;
  }

  QuerySpec(QuerySpec&&) = default;

  QuerySpec(const QuerySpec&) = default;

  QuerySpec& operator=(QuerySpec&&) = default;

  QuerySpec& operator=(const QuerySpec&) = default;
  void __clear();

  virtual ~QuerySpec() throw() {}

  std::string name;
  std::vector< ::cpp2::QueryInput> content;

  struct __isset {
    void __clear() {
      name = false;
      content = false;
    }

    bool name = false;
    bool content = false;
  } __isset;
  bool operator==(const QuerySpec& rhs) const;

  bool operator < (const QuerySpec& rhs) const {
    if (!(name == rhs.name)) {
      return name < rhs.name;
    }
    if (!(content == rhs.content)) {
      return content < rhs.content;
    }
    return false;
  }

  const std::string& get_name() const& {
    return name;
  }

  std::string get_name() && {
    return std::move(name);
  }

  template <typename T_QuerySpec_name_struct_setter>
  std::string& set_name(T_QuerySpec_name_struct_setter&& name_) {
    name = std::forward<T_QuerySpec_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }
  const std::vector< ::cpp2::QueryInput>& get_content() const&;
  std::vector< ::cpp2::QueryInput> get_content() &&;
  template <typename T_QuerySpec_content_struct_setter>
  std::vector< ::cpp2::QueryInput>& set_content(T_QuerySpec_content_struct_setter&& content_);

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(QuerySpec& a, QuerySpec& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::QuerySpec>::clear( ::cpp2::QuerySpec* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::QuerySpec>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QuerySpec>::write(Protocol* proto, const  ::cpp2::QuerySpec* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QuerySpec>::read(Protocol* proto,   ::cpp2::QuerySpec* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QuerySpec>::serializedSize(Protocol* proto, const  ::cpp2::QuerySpec* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::QuerySpec>::serializedSizeZC(Protocol* proto, const  ::cpp2::QuerySpec* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2