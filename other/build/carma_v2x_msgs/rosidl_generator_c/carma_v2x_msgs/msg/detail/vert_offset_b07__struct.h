// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_MIN'.
static const float carma_v2x_msgs__msg__VertOffsetB07__OFFSET_MIN = -6.3f;

/// Constant 'OFFSET_MAX'.
static const float carma_v2x_msgs__msg__VertOffsetB07__OFFSET_MAX = 6.3f;

// Struct defined in msg/VertOffsetB07 in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VertOffsetB07
{
  float offset;
  bool unavailable;
} carma_v2x_msgs__msg__VertOffsetB07;

// Struct for a sequence of carma_v2x_msgs__msg__VertOffsetB07.
typedef struct carma_v2x_msgs__msg__VertOffsetB07__Sequence
{
  carma_v2x_msgs__msg__VertOffsetB07 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VertOffsetB07__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_H_
