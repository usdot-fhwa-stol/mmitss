// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LightbarInUse.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LIGHTBAR_IN_USE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LIGHTBAR_IN_USE__STRUCT_H_

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
  j2735_v2x_msgs__msg__LightbarInUse__UNAVAILABLE = 0
};

/// Constant 'NOT_IN_USE'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__NOT_IN_USE = 1
};

/// Constant 'IN_USE'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__IN_USE = 2
};

/// Constant 'YELLOW_CAUTION_LIGHTS'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__YELLOW_CAUTION_LIGHTS = 3
};

/// Constant 'SCHOOL_BUS_LIGHTS'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__SCHOOL_BUS_LIGHTS = 4
};

/// Constant 'ARROW_SIGNS_ACTIVE'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__ARROW_SIGNS_ACTIVE = 5
};

/// Constant 'SLOW_MOVING_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__SLOW_MOVING_VEHICLE = 6
};

/// Constant 'FREQ_STOPS'.
enum
{
  j2735_v2x_msgs__msg__LightbarInUse__FREQ_STOPS = 7
};

// Struct defined in msg/LightbarInUse in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__LightbarInUse
{
  uint8_t lightbar_in_use;
} j2735_v2x_msgs__msg__LightbarInUse;

// Struct for a sequence of j2735_v2x_msgs__msg__LightbarInUse.
typedef struct j2735_v2x_msgs__msg__LightbarInUse__Sequence
{
  j2735_v2x_msgs__msg__LightbarInUse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LightbarInUse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LIGHTBAR_IN_USE__STRUCT_H_
