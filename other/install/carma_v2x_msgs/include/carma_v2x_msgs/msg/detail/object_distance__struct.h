// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_OBJECT_DISTANCE'.
static const float carma_v2x_msgs__msg__ObjectDistance__MIN_OBJECT_DISTANCE = -3276.7f;

/// Constant 'MAX_OBJECT_DISTANCE'.
static const float carma_v2x_msgs__msg__ObjectDistance__MAX_OBJECT_DISTANCE = 3276.7f;

// Struct defined in msg/ObjectDistance in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__ObjectDistance
{
  float object_distance;
} carma_v2x_msgs__msg__ObjectDistance;

// Struct for a sequence of carma_v2x_msgs__msg__ObjectDistance.
typedef struct carma_v2x_msgs__msg__ObjectDistance__Sequence
{
  carma_v2x_msgs__msg__ObjectDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__ObjectDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
