// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/ClassificationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_CLASSIFICATION_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__ClassificationConfidence__MIN_CLASSIFICATION_CONFIDENCE = 0
};

/// Constant 'MAX_CLASSIFICATION_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__ClassificationConfidence__MAX_CLASSIFICATION_CONFIDENCE = 101
};

// Struct defined in msg/ClassificationConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__ClassificationConfidence
{
  uint8_t classification_confidence;
} j3224_v2x_msgs__msg__ClassificationConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__ClassificationConfidence.
typedef struct j3224_v2x_msgs__msg__ClassificationConfidence__Sequence
{
  j3224_v2x_msgs__msg__ClassificationConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__ClassificationConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__STRUCT_H_
