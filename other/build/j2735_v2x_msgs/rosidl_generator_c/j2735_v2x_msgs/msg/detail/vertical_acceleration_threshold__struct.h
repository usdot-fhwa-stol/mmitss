// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VerticalAccelerationThreshold.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_EQUIPPED'.
enum
{
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__NOT_EQUIPPED = 0
};

/// Constant 'LEFT_FRONT'.
enum
{
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__LEFT_FRONT = 1
};

/// Constant 'LEFT_REAR'.
enum
{
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__LEFT_REAR = 2
};

/// Constant 'RIGHT_FRONT'.
enum
{
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__RIGHT_FRONT = 4
};

/// Constant 'RIGHT_REAR'.
enum
{
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__RIGHT_REAR = 8
};

// Struct defined in msg/VerticalAccelerationThreshold in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__VerticalAccelerationThreshold
{
  uint8_t exceeded_wheels;
} j2735_v2x_msgs__msg__VerticalAccelerationThreshold;

// Struct for a sequence of j2735_v2x_msgs__msg__VerticalAccelerationThreshold.
typedef struct j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence
{
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__STRUCT_H_
