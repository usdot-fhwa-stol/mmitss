// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__functions.h"
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__UpcomingLaneChangeStatus__init(message_memory);
}

void UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__UpcomingLaneChangeStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_member_array[2] = {
  {
    "downtrack_until_lanechange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__UpcomingLaneChangeStatus, downtrack_until_lanechange),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__UpcomingLaneChangeStatus, lane_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "UpcomingLaneChangeStatus",  // message name
  2,  // number of fields
  sizeof(carma_planning_msgs__msg__UpcomingLaneChangeStatus),
  UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_member_array,  // message members
  UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_type_support_handle = {
  0,
  &UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, UpcomingLaneChangeStatus)() {
  if (!UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_type_support_handle.typesupport_identifier) {
    UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UpcomingLaneChangeStatus__rosidl_typesupport_introspection_c__UpcomingLaneChangeStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
