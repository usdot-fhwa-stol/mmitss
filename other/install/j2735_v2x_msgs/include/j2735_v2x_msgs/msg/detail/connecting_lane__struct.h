// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__ConnectingLane__LANE_UNAVAILABLE = 0
};

// Include directives for member types
// Member 'maneuver'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.h"

// Struct defined in msg/ConnectingLane in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ConnectingLane
{
  uint16_t lane;
  j2735_v2x_msgs__msg__AllowedManeuvers maneuver;
  bool maneuver_exists;
} j2735_v2x_msgs__msg__ConnectingLane;

// Struct for a sequence of j2735_v2x_msgs__msg__ConnectingLane.
typedef struct j2735_v2x_msgs__msg__ConnectingLane__Sequence
{
  j2735_v2x_msgs__msg__ConnectingLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ConnectingLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_
