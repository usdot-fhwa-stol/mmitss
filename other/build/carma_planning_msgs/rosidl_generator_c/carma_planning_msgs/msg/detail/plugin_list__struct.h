// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/PluginList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_LIST__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_LIST__STRUCT_H_

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
// Member 'plugins'
#include "carma_planning_msgs/msg/detail/plugin__struct.h"

// Struct defined in msg/PluginList in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__PluginList
{
  std_msgs__msg__Header header;
  carma_planning_msgs__msg__Plugin__Sequence plugins;
} carma_planning_msgs__msg__PluginList;

// Struct for a sequence of carma_planning_msgs__msg__PluginList.
typedef struct carma_planning_msgs__msg__PluginList__Sequence
{
  carma_planning_msgs__msg__PluginList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__PluginList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_LIST__STRUCT_H_
