// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PositionConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__UNAVAILABLE = 0
};

/// Constant 'A500M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A500M = 1
};

/// Constant 'A200M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A200M = 2
};

/// Constant 'A100M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A100M = 3
};

/// Constant 'A50M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A50M = 4
};

/// Constant 'A20M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A20M = 5
};

/// Constant 'A10M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A10M = 6
};

/// Constant 'A5M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A5M = 7
};

/// Constant 'A2M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A2M = 8
};

/// Constant 'A1M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A1M = 9
};

/// Constant 'A50CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A50CM = 10
};

/// Constant 'A20CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A20CM = 11
};

/// Constant 'A10CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A10CM = 12
};

/// Constant 'A5CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A5CM = 13
};

/// Constant 'A2CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A2CM = 14
};

/// Constant 'A1CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A1CM = 15
};

// Struct defined in msg/PositionConfidence in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PositionConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__PositionConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__PositionConfidence.
typedef struct j2735_v2x_msgs__msg__PositionConfidence__Sequence
{
  j2735_v2x_msgs__msg__PositionConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PositionConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_
