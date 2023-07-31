// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  carma_planning_msgs__msg__UpcomingLaneChangeStatus__NONE = 0
};

/// Constant 'LEFT'.
enum
{
  carma_planning_msgs__msg__UpcomingLaneChangeStatus__LEFT = 1
};

/// Constant 'RIGHT'.
enum
{
  carma_planning_msgs__msg__UpcomingLaneChangeStatus__RIGHT = 2
};

// Struct defined in msg/UpcomingLaneChangeStatus in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__UpcomingLaneChangeStatus
{
  double downtrack_until_lanechange;
  uint8_t lane_change;
} carma_planning_msgs__msg__UpcomingLaneChangeStatus;

// Struct for a sequence of carma_planning_msgs__msg__UpcomingLaneChangeStatus.
typedef struct carma_planning_msgs__msg__UpcomingLaneChangeStatus__Sequence
{
  carma_planning_msgs__msg__UpcomingLaneChangeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__UpcomingLaneChangeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__STRUCT_H_
