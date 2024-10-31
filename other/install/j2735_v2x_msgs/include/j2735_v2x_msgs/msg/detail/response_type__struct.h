// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ResponseType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_IN_USE_OR_NOT_EQUIPPED'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__NOT_IN_USE_OR_NOT_EQUIPPED = 0
};

/// Constant 'EMERGENCY'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__EMERGENCY = 1
};

/// Constant 'NON_EMERGENCY'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__NON_EMERGENCY = 2
};

/// Constant 'PURSUIT'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__PURSUIT = 3
};

/// Constant 'STATIONARY'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__STATIONARY = 4
};

/// Constant 'SLOW_MOVING'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__SLOW_MOVING = 5
};

/// Constant 'STOP_AND_GO_MOVEMENT'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__STOP_AND_GO_MOVEMENT = 6
};

// Struct defined in msg/ResponseType in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ResponseType
{
  uint8_t response_type;
} j2735_v2x_msgs__msg__ResponseType;

// Struct for a sequence of j2735_v2x_msgs__msg__ResponseType.
typedef struct j2735_v2x_msgs__msg__ResponseType__Sequence
{
  j2735_v2x_msgs__msg__ResponseType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ResponseType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_H_
