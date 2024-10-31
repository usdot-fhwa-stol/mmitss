// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/byte_array__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/byte_array__functions.h"
#include "j2735_v2x_msgs/msg/detail/byte_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `content`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ByteArray__rosidl_typesupport_introspection_c__ByteArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__ByteArray__init(message_memory);
}

void ByteArray__rosidl_typesupport_introspection_c__ByteArray_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__ByteArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ByteArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ByteArray, message_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ByteArray, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "ByteArray",  // message name
  3,  // number of fields
  sizeof(j2735_v2x_msgs__msg__ByteArray),
  ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_member_array,  // message members
  ByteArray__rosidl_typesupport_introspection_c__ByteArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ByteArray__rosidl_typesupport_introspection_c__ByteArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_type_support_handle = {
  0,
  &ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ByteArray)() {
  ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_type_support_handle.typesupport_identifier) {
    ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ByteArray__rosidl_typesupport_introspection_c__ByteArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
