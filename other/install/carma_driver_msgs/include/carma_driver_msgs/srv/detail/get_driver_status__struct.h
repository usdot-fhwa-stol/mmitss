// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:srv/GetDriverStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_STATUS__STRUCT_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetDriverStatus in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriverStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} carma_driver_msgs__srv__GetDriverStatus_Request;

// Struct for a sequence of carma_driver_msgs__srv__GetDriverStatus_Request.
typedef struct carma_driver_msgs__srv__GetDriverStatus_Request__Sequence
{
  carma_driver_msgs__srv__GetDriverStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriverStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "carma_driver_msgs/msg/detail/driver_status__struct.h"

// Struct defined in srv/GetDriverStatus in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriverStatus_Response
{
  carma_driver_msgs__msg__DriverStatus status;
} carma_driver_msgs__srv__GetDriverStatus_Response;

// Struct for a sequence of carma_driver_msgs__srv__GetDriverStatus_Response.
typedef struct carma_driver_msgs__srv__GetDriverStatus_Response__Sequence
{
  carma_driver_msgs__srv__GetDriverStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriverStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_STATUS__STRUCT_H_
