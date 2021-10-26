// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#ifndef RCLCPP_1792__MSG__DETAIL__FOO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RCLCPP_1792__MSG__DETAIL__FOO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rclcpp_1792/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rclcpp_1792/msg/detail/foo__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rclcpp_1792
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclcpp_1792
cdr_serialize(
  const rclcpp_1792::msg::Foo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclcpp_1792
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rclcpp_1792::msg::Foo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclcpp_1792
get_serialized_size(
  const rclcpp_1792::msg::Foo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclcpp_1792
max_serialized_size_Foo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rclcpp_1792

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclcpp_1792
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rclcpp_1792, msg, Foo)();

#ifdef __cplusplus
}
#endif

#endif  // RCLCPP_1792__MSG__DETAIL__FOO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
