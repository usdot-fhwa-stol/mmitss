// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/SizeValue.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_SIZE_VALUE'.
enum
{
  j3224_v2x_msgs__msg__SizeValue__MIN_SIZE_VALUE = 0
};

/// Constant 'MAX_SIZE_VALUE'.
enum
{
  j3224_v2x_msgs__msg__SizeValue__MAX_SIZE_VALUE = 1023
};

// Struct defined in msg/SizeValue in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__SizeValue
{
  uint16_t size_value;
} j3224_v2x_msgs__msg__SizeValue;

// Struct for a sequence of j3224_v2x_msgs__msg__SizeValue.
typedef struct j3224_v2x_msgs__msg__SizeValue__Sequence
{
  j3224_v2x_msgs__msg__SizeValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__SizeValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_H_
