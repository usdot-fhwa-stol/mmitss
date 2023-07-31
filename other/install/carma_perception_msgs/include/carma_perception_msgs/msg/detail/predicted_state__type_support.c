// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/PredictedState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/predicted_state__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/predicted_state__functions.h"
#include "carma_perception_msgs/msg/detail/predicted_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `predicted_position`
#include "geometry_msgs/msg/pose.h"
// Member `predicted_position`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `predicted_velocity`
#include "geometry_msgs/msg/twist.h"
// Member `predicted_velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PredictedState__rosidl_typesupport_introspection_c__PredictedState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__PredictedState__init(message_memory);
}

void PredictedState__rosidl_typesupport_introspection_c__PredictedState_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__PredictedState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__PredictedState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__PredictedState, predicted_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_position_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__PredictedState, predicted_position_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__PredictedState, predicted_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_velocity_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__PredictedState, predicted_velocity_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "PredictedState",  // message name
  5,  // number of fields
  sizeof(carma_perception_msgs__msg__PredictedState),
  PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_member_array,  // message members
  PredictedState__rosidl_typesupport_introspection_c__PredictedState_init_function,  // function to initialize message memory (memory has to be allocated)
  PredictedState__rosidl_typesupport_introspection_c__PredictedState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_type_support_handle = {
  0,
  &PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, PredictedState)() {
  PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_type_support_handle.typesupport_identifier) {
    PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PredictedState__rosidl_typesupport_introspection_c__PredictedState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
