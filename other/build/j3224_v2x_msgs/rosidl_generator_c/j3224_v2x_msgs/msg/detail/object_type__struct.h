// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_TYPE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  j3224_v2x_msgs__msg__ObjectType__UNKNOWN = 0
};

/// Constant 'VEHICLE'.
enum
{
  j3224_v2x_msgs__msg__ObjectType__VEHICLE = 1
};

/// Constant 'VRU'.
enum
{
  j3224_v2x_msgs__msg__ObjectType__VRU = 2
};

/// Constant 'ANIMAL'.
enum
{
  j3224_v2x_msgs__msg__ObjectType__ANIMAL = 3
};

// Struct defined in msg/ObjectType in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__ObjectType
{
  uint8_t object_type;
} j3224_v2x_msgs__msg__ObjectType;

// Struct for a sequence of j3224_v2x_msgs__msg__ObjectType.
typedef struct j3224_v2x_msgs__msg__ObjectType__Sequence
{
  j3224_v2x_msgs__msg__ObjectType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__ObjectType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_TYPE__STRUCT_H_
