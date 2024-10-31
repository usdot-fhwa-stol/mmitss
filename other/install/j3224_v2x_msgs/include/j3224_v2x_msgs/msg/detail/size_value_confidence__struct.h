// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/SizeValueConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__STRUCT_H_

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
  j3224_v2x_msgs__msg__SizeValueConfidence__UNAVAILABLE = 0
};

/// Constant 'SIZE_100_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_100_00 = 1
};

/// Constant 'SIZE_050_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_050_00 = 2
};

/// Constant 'SIZE_020_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_020_00 = 3
};

/// Constant 'SIZE_010_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_010_00 = 4
};

/// Constant 'SIZE_005_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_005_00 = 5
};

/// Constant 'SIZE_002_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_002_00 = 6
};

/// Constant 'SIZE_001_00'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_001_00 = 7
};

/// Constant 'SIZE_000_50'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_000_50 = 8
};

/// Constant 'SIZE_000_20'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_000_20 = 9
};

/// Constant 'SIZE_000_10'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_000_10 = 10
};

/// Constant 'SIZE_000_05'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_000_05 = 11
};

/// Constant 'SIZE_000_02'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_000_02 = 12
};

/// Constant 'SIZE_000_01'.
enum
{
  j3224_v2x_msgs__msg__SizeValueConfidence__SIZE_000_01 = 13
};

// Struct defined in msg/SizeValueConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__SizeValueConfidence
{
  uint8_t size_value_confidence;
} j3224_v2x_msgs__msg__SizeValueConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__SizeValueConfidence.
typedef struct j3224_v2x_msgs__msg__SizeValueConfidence__Sequence
{
  j3224_v2x_msgs__msg__SizeValueConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__SizeValueConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__STRUCT_H_
