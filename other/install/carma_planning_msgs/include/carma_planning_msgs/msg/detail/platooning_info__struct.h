// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISABLED'.
enum
{
  carma_planning_msgs__msg__PlatooningInfo__DISABLED = 0
};

/// Constant 'SEARCHING'.
enum
{
  carma_planning_msgs__msg__PlatooningInfo__SEARCHING = 1
};

/// Constant 'CONNECTING_TO_NEW_FOLLOWER'.
enum
{
  carma_planning_msgs__msg__PlatooningInfo__CONNECTING_TO_NEW_FOLLOWER = 2
};

/// Constant 'CONNECTING_TO_NEW_LEADER'.
enum
{
  carma_planning_msgs__msg__PlatooningInfo__CONNECTING_TO_NEW_LEADER = 3
};

/// Constant 'LEADING'.
enum
{
  carma_planning_msgs__msg__PlatooningInfo__LEADING = 4
};

/// Constant 'FOLLOWING'.
enum
{
  carma_planning_msgs__msg__PlatooningInfo__FOLLOWING = 5
};

// Include directives for member types
// Member 'platoon_id'
// Member 'leader_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PlatooningInfo in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__PlatooningInfo
{
  uint8_t state;
  rosidl_runtime_c__String platoon_id;
  uint8_t size;
  uint8_t size_limit;
  rosidl_runtime_c__String leader_id;
  float leader_downtrack_distance;
  float leader_cmd_speed;
  uint8_t host_platoon_position;
  float host_cmd_speed;
  float desired_gap;
  float actual_gap;
  float current_predecessor_time_headway_sum;
  float predecessor_speed;
  float predecessor_position;
  bool is_create_gap;
  float create_gap_adjuster;
} carma_planning_msgs__msg__PlatooningInfo;

// Struct for a sequence of carma_planning_msgs__msg__PlatooningInfo.
typedef struct carma_planning_msgs__msg__PlatooningInfo__Sequence
{
  carma_planning_msgs__msg__PlatooningInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__PlatooningInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__STRUCT_H_
