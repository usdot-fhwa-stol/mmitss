// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/ManeuverPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__STRUCT_H_

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
// Member 'maneuver_plan_id'
#include "rosidl_runtime_c/string.h"
// Member 'planning_start_time'
// Member 'planning_completion_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'maneuvers'
#include "carma_planning_msgs/msg/detail/maneuver__struct.h"

// Struct defined in msg/ManeuverPlan in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__ManeuverPlan
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String maneuver_plan_id;
  builtin_interfaces__msg__Time planning_start_time;
  builtin_interfaces__msg__Time planning_completion_time;
  carma_planning_msgs__msg__Maneuver__Sequence maneuvers;
} carma_planning_msgs__msg__ManeuverPlan;

// Struct for a sequence of carma_planning_msgs__msg__ManeuverPlan.
typedef struct carma_planning_msgs__msg__ManeuverPlan__Sequence
{
  carma_planning_msgs__msg__ManeuverPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__ManeuverPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__STRUCT_H_
