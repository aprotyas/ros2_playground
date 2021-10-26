// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice
#include "rclcpp_1792/msg/detail/foo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `octetseq`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rclcpp_1792__msg__Foo__init(rclcpp_1792__msg__Foo * msg)
{
  if (!msg) {
    return false;
  }
  // intnum
  // octetseq
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->octetseq, 0)) {
    rclcpp_1792__msg__Foo__fini(msg);
    return false;
  }
  // floatnum
  return true;
}

void
rclcpp_1792__msg__Foo__fini(rclcpp_1792__msg__Foo * msg)
{
  if (!msg) {
    return;
  }
  // intnum
  // octetseq
  rosidl_runtime_c__octet__Sequence__fini(&msg->octetseq);
  // floatnum
}

rclcpp_1792__msg__Foo *
rclcpp_1792__msg__Foo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclcpp_1792__msg__Foo * msg = (rclcpp_1792__msg__Foo *)allocator.allocate(sizeof(rclcpp_1792__msg__Foo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rclcpp_1792__msg__Foo));
  bool success = rclcpp_1792__msg__Foo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rclcpp_1792__msg__Foo__destroy(rclcpp_1792__msg__Foo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rclcpp_1792__msg__Foo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rclcpp_1792__msg__Foo__Sequence__init(rclcpp_1792__msg__Foo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclcpp_1792__msg__Foo * data = NULL;

  if (size) {
    data = (rclcpp_1792__msg__Foo *)allocator.zero_allocate(size, sizeof(rclcpp_1792__msg__Foo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rclcpp_1792__msg__Foo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rclcpp_1792__msg__Foo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rclcpp_1792__msg__Foo__Sequence__fini(rclcpp_1792__msg__Foo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rclcpp_1792__msg__Foo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rclcpp_1792__msg__Foo__Sequence *
rclcpp_1792__msg__Foo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclcpp_1792__msg__Foo__Sequence * array = (rclcpp_1792__msg__Foo__Sequence *)allocator.allocate(sizeof(rclcpp_1792__msg__Foo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rclcpp_1792__msg__Foo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rclcpp_1792__msg__Foo__Sequence__destroy(rclcpp_1792__msg__Foo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rclcpp_1792__msg__Foo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
