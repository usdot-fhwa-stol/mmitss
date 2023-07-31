// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/YawDetected.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_YAW_DETECTED'.
enum
{
  j3224_v2x_msgs__msg__YawDetected__MIN_YAW_DETECTED = -14400
};

/// Constant 'MAX_YAW_DETECTED'.
enum
{
  j3224_v2x_msgs__msg__YawDetected__MAX_YAW_DETECTED = 14400
};

// Struct defined in msg/YawDetected in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__YawDetected
{
  int16_t yaw_detected;
} j3224_v2x_msgs__msg__YawDetected;

// Struct for a sequence of j3224_v2x_msgs__msg__YawDetected.
typedef struct j3224_v2x_msgs__msg__YawDetected__Sequence
{
  j3224_v2x_msgs__msg__YawDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__YawDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_H_
