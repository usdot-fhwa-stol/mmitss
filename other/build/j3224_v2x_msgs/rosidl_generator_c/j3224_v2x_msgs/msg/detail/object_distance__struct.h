// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_OBJECT_DISTANCE'.
enum
{
  j3224_v2x_msgs__msg__ObjectDistance__MIN_OBJECT_DISTANCE = -32767
};

/// Constant 'MAX_OBJECT_DISTANCE'.
enum
{
  j3224_v2x_msgs__msg__ObjectDistance__MAX_OBJECT_DISTANCE = 32767
};

// Struct defined in msg/ObjectDistance in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__ObjectDistance
{
  int16_t object_distance;
} j3224_v2x_msgs__msg__ObjectDistance;

// Struct for a sequence of j3224_v2x_msgs__msg__ObjectDistance.
typedef struct j3224_v2x_msgs__msg__ObjectDistance__Sequence
{
  j3224_v2x_msgs__msg__ObjectDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__ObjectDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
