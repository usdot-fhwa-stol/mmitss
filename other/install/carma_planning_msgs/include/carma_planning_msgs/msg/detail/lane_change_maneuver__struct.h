// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/LaneChangeManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_MANEUVER__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_MANEUVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "carma_planning_msgs/msg/detail/maneuver_parameters__struct.h"
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'starting_lane_id'
// Member 'ending_lane_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LaneChangeManeuver in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__LaneChangeManeuver
{
  carma_planning_msgs__msg__ManeuverParameters parameters;
  double start_dist;
  double start_speed;
  builtin_interfaces__msg__Time start_time;
  double end_dist;
  double end_speed;
  builtin_interfaces__msg__Time end_time;
  rosidl_runtime_c__String starting_lane_id;
  rosidl_runtime_c__String ending_lane_id;
} carma_planning_msgs__msg__LaneChangeManeuver;

// Struct for a sequence of carma_planning_msgs__msg__LaneChangeManeuver.
typedef struct carma_planning_msgs__msg__LaneChangeManeuver__Sequence
{
  carma_planning_msgs__msg__LaneChangeManeuver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__LaneChangeManeuver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_MANEUVER__STRUCT_H_
