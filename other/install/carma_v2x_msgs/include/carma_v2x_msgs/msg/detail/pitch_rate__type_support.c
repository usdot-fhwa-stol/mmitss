// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/PitchRate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/pitch_rate__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/pitch_rate__functions.h"
#include "carma_v2x_msgs/msg/detail/pitch_rate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PitchRate__rosidl_typesupport_introspection_c__PitchRate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__PitchRate__init(message_memory);
}

void PitchRate__rosidl_typesupport_introspection_c__PitchRate_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__PitchRate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_member_array[2] = {
  {
    "pitch_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__PitchRate, pitch_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unavailable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__PitchRate, unavailable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "PitchRate",  // message name
  2,  // number of fields
  sizeof(carma_v2x_msgs__msg__PitchRate),
  PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_member_array,  // message members
  PitchRate__rosidl_typesupport_introspection_c__PitchRate_init_function,  // function to initialize message memory (memory has to be allocated)
  PitchRate__rosidl_typesupport_introspection_c__PitchRate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_type_support_handle = {
  0,
  &PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PitchRate)() {
  if (!PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_type_support_handle.typesupport_identifier) {
    PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PitchRate__rosidl_typesupport_introspection_c__PitchRate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
