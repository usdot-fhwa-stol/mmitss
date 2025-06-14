// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.h"


// Include directives for member types
// Member `heading`
#include "j2735_v2x_msgs/msg/heading_confidence.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading_confidence__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/speed_confidence.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/detail/speed_confidence__rosidl_typesupport_introspection_c.h"
// Member `throttle`
#include "j2735_v2x_msgs/msg/throttle_confidence.h"
// Member `throttle`
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(message_memory);
}

void SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_member_array[3] = {
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence, throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "SpeedandHeadingandThrottleConfidence",  // message name
  3,  // number of fields
  sizeof(j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence),
  SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_member_array,  // message members
  SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_type_support_handle = {
  0,
  &SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpeedandHeadingandThrottleConfidence)() {
  SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, HeadingConfidence)();
  SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpeedConfidence)();
  SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ThrottleConfidence)();
  if (!SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_type_support_handle.typesupport_identifier) {
    SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpeedandHeadingandThrottleConfidence__rosidl_typesupport_introspection_c__SpeedandHeadingandThrottleConfidence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
