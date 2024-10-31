// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/TrajectoryPlanPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__functions.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__struct.h"


// Include directives for member types
// Member `target_time`
#include "builtin_interfaces/msg/time.h"
// Member `target_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `lane_id`
// Member `controller_plugin_name`
// Member `planner_plugin_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__TrajectoryPlanPoint__init(message_memory);
}

void TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__TrajectoryPlanPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_member_array[7] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, target_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controller_plugin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, controller_plugin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner_plugin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlanPoint, planner_plugin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "TrajectoryPlanPoint",  // message name
  7,  // number of fields
  sizeof(carma_planning_msgs__msg__TrajectoryPlanPoint),
  TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_member_array,  // message members
  TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_type_support_handle = {
  0,
  &TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, TrajectoryPlanPoint)() {
  TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_type_support_handle.typesupport_identifier) {
    TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryPlanPoint__rosidl_typesupport_introspection_c__TrajectoryPlanPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
