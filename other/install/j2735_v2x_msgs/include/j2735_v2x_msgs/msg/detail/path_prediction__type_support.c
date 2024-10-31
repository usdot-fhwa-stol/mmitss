// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/path_prediction__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/path_prediction__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_prediction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__PathPrediction__init(message_memory);
}

void PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__PathPrediction__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_member_array[2] = {
  {
    "radius_of_curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathPrediction, radius_of_curvature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathPrediction, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "PathPrediction",  // message name
  2,  // number of fields
  sizeof(j2735_v2x_msgs__msg__PathPrediction),
  PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_member_array,  // message members
  PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_type_support_handle = {
  0,
  &PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PathPrediction)() {
  if (!PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_type_support_handle.typesupport_identifier) {
    PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPrediction__rosidl_typesupport_introspection_c__PathPrediction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
