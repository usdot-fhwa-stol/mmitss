// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/GetPluginApi.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'capability'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetPluginApi in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__GetPluginApi_Request
{
  rosidl_runtime_c__String capability;
} carma_planning_msgs__srv__GetPluginApi_Request;

// Struct for a sequence of carma_planning_msgs__srv__GetPluginApi_Request.
typedef struct carma_planning_msgs__srv__GetPluginApi_Request__Sequence
{
  carma_planning_msgs__srv__GetPluginApi_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__GetPluginApi_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plan_service'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetPluginApi in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__GetPluginApi_Response
{
  rosidl_runtime_c__String__Sequence plan_service;
} carma_planning_msgs__srv__GetPluginApi_Response;

// Struct for a sequence of carma_planning_msgs__srv__GetPluginApi_Response.
typedef struct carma_planning_msgs__srv__GetPluginApi_Response__Sequence
{
  carma_planning_msgs__srv__GetPluginApi_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__GetPluginApi_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__STRUCT_H_
