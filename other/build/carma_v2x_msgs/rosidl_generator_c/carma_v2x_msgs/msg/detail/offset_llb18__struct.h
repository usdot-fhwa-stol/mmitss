// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/OffsetLLB18.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const double carma_v2x_msgs__msg__OffsetLLB18__MIN = -0.0131071l;

/// Constant 'MAX'.
static const double carma_v2x_msgs__msg__OffsetLLB18__MAX = 0.0131071l;

// Struct defined in msg/OffsetLLB18 in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__OffsetLLB18
{
  double offset;
  bool unavailable;
} carma_v2x_msgs__msg__OffsetLLB18;

// Struct for a sequence of carma_v2x_msgs__msg__OffsetLLB18.
typedef struct carma_v2x_msgs__msg__OffsetLLB18__Sequence
{
  carma_v2x_msgs__msg__OffsetLLB18 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__OffsetLLB18__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__STRUCT_H_
