// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/TrajectoryPlanPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'lane_id'
// Member 'controller_plugin_name'
// Member 'planner_plugin_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrajectoryPlanPoint in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__TrajectoryPlanPoint
{
  double x;
  double y;
  double yaw;
  builtin_interfaces__msg__Time target_time;
  rosidl_runtime_c__String lane_id;
  rosidl_runtime_c__String controller_plugin_name;
  rosidl_runtime_c__String planner_plugin_name;
} carma_planning_msgs__msg__TrajectoryPlanPoint;

// Struct for a sequence of carma_planning_msgs__msg__TrajectoryPlanPoint.
typedef struct carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence
{
  carma_planning_msgs__msg__TrajectoryPlanPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__STRUCT_H_
