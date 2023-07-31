// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AuxiliaryBrakeStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__AUXILIARY_BRAKE_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__AUXILIARY_BRAKE_STATUS__STRUCT_H_

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
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__OFF = 1
};

/// Constant 'ON'.
enum
{
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__ON = 2
};

/// Constant 'RESERVED'.
enum
{
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__RESERVED = 3
};

// Struct defined in msg/AuxiliaryBrakeStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__AuxiliaryBrakeStatus
{
  uint8_t auxiliary_brake_status;
} j2735_v2x_msgs__msg__AuxiliaryBrakeStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__AuxiliaryBrakeStatus.
typedef struct j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__Sequence
{
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AUXILIARY_BRAKE_STATUS__STRUCT_H_
