// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#ifndef RCLCPP_1792__MSG__DETAIL__FOO__STRUCT_H_
#define RCLCPP_1792__MSG__DETAIL__FOO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'octetseq'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Foo in the package rclcpp_1792.
typedef struct rclcpp_1792__msg__Foo
{
  int64_t intnum;
  rosidl_runtime_c__octet__Sequence octetseq;
  double floatnum;
} rclcpp_1792__msg__Foo;

// Struct for a sequence of rclcpp_1792__msg__Foo.
typedef struct rclcpp_1792__msg__Foo__Sequence
{
  rclcpp_1792__msg__Foo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclcpp_1792__msg__Foo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLCPP_1792__MSG__DETAIL__FOO__STRUCT_H_
