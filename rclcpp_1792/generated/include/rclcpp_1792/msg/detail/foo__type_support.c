// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rclcpp_1792/msg/detail/foo__rosidl_typesupport_introspection_c.h"
#include "rclcpp_1792/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rclcpp_1792/msg/detail/foo__functions.h"
#include "rclcpp_1792/msg/detail/foo__struct.h"


// Include directives for member types
// Member `octetseq`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rclcpp_1792__msg__Foo__init(message_memory);
}

void rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_fini_function(void * message_memory)
{
  rclcpp_1792__msg__Foo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_member_array[3] = {
  {
    "intnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclcpp_1792__msg__Foo, intnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octetseq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclcpp_1792__msg__Foo, octetseq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "floatnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclcpp_1792__msg__Foo, floatnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_members = {
  "rclcpp_1792__msg",  // message namespace
  "Foo",  // message name
  3,  // number of fields
  sizeof(rclcpp_1792__msg__Foo),
  rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_member_array,  // message members
  rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_init_function,  // function to initialize message memory (memory has to be allocated)
  rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_type_support_handle = {
  0,
  &rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rclcpp_1792
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclcpp_1792, msg, Foo)() {
  if (!rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_type_support_handle.typesupport_identifier) {
    rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rclcpp_1792__msg__Foo__rosidl_typesupport_introspection_c__Foo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
