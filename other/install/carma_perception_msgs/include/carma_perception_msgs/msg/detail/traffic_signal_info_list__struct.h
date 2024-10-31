// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'traffic_signal_info_list'
#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.h"

// Struct defined in msg/TrafficSignalInfoList in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__TrafficSignalInfoList
{
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence traffic_signal_info_list;
} carma_perception_msgs__msg__TrafficSignalInfoList;

// Struct for a sequence of carma_perception_msgs__msg__TrafficSignalInfoList.
typedef struct carma_perception_msgs__msg__TrafficSignalInfoList__Sequence
{
  carma_perception_msgs__msg__TrafficSignalInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__TrafficSignalInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__STRUCT_H_
