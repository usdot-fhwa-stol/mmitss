// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/maneuver__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/maneuver__functions.h"
#include "carma_planning_msgs/msg/detail/maneuver__struct.h"


// Include directives for member types
// Member `lane_following_maneuver`
#include "carma_planning_msgs/msg/lane_following_maneuver.h"
// Member `lane_following_maneuver`
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__rosidl_typesupport_introspection_c.h"
// Member `lane_change_maneuver`
#include "carma_planning_msgs/msg/lane_change_maneuver.h"
// Member `lane_change_maneuver`
#include "carma_planning_msgs/msg/detail/lane_change_maneuver__rosidl_typesupport_introspection_c.h"
// Member `intersection_transit_straight_maneuver`
#include "carma_planning_msgs/msg/intersection_transit_straight_maneuver.h"
// Member `intersection_transit_straight_maneuver`
#include "carma_planning_msgs/msg/detail/intersection_transit_straight_maneuver__rosidl_typesupport_introspection_c.h"
// Member `intersection_transit_left_turn_maneuver`
#include "carma_planning_msgs/msg/intersection_transit_left_turn_maneuver.h"
// Member `intersection_transit_left_turn_maneuver`
#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__rosidl_typesupport_introspection_c.h"
// Member `intersection_transit_right_turn_maneuver`
#include "carma_planning_msgs/msg/intersection_transit_right_turn_maneuver.h"
// Member `intersection_transit_right_turn_maneuver`
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__rosidl_typesupport_introspection_c.h"
// Member `stop_and_wait_maneuver`
#include "carma_planning_msgs/msg/stop_and_wait_maneuver.h"
// Member `stop_and_wait_maneuver`
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Maneuver__rosidl_typesupport_introspection_c__Maneuver_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__Maneuver__init(message_memory);
}

void Maneuver__rosidl_typesupport_introspection_c__Maneuver_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__Maneuver__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[7] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_following_maneuver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, lane_following_maneuver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_change_maneuver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, lane_change_maneuver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersection_transit_straight_maneuver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, intersection_transit_straight_maneuver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersection_transit_left_turn_maneuver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, intersection_transit_left_turn_maneuver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersection_transit_right_turn_maneuver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, intersection_transit_right_turn_maneuver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_and_wait_maneuver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__Maneuver, stop_and_wait_maneuver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "Maneuver",  // message name
  7,  // number of fields
  sizeof(carma_planning_msgs__msg__Maneuver),
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array,  // message members
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_init_function,  // function to initialize message memory (memory has to be allocated)
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle = {
  0,
  &Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, Maneuver)() {
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, LaneFollowingManeuver)();
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, LaneChangeManeuver)();
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, IntersectionTransitStraightManeuver)();
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, IntersectionTransitLeftTurnManeuver)();
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, IntersectionTransitRightTurnManeuver)();
  Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, StopAndWaitManeuver)();
  if (!Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle.typesupport_identifier) {
    Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
