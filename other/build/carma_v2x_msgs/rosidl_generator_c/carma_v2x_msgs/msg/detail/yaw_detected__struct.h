// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/YawDetected.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_YAW_DETECTED'.
static const float carma_v2x_msgs__msg__YawDetected__MIN_YAW_DETECTED = -180.0f;

/// Constant 'MAX_YAW_DETECTED'.
static const float carma_v2x_msgs__msg__YawDetected__MAX_YAW_DETECTED = 180.0f;

// Struct defined in msg/YawDetected in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__YawDetected
{
  float yaw_detected;
} carma_v2x_msgs__msg__YawDetected;

// Struct for a sequence of carma_v2x_msgs__msg__YawDetected.
typedef struct carma_v2x_msgs__msg__YawDetected__Sequence
{
  carma_v2x_msgs__msg__YawDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__YawDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_H_
