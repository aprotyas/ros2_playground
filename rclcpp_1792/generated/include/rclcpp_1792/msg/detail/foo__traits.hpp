// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#ifndef RCLCPP_1792__MSG__DETAIL__FOO__TRAITS_HPP_
#define RCLCPP_1792__MSG__DETAIL__FOO__TRAITS_HPP_

#include "rclcpp_1792/msg/detail/foo__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rclcpp_1792::msg::Foo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: intnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intnum: ";
    value_to_yaml(msg.intnum, out);
    out << "\n";
  }

  // member: octetseq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.octetseq.size() == 0) {
      out << "octetseq: []\n";
    } else {
      out << "octetseq:\n";
      for (auto item : msg.octetseq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: floatnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "floatnum: ";
    value_to_yaml(msg.floatnum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rclcpp_1792::msg::Foo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rclcpp_1792::msg::Foo>()
{
  return "rclcpp_1792::msg::Foo";
}

template<>
inline const char * name<rclcpp_1792::msg::Foo>()
{
  return "rclcpp_1792/msg/Foo";
}

template<>
struct has_fixed_size<rclcpp_1792::msg::Foo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rclcpp_1792::msg::Foo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rclcpp_1792::msg::Foo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCLCPP_1792__MSG__DETAIL__FOO__TRAITS_HPP_
