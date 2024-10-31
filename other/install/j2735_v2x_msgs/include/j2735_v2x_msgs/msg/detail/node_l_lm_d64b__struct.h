// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_H_

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
  j2735_v2x_msgs__msg__NodeLLmD64b__LONGITUDE_UNAVAILABLE = 1800000001l
};

/// Constant 'LONGITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LONGITUDE_MAX = 1800000000l
};

/// Constant 'LONGITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LONGITUDE_MIN = -1799999999l
};

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LATITUDE_MIN = -900000000l
};

// Struct defined in msg/NodeLLmD64b in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeLLmD64b
{
  int32_t longitude;
  int32_t latitude;
} j2735_v2x_msgs__msg__NodeLLmD64b;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeLLmD64b.
typedef struct j2735_v2x_msgs__msg__NodeLLmD64b__Sequence
{
  j2735_v2x_msgs__msg__NodeLLmD64b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeLLmD64b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_H_
