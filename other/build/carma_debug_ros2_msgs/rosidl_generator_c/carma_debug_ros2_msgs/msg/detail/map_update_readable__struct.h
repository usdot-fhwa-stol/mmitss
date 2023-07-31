// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__STRUCT_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'format_version'
// Member 'map_version'
// Member 'route_id'
// Member 'traffic_control_id'
#include "rosidl_runtime_c/string.h"
// Member 'update_list'
// Member 'remove_list'
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.h"

// Struct defined in msg/MapUpdateReadable in the package carma_debug_ros2_msgs.
typedef struct carma_debug_ros2_msgs__msg__MapUpdateReadable
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String format_version;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String route_id;
  uint32_t route_version;
  bool invalidates_route;
  rosidl_runtime_c__String traffic_control_id;
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence update_list;
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence remove_list;
} carma_debug_ros2_msgs__msg__MapUpdateReadable;

// Struct for a sequence of carma_debug_ros2_msgs__msg__MapUpdateReadable.
typedef struct carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence
{
  carma_debug_ros2_msgs__msg__MapUpdateReadable * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__STRUCT_H_
