// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/StopAndWaitManeuver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__functions.h"
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__struct.h"


// Include directives for member types
// Member `parameters`
#include "carma_planning_msgs/msg/maneuver_parameters.h"
// Member `parameters`
#include "carma_planning_msgs/msg/detail/maneuver_parameters__rosidl_typesupport_introspection_c.h"
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `starting_lane_id`
// Member `ending_lane_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__StopAndWaitManeuver__init(message_memory);
}

void StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__StopAndWaitManeuver__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_member_array[8] = {
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, start_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, start_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, end_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "starting_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, starting_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ending_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__StopAndWaitManeuver, ending_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "StopAndWaitManeuver",  // message name
  8,  // number of fields
  sizeof(carma_planning_msgs__msg__StopAndWaitManeuver),
  StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_member_array,  // message members
  StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_init_function,  // function to initialize message memory (memory has to be allocated)
  StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_type_support_handle = {
  0,
  &StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, StopAndWaitManeuver)() {
  StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, ManeuverParameters)();
  StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_type_support_handle.typesupport_identifier) {
    StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StopAndWaitManeuver__rosidl_typesupport_introspection_c__StopAndWaitManeuver_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
