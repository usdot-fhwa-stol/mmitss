// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/velocity__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/velocity__functions.h"
#include "j2735_v2x_msgs/msg/detail/velocity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Velocity__rosidl_typesupport_introspection_c__Velocity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__Velocity__init(message_memory);
}

void Velocity__rosidl_typesupport_introspection_c__Velocity_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__Velocity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Velocity__rosidl_typesupport_introspection_c__Velocity_message_member_array[1] = {
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__Velocity, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Velocity__rosidl_typesupport_introspection_c__Velocity_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "Velocity",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__Velocity),
  Velocity__rosidl_typesupport_introspection_c__Velocity_message_member_array,  // message members
  Velocity__rosidl_typesupport_introspection_c__Velocity_init_function,  // function to initialize message memory (memory has to be allocated)
  Velocity__rosidl_typesupport_introspection_c__Velocity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle = {
  0,
  &Velocity__rosidl_typesupport_introspection_c__Velocity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Velocity)() {
  if (!Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle.typesupport_identifier) {
    Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Velocity__rosidl_typesupport_introspection_c__Velocity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
