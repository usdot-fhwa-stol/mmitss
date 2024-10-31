// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COEFFICIENT_MIN'.
static const float carma_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_MIN = 0.0f;

/// Constant 'COEFFICIENT_MAX'.
static const float carma_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_MAX = 1.0f;

// Struct defined in msg/CoefficientOfFriction in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__CoefficientOfFriction
{
  float coefficient;
  bool unavailable;
} carma_v2x_msgs__msg__CoefficientOfFriction;

// Struct for a sequence of carma_v2x_msgs__msg__CoefficientOfFriction.
typedef struct carma_v2x_msgs__msg__CoefficientOfFriction__Sequence
{
  carma_v2x_msgs__msg__CoefficientOfFriction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__CoefficientOfFriction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_
