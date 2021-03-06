// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rclcpp_1792/msg/detail/foo__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rclcpp_1792
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Foo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rclcpp_1792::msg::Foo(_init);
}

void Foo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rclcpp_1792::msg::Foo *>(message_memory);
  typed_message->~Foo();
}

size_t size_function__Foo__octetseq(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<unsigned char> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Foo__octetseq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<unsigned char> *>(untyped_member);
  return &member[index];
}

void * get_function__Foo__octetseq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<unsigned char> *>(untyped_member);
  return &member[index];
}

void resize_function__Foo__octetseq(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<unsigned char> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Foo_message_member_array[3] = {
  {
    "intnum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclcpp_1792::msg::Foo, intnum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octetseq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclcpp_1792::msg::Foo, octetseq),  // bytes offset in struct
    nullptr,  // default value
    size_function__Foo__octetseq,  // size() function pointer
    get_const_function__Foo__octetseq,  // get_const(index) function pointer
    get_function__Foo__octetseq,  // get(index) function pointer
    resize_function__Foo__octetseq  // resize(index) function pointer
  },
  {
    "floatnum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclcpp_1792::msg::Foo, floatnum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Foo_message_members = {
  "rclcpp_1792::msg",  // message namespace
  "Foo",  // message name
  3,  // number of fields
  sizeof(rclcpp_1792::msg::Foo),
  Foo_message_member_array,  // message members
  Foo_init_function,  // function to initialize message memory (memory has to be allocated)
  Foo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Foo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Foo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rclcpp_1792


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rclcpp_1792::msg::Foo>()
{
  return &::rclcpp_1792::msg::rosidl_typesupport_introspection_cpp::Foo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rclcpp_1792, msg, Foo)() {
  return &::rclcpp_1792::msg::rosidl_typesupport_introspection_cpp::Foo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
