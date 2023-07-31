// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/OffsetAxis.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SMALL'.
enum
{
  carma_v2x_msgs__msg__OffsetAxis__SMALL = 0
};

/// Constant 'LARGE'.
enum
{
  carma_v2x_msgs__msg__OffsetAxis__LARGE = 1
};

// Struct defined in msg/OffsetAxis in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__OffsetAxis
{
  uint8_t choice;
  float small;
  float large;
} carma_v2x_msgs__msg__OffsetAxis;

// Struct for a sequence of carma_v2x_msgs__msg__OffsetAxis.
typedef struct carma_v2x_msgs__msg__OffsetAxis__Sequence
{
  carma_v2x_msgs__msg__OffsetAxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__OffsetAxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__STRUCT_H_
