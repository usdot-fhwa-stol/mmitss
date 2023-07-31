// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/OffsetB10.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_MIN'.
static const float carma_v2x_msgs__msg__OffsetB10__OFFSET_MIN = -5.11f;

/// Constant 'OFFSET_MAX'.
static const float carma_v2x_msgs__msg__OffsetB10__OFFSET_MAX = 5.11f;

// Struct defined in msg/OffsetB10 in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__OffsetB10
{
  float offset;
  bool unavailable;
} carma_v2x_msgs__msg__OffsetB10;

// Struct for a sequence of carma_v2x_msgs__msg__OffsetB10.
typedef struct carma_v2x_msgs__msg__OffsetB10__Sequence
{
  carma_v2x_msgs__msg__OffsetB10 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__OffsetB10__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_
