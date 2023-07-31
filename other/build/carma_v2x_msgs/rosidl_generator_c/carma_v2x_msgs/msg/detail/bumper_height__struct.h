// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/BumperHeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BUMPER_HEIGHT_MIN'.
static const float carma_v2x_msgs__msg__BumperHeight__BUMPER_HEIGHT_MIN = 0.0f;

/// Constant 'BUMPER_HEIGHT_MAX'.
static const float carma_v2x_msgs__msg__BumperHeight__BUMPER_HEIGHT_MAX = 1.27f;

// Struct defined in msg/BumperHeight in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__BumperHeight
{
  float bumper_height;
} carma_v2x_msgs__msg__BumperHeight;

// Struct for a sequence of carma_v2x_msgs__msg__BumperHeight.
typedef struct carma_v2x_msgs__msg__BumperHeight__Sequence
{
  carma_v2x_msgs__msg__BumperHeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__BumperHeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__STRUCT_H_
