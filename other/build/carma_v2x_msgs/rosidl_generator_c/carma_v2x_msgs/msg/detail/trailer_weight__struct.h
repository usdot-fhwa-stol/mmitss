// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrailerWeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRAILER_WEIGHT_MAX'.
static const double carma_v2x_msgs__msg__TrailerWeight__TRAILER_WEIGHT_MAX = 128510.0l;

// Struct defined in msg/TrailerWeight in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrailerWeight
{
  double trailer_weight;
} carma_v2x_msgs__msg__TrailerWeight;

// Struct for a sequence of carma_v2x_msgs__msg__TrailerWeight.
typedef struct carma_v2x_msgs__msg__TrailerWeight__Sequence
{
  carma_v2x_msgs__msg__TrailerWeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrailerWeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_H_
