// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ANGLE_MAX'.
static const float carma_v2x_msgs__msg__Angle__ANGLE_MAX = 359.9875f;

/// Constant 'ANGLE_MIN'.
static const float carma_v2x_msgs__msg__Angle__ANGLE_MIN = 0.0f;

// Struct defined in msg/Angle in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Angle
{
  float angle;
  bool unavailable;
} carma_v2x_msgs__msg__Angle;

// Struct for a sequence of carma_v2x_msgs__msg__Angle.
typedef struct carma_v2x_msgs__msg__Angle__Sequence
{
  carma_v2x_msgs__msg__Angle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Angle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_
