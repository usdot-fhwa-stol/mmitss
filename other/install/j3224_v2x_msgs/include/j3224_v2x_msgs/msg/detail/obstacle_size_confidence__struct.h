// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_HEIGHT_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__ObstacleSizeConfidence__HAS_HEIGHT_CONFIDENCE = 1
};

// Include directives for member types
// Member 'width_confidence'
// Member 'length_confidence'
// Member 'height_confidence'
#include "j3224_v2x_msgs/msg/detail/size_value_confidence__struct.h"

// Struct defined in msg/ObstacleSizeConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__ObstacleSizeConfidence
{
  j3224_v2x_msgs__msg__SizeValueConfidence width_confidence;
  j3224_v2x_msgs__msg__SizeValueConfidence length_confidence;
  uint8_t presence_vector;
  j3224_v2x_msgs__msg__SizeValueConfidence height_confidence;
} j3224_v2x_msgs__msg__ObstacleSizeConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__ObstacleSizeConfidence.
typedef struct j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence
{
  j3224_v2x_msgs__msg__ObstacleSizeConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__STRUCT_H_
