// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/PluginStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__STRUCT_H_

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
  carma_planning_msgs__msg__PluginStatus__DISABLED = 0
};

/// Constant 'ENABLED'.
enum
{
  carma_planning_msgs__msg__PluginStatus__ENABLED = 1
};

/// Constant 'AVAILABLE'.
enum
{
  carma_planning_msgs__msg__PluginStatus__AVAILABLE = 2
};

/// Constant 'FAULT'.
enum
{
  carma_planning_msgs__msg__PluginStatus__FAULT = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PluginStatus in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__PluginStatus
{
  rosidl_runtime_c__String name;
  uint8_t status;
  bool is_strategic_plugin;
  bool is_tactical_plugin;
  bool is_control_plugin;
} carma_planning_msgs__msg__PluginStatus;

// Struct for a sequence of carma_planning_msgs__msg__PluginStatus.
typedef struct carma_planning_msgs__msg__PluginStatus__Sequence
{
  carma_planning_msgs__msg__PluginStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__PluginStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__STRUCT_H_
