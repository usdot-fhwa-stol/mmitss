// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_CURR_GNSS_STATUS'.
enum
{
  carma_v2x_msgs__msg__PathHistory__HAS_CURR_GNSS_STATUS = 1
};

/// Constant 'HAS_INITIAL_POSITION'.
enum
{
  carma_v2x_msgs__msg__PathHistory__HAS_INITIAL_POSITION = 2
};

// Include directives for member types
// Member 'crumb_data'
#include "carma_v2x_msgs/msg/detail/path_history_point_list__struct.h"
// Member 'initial_position'
#include "carma_v2x_msgs/msg/detail/full_position_vector__struct.h"
// Member 'curr_gnss_status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__struct.h"

// Struct defined in msg/PathHistory in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PathHistory
{
  uint8_t presence_vector;
  carma_v2x_msgs__msg__PathHistoryPointList crumb_data;
  carma_v2x_msgs__msg__FullPositionVector initial_position;
  j2735_v2x_msgs__msg__GNSSStatus curr_gnss_status;
} carma_v2x_msgs__msg__PathHistory;

// Struct for a sequence of carma_v2x_msgs__msg__PathHistory.
typedef struct carma_v2x_msgs__msg__PathHistory__Sequence
{
  carma_v2x_msgs__msg__PathHistory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PathHistory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
