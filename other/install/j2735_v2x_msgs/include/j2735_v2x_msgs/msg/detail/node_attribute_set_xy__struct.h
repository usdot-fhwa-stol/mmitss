// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_

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
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__struct.h"
// Member 'disabled'
// Member 'enabled'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__struct.h"
// Member 'data'
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__struct.h"

// Struct defined in msg/NodeAttributeSetXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeAttributeSetXY
{
  j2735_v2x_msgs__msg__NodeAttributeXYList local_node;
  bool local_node_exists;
  j2735_v2x_msgs__msg__SegmentAttributeXYList disabled;
  bool disabled_exists;
  j2735_v2x_msgs__msg__SegmentAttributeXYList enabled;
  bool enabled_exists;
  j2735_v2x_msgs__msg__LaneDataAttributeList data;
  bool data_exists;
  float d_width;
  bool d_width_exists;
  float d_elevation;
  bool d_elevation_exists;
} j2735_v2x_msgs__msg__NodeAttributeSetXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeAttributeSetXY.
typedef struct j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence
{
  j2735_v2x_msgs__msg__NodeAttributeSetXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
