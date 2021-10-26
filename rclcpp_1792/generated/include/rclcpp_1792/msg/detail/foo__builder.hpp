// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#ifndef RCLCPP_1792__MSG__DETAIL__FOO__BUILDER_HPP_
#define RCLCPP_1792__MSG__DETAIL__FOO__BUILDER_HPP_

#include "rclcpp_1792/msg/detail/foo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rclcpp_1792
{

namespace msg
{

namespace builder
{

class Init_Foo_floatnum
{
public:
  explicit Init_Foo_floatnum(::rclcpp_1792::msg::Foo & msg)
  : msg_(msg)
  {}
  ::rclcpp_1792::msg::Foo floatnum(::rclcpp_1792::msg::Foo::_floatnum_type arg)
  {
    msg_.floatnum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclcpp_1792::msg::Foo msg_;
};

class Init_Foo_octetseq
{
public:
  explicit Init_Foo_octetseq(::rclcpp_1792::msg::Foo & msg)
  : msg_(msg)
  {}
  Init_Foo_floatnum octetseq(::rclcpp_1792::msg::Foo::_octetseq_type arg)
  {
    msg_.octetseq = std::move(arg);
    return Init_Foo_floatnum(msg_);
  }

private:
  ::rclcpp_1792::msg::Foo msg_;
};

class Init_Foo_intnum
{
public:
  Init_Foo_intnum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Foo_octetseq intnum(::rclcpp_1792::msg::Foo::_intnum_type arg)
  {
    msg_.intnum = std::move(arg);
    return Init_Foo_octetseq(msg_);
  }

private:
  ::rclcpp_1792::msg::Foo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclcpp_1792::msg::Foo>()
{
  return rclcpp_1792::msg::builder::Init_Foo_intnum();
}

}  // namespace rclcpp_1792

#endif  // RCLCPP_1792__MSG__DETAIL__FOO__BUILDER_HPP_
