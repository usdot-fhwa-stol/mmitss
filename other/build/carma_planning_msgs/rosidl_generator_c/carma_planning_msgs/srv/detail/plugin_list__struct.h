// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/PluginList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/PluginList in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PluginList_Request
{
  uint8_t structure_needs_at_least_one_member;
} carma_planning_msgs__srv__PluginList_Request;

// Struct for a sequence of carma_planning_msgs__srv__PluginList_Request.
typedef struct carma_planning_msgs__srv__PluginList_Request__Sequence
{
  carma_planning_msgs__srv__PluginList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PluginList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'plugins'
#include "carma_planning_msgs/msg/detail/plugin__struct.h"

// Struct defined in srv/PluginList in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PluginList_Response
{
  std_msgs__msg__Header header;
  carma_planning_msgs__msg__Plugin__Sequence plugins;
} carma_planning_msgs__srv__PluginList_Response;

// Struct for a sequence of carma_planning_msgs__srv__PluginList_Response.
typedef struct carma_planning_msgs__srv__PluginList_Response__Sequence
{
  carma_planning_msgs__srv__PluginList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PluginList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__STRUCT_H_
