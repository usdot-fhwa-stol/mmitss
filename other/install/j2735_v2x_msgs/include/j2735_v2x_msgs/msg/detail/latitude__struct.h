// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Latitude__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__Latitude__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__Latitude__LATITUDE_MIN = -900000000l
};

// Struct defined in msg/Latitude in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Latitude
{
  int32_t latitude;
} j2735_v2x_msgs__msg__Latitude;

// Struct for a sequence of j2735_v2x_msgs__msg__Latitude.
typedef struct j2735_v2x_msgs__msg__Latitude__Sequence
{
  j2735_v2x_msgs__msg__Latitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Latitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
