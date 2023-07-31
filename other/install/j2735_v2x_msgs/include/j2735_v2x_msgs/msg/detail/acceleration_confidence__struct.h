// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AccelerationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_H_

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
  j2735_v2x_msgs__msg__AccelerationConfidence__UNAVAILABLE = 0
};

/// Constant 'ACCL_100_00'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_100_00 = 1
};

/// Constant 'ACCL_010_00'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_010_00 = 2
};

/// Constant 'ACCL_005_00'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_005_00 = 3
};

/// Constant 'ACCL_001_00'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_001_00 = 4
};

/// Constant 'ACCL_000_10'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_000_10 = 5
};

/// Constant 'ACCL_000_05'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_000_05 = 6
};

/// Constant 'ACCL_000_01'.
enum
{
  j2735_v2x_msgs__msg__AccelerationConfidence__ACCL_000_01 = 7
};

// Struct defined in msg/AccelerationConfidence in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__AccelerationConfidence
{
  uint8_t acceleration_confidence;
} j2735_v2x_msgs__msg__AccelerationConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__AccelerationConfidence.
typedef struct j2735_v2x_msgs__msg__AccelerationConfidence__Sequence
{
  j2735_v2x_msgs__msg__AccelerationConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AccelerationConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_H_
