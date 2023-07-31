// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TractionControlStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_H_

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
  j2735_v2x_msgs__msg__TractionControlStatus__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__OFF = 1
};

/// Constant 'ON'.
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__ON = 2
};

/// Constant 'ENGAGED'.
enum
{
  j2735_v2x_msgs__msg__TractionControlStatus__ENGAGED = 3
};

// Struct defined in msg/TractionControlStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TractionControlStatus
{
  uint8_t traction_control_status;
} j2735_v2x_msgs__msg__TractionControlStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__TractionControlStatus.
typedef struct j2735_v2x_msgs__msg__TractionControlStatus__Sequence
{
  j2735_v2x_msgs__msg__TractionControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TractionControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_H_
