// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'trajectory_id'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory_points'
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__struct.h"

// Struct defined in msg/TrajectoryPlan in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__TrajectoryPlan
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String trajectory_id;
  double initial_longitudinal_velocity;
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence trajectory_points;
} carma_planning_msgs__msg__TrajectoryPlan;

// Struct for a sequence of carma_planning_msgs__msg__TrajectoryPlan.
typedef struct carma_planning_msgs__msg__TrajectoryPlan__Sequence
{
  carma_planning_msgs__msg__TrajectoryPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__TrajectoryPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_H_
