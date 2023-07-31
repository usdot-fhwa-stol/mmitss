// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_HEIGHT'.
enum
{
  carma_v2x_msgs__msg__ObstacleSize__HAS_HEIGHT = 1
};

// Include directives for member types
// Member 'width'
// Member 'length'
// Member 'height'
#include "carma_v2x_msgs/msg/detail/size_value__struct.h"

// Struct defined in msg/ObstacleSize in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__ObstacleSize
{
  carma_v2x_msgs__msg__SizeValue width;
  carma_v2x_msgs__msg__SizeValue length;
  uint8_t presence_vector;
  carma_v2x_msgs__msg__SizeValue height;
} carma_v2x_msgs__msg__ObstacleSize;

// Struct for a sequence of carma_v2x_msgs__msg__ObstacleSize.
typedef struct carma_v2x_msgs__msg__ObstacleSize__Sequence
{
  carma_v2x_msgs__msg__ObstacleSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__ObstacleSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_H_
