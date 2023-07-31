// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__STRUCT_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'element'
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.h"

// Struct defined in msg/LaneletIdRegulatoryElementPair in the package carma_debug_ros2_msgs.
typedef struct carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair
{
  uint64_t lanelet_id;
  carma_debug_ros2_msgs__msg__RegulatoryElement element;
} carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair;

// Struct for a sequence of carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair.
typedef struct carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__STRUCT_H_
