// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/RollRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_ROLL_RATE'.
static const float carma_v2x_msgs__msg__RollRate__MIN_ROLL_RATE = -327.67f;

/// Constant 'MAX_ROLL_RATE'.
static const float carma_v2x_msgs__msg__RollRate__MAX_ROLL_RATE = 327.66f;

// Struct defined in msg/RollRate in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__RollRate
{
  float roll_rate;
  bool unavailable;
} carma_v2x_msgs__msg__RollRate;

// Struct for a sequence of carma_v2x_msgs__msg__RollRate.
typedef struct carma_v2x_msgs__msg__RollRate__Sequence
{
  carma_v2x_msgs__msg__RollRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__RollRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_H_
