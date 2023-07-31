// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/OffsetB11.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const double carma_v2x_msgs__msg__OffsetB11__MIN = -10.23l;

/// Constant 'MAX'.
static const double carma_v2x_msgs__msg__OffsetB11__MAX = 10.23l;

// Struct defined in msg/OffsetB11 in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__OffsetB11
{
  float offset;
  bool unavailable;
} carma_v2x_msgs__msg__OffsetB11;

// Struct for a sequence of carma_v2x_msgs__msg__OffsetB11.
typedef struct carma_v2x_msgs__msg__OffsetB11__Sequence
{
  carma_v2x_msgs__msg__OffsetB11 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__OffsetB11__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_
