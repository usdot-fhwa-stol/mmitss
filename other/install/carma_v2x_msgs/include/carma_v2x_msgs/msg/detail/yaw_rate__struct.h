// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_YAW_RATE'.
static const float carma_v2x_msgs__msg__YawRate__MIN_YAW_RATE = -327.67f;

/// Constant 'MAX_YAW_RATE'.
static const float carma_v2x_msgs__msg__YawRate__MAX_YAW_RATE = 327.67f;

// Struct defined in msg/YawRate in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__YawRate
{
  float yaw_rate;
} carma_v2x_msgs__msg__YawRate;

// Struct for a sequence of carma_v2x_msgs__msg__YawRate.
typedef struct carma_v2x_msgs__msg__YawRate__Sequence
{
  carma_v2x_msgs__msg__YawRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__YawRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
