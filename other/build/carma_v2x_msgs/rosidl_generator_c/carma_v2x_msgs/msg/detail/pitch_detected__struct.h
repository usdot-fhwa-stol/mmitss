// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PitchDetected.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PITCH_DETECTED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PITCH_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_PITCH_DETECTED'.
static const float carma_v2x_msgs__msg__PitchDetected__MIN_PITCH_DETECTED = -90.0f;

/// Constant 'MAX_PITCH_DETECTED'.
static const float carma_v2x_msgs__msg__PitchDetected__MAX_PITCH_DETECTED = 90.0f;

// Struct defined in msg/PitchDetected in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PitchDetected
{
  float pitch_detected;
} carma_v2x_msgs__msg__PitchDetected;

// Struct for a sequence of carma_v2x_msgs__msg__PitchDetected.
typedef struct carma_v2x_msgs__msg__PitchDetected__Sequence
{
  carma_v2x_msgs__msg__PitchDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PitchDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PITCH_DETECTED__STRUCT_H_
