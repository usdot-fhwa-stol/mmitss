// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COEFFICIENT_MIN'.
enum
{
  j2735_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_MIN = 0
};

/// Constant 'COEFFICIENT_MAX'.
enum
{
  j2735_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_MAX = 50
};

/// Constant 'COEFFICIENT_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__CoefficientOfFriction__COEFFICIENT_UNAVAILABLE = 0
};

// Struct defined in msg/CoefficientOfFriction in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__CoefficientOfFriction
{
  uint8_t coefficient;
} j2735_v2x_msgs__msg__CoefficientOfFriction;

// Struct for a sequence of j2735_v2x_msgs__msg__CoefficientOfFriction.
typedef struct j2735_v2x_msgs__msg__CoefficientOfFriction__Sequence
{
  j2735_v2x_msgs__msg__CoefficientOfFriction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__CoefficientOfFriction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_H_
