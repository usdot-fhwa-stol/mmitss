// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/ObjectID.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_OBJECT_ID'.
enum
{
  j3224_v2x_msgs__msg__ObjectID__MIN_OBJECT_ID = 0
};

/// Constant 'MAX_OBJECT_ID'.
enum
{
  j3224_v2x_msgs__msg__ObjectID__MAX_OBJECT_ID = 65535
};

// Struct defined in msg/ObjectID in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__ObjectID
{
  uint16_t object_id;
} j3224_v2x_msgs__msg__ObjectID;

// Struct for a sequence of j3224_v2x_msgs__msg__ObjectID.
typedef struct j3224_v2x_msgs__msg__ObjectID__Sequence
{
  j3224_v2x_msgs__msg__ObjectID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__ObjectID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__STRUCT_H_
