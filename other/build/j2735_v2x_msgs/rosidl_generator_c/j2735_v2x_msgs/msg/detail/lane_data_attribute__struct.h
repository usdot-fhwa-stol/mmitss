// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_

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
  j2735_v2x_msgs__msg__LaneDataAttribute__PATH_END_POINT_ANGLE = 0
};

/// Constant 'LANE_CROWN_POINT_CENTER'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_CENTER = 1
};

/// Constant 'LANE_CROWN_POINT_LEFT'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_LEFT = 2
};

/// Constant 'LANE_CROWN_POINT_RIGHT'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_CROWN_POINT_RIGHT = 3
};

/// Constant 'LANE_ANGLE'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__LANE_ANGLE = 4
};

/// Constant 'SPEED_LIMITS'.
enum
{
  j2735_v2x_msgs__msg__LaneDataAttribute__SPEED_LIMITS = 5
};

// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.h"

// Struct defined in msg/LaneDataAttribute in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__LaneDataAttribute
{
  uint8_t choice;
  int16_t path_end_point_angle;
  int8_t lane_crown_point_center;
  int8_t lane_crown_point_right;
  int8_t lane_crown_point_left;
  int16_t lane_angle;
  j2735_v2x_msgs__msg__SpeedLimitList speed_limits;
} j2735_v2x_msgs__msg__LaneDataAttribute;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneDataAttribute.
typedef struct j2735_v2x_msgs__msg__LaneDataAttribute__Sequence
{
  j2735_v2x_msgs__msg__LaneDataAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneDataAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
