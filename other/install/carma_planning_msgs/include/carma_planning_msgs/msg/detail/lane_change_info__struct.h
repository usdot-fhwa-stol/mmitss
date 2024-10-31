// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/LaneChangeInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOLEFT'.
enum
{
  carma_planning_msgs__msg__LaneChangeInfo__TOLEFT = 0
};

/// Constant 'TORIGHT'.
enum
{
  carma_planning_msgs__msg__LaneChangeInfo__TORIGHT = 1
};

// Struct defined in msg/LaneChangeInfo in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__LaneChangeInfo
{
  uint8_t direction;
  float distance_to_lanechange;
} carma_planning_msgs__msg__LaneChangeInfo;

// Struct for a sequence of carma_planning_msgs__msg__LaneChangeInfo.
typedef struct carma_planning_msgs__msg__LaneChangeInfo__Sequence
{
  carma_planning_msgs__msg__LaneChangeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__LaneChangeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__STRUCT_H_
