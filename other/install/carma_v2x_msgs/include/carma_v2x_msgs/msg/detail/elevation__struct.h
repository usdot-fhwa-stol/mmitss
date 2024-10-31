// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const float carma_v2x_msgs__msg__Elevation__MIN = -409.6f;

/// Constant 'MAX'.
static const float carma_v2x_msgs__msg__Elevation__MAX = 6143.9f;

// Struct defined in msg/Elevation in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Elevation
{
  float elevation;
  bool unavailable;
} carma_v2x_msgs__msg__Elevation;

// Struct for a sequence of carma_v2x_msgs__msg__Elevation.
typedef struct carma_v2x_msgs__msg__Elevation__Sequence
{
  carma_v2x_msgs__msg__Elevation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Elevation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_
