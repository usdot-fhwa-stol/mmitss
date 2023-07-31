// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__struct.h"

// Struct defined in msg/RegulatorySpeedLimit in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__RegulatorySpeedLimit
{
  j2735_v2x_msgs__msg__SpeedLimitType type;
  double speed;
} j2735_v2x_msgs__msg__RegulatorySpeedLimit;

// Struct for a sequence of j2735_v2x_msgs__msg__RegulatorySpeedLimit.
typedef struct j2735_v2x_msgs__msg__RegulatorySpeedLimit__Sequence
{
  j2735_v2x_msgs__msg__RegulatorySpeedLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RegulatorySpeedLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_H_
