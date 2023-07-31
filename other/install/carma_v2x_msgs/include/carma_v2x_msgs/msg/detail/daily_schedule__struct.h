// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'begin'
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/DailySchedule in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__DailySchedule
{
  builtin_interfaces__msg__Duration begin;
  builtin_interfaces__msg__Duration duration;
} carma_v2x_msgs__msg__DailySchedule;

// Struct for a sequence of carma_v2x_msgs__msg__DailySchedule.
typedef struct carma_v2x_msgs__msg__DailySchedule__Sequence
{
  carma_v2x_msgs__msg__DailySchedule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__DailySchedule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_H_
