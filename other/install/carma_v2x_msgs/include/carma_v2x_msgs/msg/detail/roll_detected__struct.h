// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/RollDetected.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_ROLL_DETECTED'.
static const float carma_v2x_msgs__msg__RollDetected__MIN_ROLL_DETECTED = -180.0f;

/// Constant 'MAX_ROLL_DETECTED'.
static const float carma_v2x_msgs__msg__RollDetected__MAX_ROLL_DETECTED = 180.0f;

// Struct defined in msg/RollDetected in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__RollDetected
{
  float roll_detected;
} carma_v2x_msgs__msg__RollDetected;

// Struct for a sequence of carma_v2x_msgs__msg__RollDetected.
typedef struct carma_v2x_msgs__msg__RollDetected__Sequence
{
  carma_v2x_msgs__msg__RollDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__RollDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__STRUCT_H_
