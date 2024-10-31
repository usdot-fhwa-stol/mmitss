// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__STRUCT_H_

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
// Member 'plugin_name'
// Member 'plugin_version'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/PluginActivation in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PluginActivation_Request
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String plugin_name;
  rosidl_runtime_c__String plugin_version;
  bool activated;
} carma_planning_msgs__srv__PluginActivation_Request;

// Struct for a sequence of carma_planning_msgs__srv__PluginActivation_Request.
typedef struct carma_planning_msgs__srv__PluginActivation_Request__Sequence
{
  carma_planning_msgs__srv__PluginActivation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PluginActivation_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/PluginActivation in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PluginActivation_Response
{
  bool newstate;
} carma_planning_msgs__srv__PluginActivation_Response;

// Struct for a sequence of carma_planning_msgs__srv__PluginActivation_Response.
typedef struct carma_planning_msgs__srv__PluginActivation_Response__Sequence
{
  carma_planning_msgs__srv__PluginActivation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PluginActivation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__STRUCT_H_
