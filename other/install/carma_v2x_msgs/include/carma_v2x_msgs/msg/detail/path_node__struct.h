// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PathNode.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_NODE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PathNode in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PathNode
{
  double x;
  double y;
  double z;
  bool z_exists;
  float width;
  bool width_exists;
} carma_v2x_msgs__msg__PathNode;

// Struct for a sequence of carma_v2x_msgs__msg__PathNode.
typedef struct carma_v2x_msgs__msg__PathNode__Sequence
{
  carma_v2x_msgs__msg__PathNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PathNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_NODE__STRUCT_H_
