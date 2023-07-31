// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCURACY_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__PositionalAccuracy__ACCURACY_AVAILABLE = 1
};

/// Constant 'ACCURACY_ORIENTATION_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_AVAILABLE = 2
};

/// Constant 'ACCURACY_MAX'.
static const float carma_v2x_msgs__msg__PositionalAccuracy__ACCURACY_MAX = 12.7f;

/// Constant 'ACCURACY_MIN'.
static const float carma_v2x_msgs__msg__PositionalAccuracy__ACCURACY_MIN = 0.0f;

/// Constant 'ACCURACY_ORIENTATION_MAX'.
static const double carma_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_MAX = 359.9945078786l;

/// Constant 'ACCURACY_ORIENTATION_MIN'.
static const double carma_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_MIN = 0.0l;

// Struct defined in msg/PositionalAccuracy in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PositionalAccuracy
{
  uint16_t presence_vector;
  float semi_major;
  float semi_minor;
  double orientation;
} carma_v2x_msgs__msg__PositionalAccuracy;

// Struct for a sequence of carma_v2x_msgs__msg__PositionalAccuracy.
typedef struct carma_v2x_msgs__msg__PositionalAccuracy__Sequence
{
  carma_v2x_msgs__msg__PositionalAccuracy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PositionalAccuracy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
