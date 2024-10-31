// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'local_node'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__struct.h"
// Member 'disabled'
// Member 'enabled'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__struct.h"
// Member 'lane_attribute_list'
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.h"

// Struct defined in msg/NodeAttributeSetXY in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__NodeAttributeSetXY
{
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence local_node;
  bool local_node_exists;
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence disabled;
  bool disabled_exists;
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence enabled;
  bool enabled_exists;
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence lane_attribute_list;
  bool data_exists;
  float d_width;
  bool d_width_exists;
  float d_elevation;
  bool d_elevation_exists;
} carma_v2x_msgs__msg__NodeAttributeSetXY;

// Struct for a sequence of carma_v2x_msgs__msg__NodeAttributeSetXY.
typedef struct carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence
{
  carma_v2x_msgs__msg__NodeAttributeSetXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
