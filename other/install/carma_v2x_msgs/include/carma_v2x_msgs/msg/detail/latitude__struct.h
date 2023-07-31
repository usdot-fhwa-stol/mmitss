// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const float carma_v2x_msgs__msg__Latitude__MIN = -90.0f;

/// Constant 'MAX'.
static const float carma_v2x_msgs__msg__Latitude__MAX = 90.0f;

// Struct defined in msg/Latitude in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Latitude
{
  double latitude;
  bool unavailable;
} carma_v2x_msgs__msg__Latitude;

// Struct for a sequence of carma_v2x_msgs__msg__Latitude.
typedef struct carma_v2x_msgs__msg__Latitude__Sequence
{
  carma_v2x_msgs__msg__Latitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Latitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
