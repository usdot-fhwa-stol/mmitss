// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_MIN'.
static const float carma_v2x_msgs__msg__GrossSpeed__SPEED_MIN = 0.0f;

/// Constant 'SPEED_MAX'.
static const float carma_v2x_msgs__msg__GrossSpeed__SPEED_MAX = 30.0f;

// Struct defined in msg/GrossSpeed in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__GrossSpeed
{
  float speed;
  bool unavailable;
} carma_v2x_msgs__msg__GrossSpeed;

// Struct for a sequence of carma_v2x_msgs__msg__GrossSpeed.
typedef struct carma_v2x_msgs__msg__GrossSpeed__Sequence
{
  carma_v2x_msgs__msg__GrossSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__GrossSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_H_
