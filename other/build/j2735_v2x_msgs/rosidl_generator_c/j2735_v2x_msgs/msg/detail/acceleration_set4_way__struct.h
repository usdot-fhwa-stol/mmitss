// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCELERATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_UNAVAILABLE = 2001
};

/// Constant 'ACCELERATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_MAX = 2000
};

/// Constant 'ACCELERATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_MIN = -2000
};

/// Constant 'ACCELERATION_VERTICAL_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_UNAVAILABLE = -127
};

/// Constant 'ACCELERATION_VERTICAL_MAX'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_MAX = 127
};

/// Constant 'ACCELERATION_VERTICAL_MIN'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_MIN = -126
};

/// Constant 'YAWRATE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_UNAVAILABLE = 0
};

/// Constant 'YAWRATE_MAX'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_MAX = 32767
};

/// Constant 'YAWRATE_MIN'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_MIN = -32767
};

// Struct defined in msg/AccelerationSet4Way in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__AccelerationSet4Way
{
  int16_t longitudinal;
  int16_t lateral;
  int8_t vert;
  int16_t yaw_rate;
} j2735_v2x_msgs__msg__AccelerationSet4Way;

// Struct for a sequence of j2735_v2x_msgs__msg__AccelerationSet4Way.
typedef struct j2735_v2x_msgs__msg__AccelerationSet4Way__Sequence
{
  j2735_v2x_msgs__msg__AccelerationSet4Way * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AccelerationSet4Way__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
