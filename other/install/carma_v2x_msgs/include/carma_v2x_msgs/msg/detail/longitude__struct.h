// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const float carma_v2x_msgs__msg__Longitude__MIN = -179.9999999f;

/// Constant 'MAX'.
static const float carma_v2x_msgs__msg__Longitude__MAX = 180.0f;

// Struct defined in msg/Longitude in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Longitude
{
  double longitude;
  bool unavailable;
} carma_v2x_msgs__msg__Longitude;

// Struct for a sequence of carma_v2x_msgs__msg__Longitude.
typedef struct carma_v2x_msgs__msg__Longitude__Sequence
{
  carma_v2x_msgs__msg__Longitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Longitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_
