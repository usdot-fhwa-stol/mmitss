// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AntiLockBrakeStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANTI_LOCK_BRAKE_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ANTI_LOCK_BRAKE_STATUS__STRUCT_H_

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
  j2735_v2x_msgs__msg__AntiLockBrakeStatus__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__AntiLockBrakeStatus__OFF = 1
};

/// Constant 'ON'.
enum
{
  j2735_v2x_msgs__msg__AntiLockBrakeStatus__ON = 2
};

/// Constant 'ENGAGED'.
enum
{
  j2735_v2x_msgs__msg__AntiLockBrakeStatus__ENGAGED = 3
};

// Struct defined in msg/AntiLockBrakeStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__AntiLockBrakeStatus
{
  uint8_t anti_lock_brake_status;
} j2735_v2x_msgs__msg__AntiLockBrakeStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__AntiLockBrakeStatus.
typedef struct j2735_v2x_msgs__msg__AntiLockBrakeStatus__Sequence
{
  j2735_v2x_msgs__msg__AntiLockBrakeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AntiLockBrakeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANTI_LOCK_BRAKE_STATUS__STRUCT_H_
