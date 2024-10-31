// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__STRUCT_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory_plan'
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.h"
// Member 'curvatures'
// Member 'speed_limits'
// Member 'velocity_profile'
// Member 'tangent_headings'
// Member 'relative_downtrack'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'starting_state'
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.h"

// Struct defined in msg/TrajectoryCurvatureSpeeds in the package carma_debug_ros2_msgs.
typedef struct carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds
{
  carma_planning_msgs__msg__TrajectoryPlan trajectory_plan;
  rosidl_runtime_c__double__Sequence curvatures;
  rosidl_runtime_c__double__Sequence speed_limits;
  rosidl_runtime_c__double__Sequence velocity_profile;
  rosidl_runtime_c__double__Sequence tangent_headings;
  rosidl_runtime_c__double__Sequence relative_downtrack;
  double lat_accel_limit;
  double lon_accel_limit;
  carma_planning_msgs__msg__VehicleState starting_state;
} carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds;

// Struct for a sequence of carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds.
typedef struct carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence
{
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__STRUCT_H_
