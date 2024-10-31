// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPEED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
static const float carma_v2x_msgs__msg__Speed__MIN = 0.0f;

/// Constant 'MAX'.
static const float carma_v2x_msgs__msg__Speed__MAX = 163.8f;

// Struct defined in msg/Speed in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Speed
{
  float speed;
  bool unavailable;
} carma_v2x_msgs__msg__Speed;

// Struct for a sequence of carma_v2x_msgs__msg__Speed.
typedef struct carma_v2x_msgs__msg__Speed__Sequence
{
  carma_v2x_msgs__msg__Speed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Speed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPEED__STRUCT_H_
