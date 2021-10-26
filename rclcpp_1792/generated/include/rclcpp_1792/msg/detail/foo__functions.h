// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#ifndef RCLCPP_1792__MSG__DETAIL__FOO__FUNCTIONS_H_
#define RCLCPP_1792__MSG__DETAIL__FOO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rclcpp_1792/msg/rosidl_generator_c__visibility_control.h"

#include "rclcpp_1792/msg/detail/foo__struct.h"

/// Initialize msg/Foo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rclcpp_1792__msg__Foo
 * )) before or use
 * rclcpp_1792__msg__Foo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
bool
rclcpp_1792__msg__Foo__init(rclcpp_1792__msg__Foo * msg);

/// Finalize msg/Foo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
void
rclcpp_1792__msg__Foo__fini(rclcpp_1792__msg__Foo * msg);

/// Create msg/Foo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rclcpp_1792__msg__Foo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
rclcpp_1792__msg__Foo *
rclcpp_1792__msg__Foo__create();

/// Destroy msg/Foo message.
/**
 * It calls
 * rclcpp_1792__msg__Foo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
void
rclcpp_1792__msg__Foo__destroy(rclcpp_1792__msg__Foo * msg);


/// Initialize array of msg/Foo messages.
/**
 * It allocates the memory for the number of elements and calls
 * rclcpp_1792__msg__Foo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
bool
rclcpp_1792__msg__Foo__Sequence__init(rclcpp_1792__msg__Foo__Sequence * array, size_t size);

/// Finalize array of msg/Foo messages.
/**
 * It calls
 * rclcpp_1792__msg__Foo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
void
rclcpp_1792__msg__Foo__Sequence__fini(rclcpp_1792__msg__Foo__Sequence * array);

/// Create array of msg/Foo messages.
/**
 * It allocates the memory for the array and calls
 * rclcpp_1792__msg__Foo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
rclcpp_1792__msg__Foo__Sequence *
rclcpp_1792__msg__Foo__Sequence__create(size_t size);

/// Destroy array of msg/Foo messages.
/**
 * It calls
 * rclcpp_1792__msg__Foo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclcpp_1792
void
rclcpp_1792__msg__Foo__Sequence__destroy(rclcpp_1792__msg__Foo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RCLCPP_1792__MSG__DETAIL__FOO__FUNCTIONS_H_
