// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PitchRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_PITCH_RATE'.
static const float carma_v2x_msgs__msg__PitchRate__MIN_PITCH_RATE = -327.67f;

/// Constant 'MAX_PITCH_RATE'.
static const float carma_v2x_msgs__msg__PitchRate__MAX_PITCH_RATE = 327.66f;

// Struct defined in msg/PitchRate in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PitchRate
{
  float pitch_rate;
  bool unavailable;
} carma_v2x_msgs__msg__PitchRate;

// Struct for a sequence of carma_v2x_msgs__msg__PitchRate.
typedef struct carma_v2x_msgs__msg__PitchRate__Sequence
{
  carma_v2x_msgs__msg__PitchRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PitchRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_H_
