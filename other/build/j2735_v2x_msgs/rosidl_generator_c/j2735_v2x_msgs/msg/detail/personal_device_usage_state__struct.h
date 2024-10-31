// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUsageState.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__STRUCT_H_

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
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__UNAVAILABLE = 0
};

/// Constant 'OTHER'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__OTHER = 1
};

/// Constant 'IDLE'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__IDLE = 2
};

/// Constant 'LISTENING_TO_AUDIO'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__LISTENING_TO_AUDIO = 4
};

/// Constant 'TYPING'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPING = 8
};

/// Constant 'CALLING'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__CALLING = 16
};

/// Constant 'PLAYING_GAMES'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__PLAYING_GAMES = 32
};

/// Constant 'READING'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__READING = 64
};

/// Constant 'VIEWING'.
enum
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__VIEWING = 128
};

// Struct defined in msg/PersonalDeviceUsageState in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PersonalDeviceUsageState
{
  uint16_t states;
} j2735_v2x_msgs__msg__PersonalDeviceUsageState;

// Struct for a sequence of j2735_v2x_msgs__msg__PersonalDeviceUsageState.
typedef struct j2735_v2x_msgs__msg__PersonalDeviceUsageState__Sequence
{
  j2735_v2x_msgs__msg__PersonalDeviceUsageState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PersonalDeviceUsageState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__STRUCT_H_
