// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TimeChangeDetails in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TimeChangeDetails
{
  float start_time;
  bool start_time_exists;
  float min_end_time;
  float max_end_time;
  bool max_end_time_exists;
  float likely_time;
  bool likely_time_exists;
  uint8_t confidence;
  bool confidence_exists;
  float next_time;
  bool next_time_exists;
} carma_v2x_msgs__msg__TimeChangeDetails;

// Struct for a sequence of carma_v2x_msgs__msg__TimeChangeDetails.
typedef struct carma_v2x_msgs__msg__TimeChangeDetails__Sequence
{
  carma_v2x_msgs__msg__TimeChangeDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TimeChangeDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
