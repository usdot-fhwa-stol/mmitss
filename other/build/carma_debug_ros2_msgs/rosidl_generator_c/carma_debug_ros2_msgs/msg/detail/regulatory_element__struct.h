// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__STRUCT_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rule_name'
// Member 'participants'
// Member 'direction'
// Member 'left_participants'
// Member 'right_participants'
// Member 'reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RegulatoryElement in the package carma_debug_ros2_msgs.
typedef struct carma_debug_ros2_msgs__msg__RegulatoryElement
{
  rosidl_runtime_c__String rule_name;
  rosidl_runtime_c__String__Sequence participants;
  bool unsupported_type;
  double min_gap;
  double speed_limit;
  rosidl_runtime_c__String direction;
  rosidl_runtime_c__String__Sequence left_participants;
  rosidl_runtime_c__String__Sequence right_participants;
  rosidl_runtime_c__String reason;
} carma_debug_ros2_msgs__msg__RegulatoryElement;

// Struct for a sequence of carma_debug_ros2_msgs__msg__RegulatoryElement.
typedef struct carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence
{
  carma_debug_ros2_msgs__msg__RegulatoryElement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__STRUCT_H_
