// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/HeadingSlice.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_HEADING'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__NO_HEADING = 0
};

/// Constant 'FROM_000_0_TO_022_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_000_0_TO_022_5_DEGREES = 1
};

/// Constant 'FROM_022_5_TO_045_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_022_5_TO_045_0_DEGREES = 2
};

/// Constant 'FROM_045_0_TO_067_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_045_0_TO_067_5_DEGREES = 4
};

/// Constant 'FROM_067_5_TO_090_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_067_5_TO_090_0_DEGREES = 8
};

/// Constant 'FROM_090_0_TO_112_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_090_0_TO_112_5_DEGREES = 16
};

/// Constant 'FROM_112_5_TO_135_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_112_5_TO_135_0_DEGREES = 32
};

/// Constant 'FROM_135_0_TO_157_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_135_0_TO_157_5_DEGREES = 64
};

/// Constant 'FROM_157_5_TO_180_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_157_5_TO_180_0_DEGREES = 128
};

/// Constant 'FROM_180_0_TO_202_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_180_0_TO_202_5_DEGREES = 256
};

/// Constant 'FROM_202_5_TO_225_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_202_5_TO_225_0_DEGREES = 512
};

/// Constant 'FROM_225_0_TO_247_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_225_0_TO_247_5_DEGREES = 1024
};

/// Constant 'FROM_247_5_TO_270_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_247_5_TO_270_0_DEGREES = 2048
};

/// Constant 'FROM_270_0_TO_292_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_270_0_TO_292_5_DEGREES = 4096
};

/// Constant 'FROM_292_5_TO_315_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_292_5_TO_315_0_DEGREES = 8192
};

/// Constant 'FROM_315_0_TO_337_5_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_315_0_TO_337_5_DEGREES = 16384
};

/// Constant 'FROM_337_5_TO_360_0_DEGREES'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__FROM_337_5_TO_360_0_DEGREES = 32768
};

/// Constant 'ALL_HEADINGS'.
enum
{
  j2735_v2x_msgs__msg__HeadingSlice__ALL_HEADINGS = 65535
};

// Struct defined in msg/HeadingSlice in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__HeadingSlice
{
  uint16_t heading_slice;
} j2735_v2x_msgs__msg__HeadingSlice;

// Struct for a sequence of j2735_v2x_msgs__msg__HeadingSlice.
typedef struct j2735_v2x_msgs__msg__HeadingSlice__Sequence
{
  j2735_v2x_msgs__msg__HeadingSlice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__HeadingSlice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_H_
