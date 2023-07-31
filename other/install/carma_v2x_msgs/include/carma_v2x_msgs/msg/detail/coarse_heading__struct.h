// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/CoarseHeading.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COARSE_HEADING__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__COARSE_HEADING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const float carma_v2x_msgs__msg__CoarseHeading__MIN = 0.0f;

/// Constant 'MAX'.
static const float carma_v2x_msgs__msg__CoarseHeading__MAX = 358.5f;

// Struct defined in msg/CoarseHeading in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__CoarseHeading
{
  float heading;
  bool unavailable;
} carma_v2x_msgs__msg__CoarseHeading;

// Struct for a sequence of carma_v2x_msgs__msg__CoarseHeading.
typedef struct carma_v2x_msgs__msg__CoarseHeading__Sequence
{
  carma_v2x_msgs__msg__CoarseHeading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__CoarseHeading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COARSE_HEADING__STRUCT_H_
