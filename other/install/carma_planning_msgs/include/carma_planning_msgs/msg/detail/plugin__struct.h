// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/Plugin.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  carma_planning_msgs__msg__Plugin__UNKNOWN = 0
};

/// Constant 'STRATEGIC'.
enum
{
  carma_planning_msgs__msg__Plugin__STRATEGIC = 1
};

/// Constant 'TACTICAL'.
enum
{
  carma_planning_msgs__msg__Plugin__TACTICAL = 2
};

/// Constant 'CONTROL'.
enum
{
  carma_planning_msgs__msg__Plugin__CONTROL = 3
};

// Include directives for member types
// Member 'name'
// Member 'version_id'
// Member 'capability'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Plugin in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__Plugin
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String version_id;
  uint8_t type;
  bool available;
  bool activated;
  rosidl_runtime_c__String capability;
} carma_planning_msgs__msg__Plugin;

// Struct for a sequence of carma_planning_msgs__msg__Plugin.
typedef struct carma_planning_msgs__msg__Plugin__Sequence
{
  carma_planning_msgs__msg__Plugin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__Plugin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__STRUCT_H_
