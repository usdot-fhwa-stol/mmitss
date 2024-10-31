// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PlanType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  carma_v2x_msgs__msg__PlanType__UNKNOWN = 0
};

/// Constant 'CHANGE_LANE_LEFT'.
enum
{
  carma_v2x_msgs__msg__PlanType__CHANGE_LANE_LEFT = 1
};

/// Constant 'CHANGE_LANE_RIGHT'.
enum
{
  carma_v2x_msgs__msg__PlanType__CHANGE_LANE_RIGHT = 2
};

/// Constant 'JOIN_PLATOON_AT_REAR'.
enum
{
  carma_v2x_msgs__msg__PlanType__JOIN_PLATOON_AT_REAR = 3
};

/// Constant 'PLATOON_FOLLOWER_JOIN'.
enum
{
  carma_v2x_msgs__msg__PlanType__PLATOON_FOLLOWER_JOIN = 4
};

/// Constant 'JOIN_PLATOON_FROM_FRONT'.
enum
{
  carma_v2x_msgs__msg__PlanType__JOIN_PLATOON_FROM_FRONT = 5
};

/// Constant 'PLATOON_FRONT_JOIN'.
enum
{
  carma_v2x_msgs__msg__PlanType__PLATOON_FRONT_JOIN = 6
};

/// Constant 'CUT_IN_FROM_SIDE'.
enum
{
  carma_v2x_msgs__msg__PlanType__CUT_IN_FROM_SIDE = 7
};

/// Constant 'PLATOON_CUT_IN_JOIN'.
enum
{
  carma_v2x_msgs__msg__PlanType__PLATOON_CUT_IN_JOIN = 8
};

/// Constant 'STOP_CREATE_GAP'.
enum
{
  carma_v2x_msgs__msg__PlanType__STOP_CREATE_GAP = 9
};

/// Constant 'CUT_IN_FRONT_DONE'.
enum
{
  carma_v2x_msgs__msg__PlanType__CUT_IN_FRONT_DONE = 10
};

/// Constant 'CUT_IN_MID_OR_REAR_DONE'.
enum
{
  carma_v2x_msgs__msg__PlanType__CUT_IN_MID_OR_REAR_DONE = 11
};

/// Constant 'PLATOON_DEPARTURE'.
enum
{
  carma_v2x_msgs__msg__PlanType__PLATOON_DEPARTURE = 12
};

/// Constant 'DELETE_MEMBER'.
enum
{
  carma_v2x_msgs__msg__PlanType__DELETE_MEMBER = 13
};

// Struct defined in msg/PlanType in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PlanType
{
  uint8_t type;
} carma_v2x_msgs__msg__PlanType;

// Struct for a sequence of carma_v2x_msgs__msg__PlanType.
typedef struct carma_v2x_msgs__msg__PlanType__Sequence
{
  carma_v2x_msgs__msg__PlanType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PlanType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__STRUCT_H_
