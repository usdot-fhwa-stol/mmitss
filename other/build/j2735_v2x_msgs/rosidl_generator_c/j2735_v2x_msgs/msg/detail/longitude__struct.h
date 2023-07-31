// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Longitude__LONGITUDE_UNAVAILABLE = 1800000001l
};

/// Constant 'LONGITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__Longitude__LONGITUDE_MAX = 1800000000l
};

/// Constant 'LONGITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__Longitude__LONGITUDE_MIN = -1799999999l
};

// Struct defined in msg/Longitude in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Longitude
{
  int32_t longitude;
} j2735_v2x_msgs__msg__Longitude;

// Struct for a sequence of j2735_v2x_msgs__msg__Longitude.
typedef struct j2735_v2x_msgs__msg__Longitude__Sequence
{
  j2735_v2x_msgs__msg__Longitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Longitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_
