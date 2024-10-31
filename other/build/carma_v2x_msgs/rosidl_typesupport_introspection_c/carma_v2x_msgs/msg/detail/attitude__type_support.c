// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/attitude__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/attitude__functions.h"
#include "carma_v2x_msgs/msg/detail/attitude__struct.h"


// Include directives for member types
// Member `pitch`
#include "carma_v2x_msgs/msg/pitch_detected.h"
// Member `pitch`
#include "carma_v2x_msgs/msg/detail/pitch_detected__rosidl_typesupport_introspection_c.h"
// Member `roll`
#include "carma_v2x_msgs/msg/roll_detected.h"
// Member `roll`
#include "carma_v2x_msgs/msg/detail/roll_detected__rosidl_typesupport_introspection_c.h"
// Member `yaw`
#include "carma_v2x_msgs/msg/yaw_detected.h"
// Member `yaw`
#include "carma_v2x_msgs/msg/detail/yaw_detected__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Attitude__rosidl_typesupport_introspection_c__Attitude_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__Attitude__init(message_memory);
}

void Attitude__rosidl_typesupport_introspection_c__Attitude_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__Attitude__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array[3] = {
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Attitude, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Attitude, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Attitude, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Attitude__rosidl_typesupport_introspection_c__Attitude_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "Attitude",  // message name
  3,  // number of fields
  sizeof(carma_v2x_msgs__msg__Attitude),
  Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array,  // message members
  Attitude__rosidl_typesupport_introspection_c__Attitude_init_function,  // function to initialize message memory (memory has to be allocated)
  Attitude__rosidl_typesupport_introspection_c__Attitude_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle = {
  0,
  &Attitude__rosidl_typesupport_introspection_c__Attitude_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Attitude)() {
  Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PitchDetected)();
  Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RollDetected)();
  Attitude__rosidl_typesupport_introspection_c__Attitude_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, YawDetected)();
  if (!Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle.typesupport_identifier) {
    Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Attitude__rosidl_typesupport_introspection_c__Attitude_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
