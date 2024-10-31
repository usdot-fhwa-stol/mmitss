// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_H_

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
  j3224_v2x_msgs__msg__ObstacleSize__HAS_HEIGHT = 1
};

// Include directives for member types
// Member 'width'
// Member 'length'
// Member 'height'
#include "j3224_v2x_msgs/msg/detail/size_value__struct.h"

// Struct defined in msg/ObstacleSize in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__ObstacleSize
{
  j3224_v2x_msgs__msg__SizeValue width;
  j3224_v2x_msgs__msg__SizeValue length;
  uint8_t presence_vector;
  j3224_v2x_msgs__msg__SizeValue height;
} j3224_v2x_msgs__msg__ObstacleSize;

// Struct for a sequence of j3224_v2x_msgs__msg__ObstacleSize.
typedef struct j3224_v2x_msgs__msg__ObstacleSize__Sequence
{
  j3224_v2x_msgs__msg__ObstacleSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__ObstacleSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_H_
