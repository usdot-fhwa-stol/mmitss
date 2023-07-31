// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:srv/GetDriverApi.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__STRUCT_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetDriverApi in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriverApi_Request
{
  uint8_t structure_needs_at_least_one_member;
} carma_driver_msgs__srv__GetDriverApi_Request;

// Struct for a sequence of carma_driver_msgs__srv__GetDriverApi_Request.
typedef struct carma_driver_msgs__srv__GetDriverApi_Request__Sequence
{
  carma_driver_msgs__srv__GetDriverApi_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriverApi_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'api_list'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetDriverApi in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriverApi_Response
{
  rosidl_runtime_c__String__Sequence api_list;
} carma_driver_msgs__srv__GetDriverApi_Response;

// Struct for a sequence of carma_driver_msgs__srv__GetDriverApi_Response.
typedef struct carma_driver_msgs__srv__GetDriverApi_Response__Sequence
{
  carma_driver_msgs__srv__GetDriverApi_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriverApi_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__STRUCT_H_
