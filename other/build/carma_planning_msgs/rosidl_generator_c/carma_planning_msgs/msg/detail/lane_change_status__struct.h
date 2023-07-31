// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLAN_SENT'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__PLAN_SENT = 1
};

/// Constant 'REQUEST_RECEIVED'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__REQUEST_RECEIVED = 2
};

/// Constant 'REQUEST_ACCEPTED'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__REQUEST_ACCEPTED = 3
};

/// Constant 'REQUEST_REJECTED'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__REQUEST_REJECTED = 4
};

/// Constant 'RESPONSE_SENT'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__RESPONSE_SENT = 5
};

/// Constant 'ACCEPTANCE_RECEIVED'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__ACCEPTANCE_RECEIVED = 6
};

/// Constant 'REJECTION_RECEIVED'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__REJECTION_RECEIVED = 7
};

/// Constant 'OTHER_RECEIVED'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__OTHER_RECEIVED = 8
};

/// Constant 'PLANNING_SUCCESS'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__PLANNING_SUCCESS = 9
};

/// Constant 'TIMED_OUT'.
enum
{
  carma_planning_msgs__msg__LaneChangeStatus__TIMED_OUT = 10
};

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LaneChangeStatus in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__LaneChangeStatus
{
  uint8_t status;
  rosidl_runtime_c__String description;
} carma_planning_msgs__msg__LaneChangeStatus;

// Struct for a sequence of carma_planning_msgs__msg__LaneChangeStatus.
typedef struct carma_planning_msgs__msg__LaneChangeStatus__Sequence
{
  carma_planning_msgs__msg__LaneChangeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__LaneChangeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_H_
