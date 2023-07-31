// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PATH_END_POINT_ANGLE'.
enum
{
  carma_v2x_msgs__msg__LaneDataAttribute__PATH_END_POINT_ANGLE = 0
};

/// Constant 'LANE_CROWN_POINT_CENTER'.
enum
{
  carma_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_CENTER = 1
};

/// Constant 'LANE_CROWN_POINT_LEFT'.
enum
{
  carma_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_LEFT = 2
};

/// Constant 'LANE_CROWN_POINT_RIGHT'.
enum
{
  carma_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_RIGHT = 3
};

/// Constant 'LANE_ANGLE'.
enum
{
  carma_v2x_msgs__msg__LaneDataAttribute__LANE_ANGLE = 4
};

/// Constant 'SPEED_LIMITS'.
enum
{
  carma_v2x_msgs__msg__LaneDataAttribute__SPEED_LIMITS = 5
};

// Include directives for member types
// Member 'speed_limits'
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.h"

// Struct defined in msg/LaneDataAttribute in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__LaneDataAttribute
{
  uint8_t choice;
  int16_t path_end_point_angle;
  float lane_crown_point_center;
  float lane_crown_point_right;
  float lane_crown_point_left;
  float lane_angle;
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence speed_limits;
} carma_v2x_msgs__msg__LaneDataAttribute;

// Struct for a sequence of carma_v2x_msgs__msg__LaneDataAttribute.
typedef struct carma_v2x_msgs__msg__LaneDataAttribute__Sequence
{
  carma_v2x_msgs__msg__LaneDataAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__LaneDataAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
