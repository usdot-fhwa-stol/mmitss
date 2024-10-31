// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_H_

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
// Member 'layer_type'
#include "j2735_v2x_msgs/msg/detail/layer_type__struct.h"
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__struct.h"
// Member 'road_segments'
#include "j2735_v2x_msgs/msg/detail/road_segment_list__struct.h"
// Member 'data_parameters'
#include "j2735_v2x_msgs/msg/detail/data_parameters__struct.h"
// Member 'restriction_list'
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__struct.h"

// Struct defined in msg/MapData in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__MapData
{
  std_msgs__msg__Header header;
  uint32_t time_stamp;
  bool time_stamp_exists;
  uint8_t msg_issue_revision;
  j2735_v2x_msgs__msg__LayerType layer_type;
  uint8_t layer_id;
  bool layer_id_exists;
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence intersections;
  bool intersections_exists;
  j2735_v2x_msgs__msg__RoadSegmentList road_segments;
  bool road_segments_exists;
  j2735_v2x_msgs__msg__DataParameters data_parameters;
  bool data_parameters_exists;
  j2735_v2x_msgs__msg__RestrictionClassList restriction_list;
  bool restriction_list_exists;
} j2735_v2x_msgs__msg__MapData;

// Struct for a sequence of j2735_v2x_msgs__msg__MapData.
typedef struct j2735_v2x_msgs__msg__MapData__Sequence
{
  j2735_v2x_msgs__msg__MapData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MapData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_H_
