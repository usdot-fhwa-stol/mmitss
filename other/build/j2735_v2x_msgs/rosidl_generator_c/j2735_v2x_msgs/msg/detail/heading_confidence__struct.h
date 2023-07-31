// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/HeadingConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_H_

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
  j2735_v2x_msgs__msg__HeadingConfidence__UNAVAILABLE = 0
};

/// Constant 'PREC_10_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_10_DEG = 1
};

/// Constant 'PREC_05_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_05_DEG = 2
};

/// Constant 'PREC_01_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_01_DEG = 3
};

/// Constant 'PREC_001_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_001_DEG = 4
};

/// Constant 'PREC_0005_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_0005_DEG = 5
};

/// Constant 'PREC_0001_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_0001_DEG = 6
};

/// Constant 'PREC_000125_DEG'.
enum
{
  j2735_v2x_msgs__msg__HeadingConfidence__PREC_000125_DEG = 7
};

// Struct defined in msg/HeadingConfidence in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__HeadingConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__HeadingConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__HeadingConfidence.
typedef struct j2735_v2x_msgs__msg__HeadingConfidence__Sequence
{
  j2735_v2x_msgs__msg__HeadingConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__HeadingConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_H_
