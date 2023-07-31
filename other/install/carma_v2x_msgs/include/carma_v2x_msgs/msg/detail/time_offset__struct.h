// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TimeOffset.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const float carma_v2x_msgs__msg__TimeOffset__MIN = 1.0f;

/// Constant 'MAX'.
static const float carma_v2x_msgs__msg__TimeOffset__MAX = 655.34f;

// Struct defined in msg/TimeOffset in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TimeOffset
{
  float offset;
  bool unavailable;
} carma_v2x_msgs__msg__TimeOffset;

// Struct for a sequence of carma_v2x_msgs__msg__TimeOffset.
typedef struct carma_v2x_msgs__msg__TimeOffset__Sequence
{
  carma_v2x_msgs__msg__TimeOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TimeOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_
