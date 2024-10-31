// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISTANCE_MIN'.
static const float carma_v2x_msgs__msg__ObstacleDistance__DISTANCE_MIN = 0.0f;

/// Constant 'DISTANCE_MAX'.
static const float carma_v2x_msgs__msg__ObstacleDistance__DISTANCE_MAX = 32767.0f;

// Struct defined in msg/ObstacleDistance in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__ObstacleDistance
{
  float distance;
} carma_v2x_msgs__msg__ObstacleDistance;

// Struct for a sequence of carma_v2x_msgs__msg__ObstacleDistance.
typedef struct carma_v2x_msgs__msg__ObstacleDistance__Sequence
{
  carma_v2x_msgs__msg__ObstacleDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__ObstacleDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_
