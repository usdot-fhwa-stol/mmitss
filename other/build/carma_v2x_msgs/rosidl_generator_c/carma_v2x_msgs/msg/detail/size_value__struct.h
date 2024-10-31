// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/SizeValue.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_SIZE_VALUE'.
static const float carma_v2x_msgs__msg__SizeValue__MIN_SIZE_VALUE = 0.0f;

/// Constant 'MAX_SIZE_VALUE'.
static const float carma_v2x_msgs__msg__SizeValue__MAX_SIZE_VALUE = 102.3f;

// Struct defined in msg/SizeValue in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__SizeValue
{
  float size_value;
} carma_v2x_msgs__msg__SizeValue;

// Struct for a sequence of carma_v2x_msgs__msg__SizeValue.
typedef struct carma_v2x_msgs__msg__SizeValue__Sequence
{
  carma_v2x_msgs__msg__SizeValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__SizeValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_H_
