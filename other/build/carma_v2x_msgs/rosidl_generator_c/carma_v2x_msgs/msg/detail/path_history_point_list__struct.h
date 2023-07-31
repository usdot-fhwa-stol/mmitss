// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_SIZE'.
enum
{
  carma_v2x_msgs__msg__PathHistoryPointList__MIN_SIZE = 1
};

/// Constant 'MAX_SIZE'.
enum
{
  carma_v2x_msgs__msg__PathHistoryPointList__MAX_SIZE = 23
};

// Include directives for member types
// Member 'points'
#include "carma_v2x_msgs/msg/detail/path_history_point__struct.h"

// Struct defined in msg/PathHistoryPointList in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PathHistoryPointList
{
  carma_v2x_msgs__msg__PathHistoryPoint__Sequence points;
} carma_v2x_msgs__msg__PathHistoryPointList;

// Struct for a sequence of carma_v2x_msgs__msg__PathHistoryPointList.
typedef struct carma_v2x_msgs__msg__PathHistoryPointList__Sequence
{
  carma_v2x_msgs__msg__PathHistoryPointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PathHistoryPointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_H_
