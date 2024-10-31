// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_RADIUS'.
static const float carma_v2x_msgs__msg__PathPrediction__MIN_RADIUS = -327.67f;

/// Constant 'MAX_RADIUS'.
static const float carma_v2x_msgs__msg__PathPrediction__MAX_RADIUS = 327.67f;

/// Constant 'MIN_CONFIDENCE'.
static const float carma_v2x_msgs__msg__PathPrediction__MIN_CONFIDENCE = 0.0f;

/// Constant 'MAX_CONFIDENCE'.
static const float carma_v2x_msgs__msg__PathPrediction__MAX_CONFIDENCE = 1.0f;

// Struct defined in msg/PathPrediction in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PathPrediction
{
  float radius_of_curvature;
  float confidence;
} carma_v2x_msgs__msg__PathPrediction;

// Struct for a sequence of carma_v2x_msgs__msg__PathPrediction.
typedef struct carma_v2x_msgs__msg__PathPrediction__Sequence
{
  carma_v2x_msgs__msg__PathPrediction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PathPrediction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_H_
