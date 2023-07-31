// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/RollRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE_CONFIDENCE__STRUCT_H_

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
  j3224_v2x_msgs__msg__RollRateConfidence__UNAVAILABLE = 0
};

/// Constant 'DEG_SEC_100_0'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_100_0 = 1
};

/// Constant 'DEG_SEC_010_00'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_010_00 = 2
};

/// Constant 'DEG_SEC_005_00'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_005_00 = 3
};

/// Constant 'DEG_SEC_001_00'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_001_00 = 4
};

/// Constant 'DEG_SEC_000_10'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_000_10 = 5
};

/// Constant 'DEG_SEC_000_05'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_000_05 = 6
};

/// Constant 'DEG_SEC_000_01'.
enum
{
  j3224_v2x_msgs__msg__RollRateConfidence__DEG_SEC_000_01 = 7
};

// Struct defined in msg/RollRateConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__RollRateConfidence
{
  uint8_t roll_rate_confidence;
} j3224_v2x_msgs__msg__RollRateConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__RollRateConfidence.
typedef struct j3224_v2x_msgs__msg__RollRateConfidence__Sequence
{
  j3224_v2x_msgs__msg__RollRateConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__RollRateConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE_CONFIDENCE__STRUCT_H_
