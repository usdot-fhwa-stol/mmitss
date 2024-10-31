// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEG_SEC_100_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_100_00 = 1
};

/// Constant 'DEG_SEC_010_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_010_00 = 2
};

/// Constant 'DEG_SEC_005_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_005_00 = 3
};

/// Constant 'DEG_SEC_001_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_001_00 = 4
};

/// Constant 'DEG_SEC_000_10'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_000_10 = 5
};

/// Constant 'DEG_SEC_000_05'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_000_05 = 6
};

/// Constant 'DEG_SEC_000_01'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_000_01 = 7
};

// Struct defined in msg/YawRateConfidence in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__YawRateConfidence
{
  uint8_t yaw_rate_confidence;
} j2735_v2x_msgs__msg__YawRateConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__YawRateConfidence.
typedef struct j2735_v2x_msgs__msg__YawRateConfidence__Sequence
{
  j2735_v2x_msgs__msg__YawRateConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__YawRateConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_
