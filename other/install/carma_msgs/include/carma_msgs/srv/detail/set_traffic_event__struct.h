// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_H_
#define CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetTrafficEvent in the package carma_msgs.
typedef struct carma_msgs__srv__SetTrafficEvent_Request
{
  double up_track;
  double down_track;
  double minimum_gap;
  double advisory_speed;
} carma_msgs__srv__SetTrafficEvent_Request;

// Struct for a sequence of carma_msgs__srv__SetTrafficEvent_Request.
typedef struct carma_msgs__srv__SetTrafficEvent_Request__Sequence
{
  carma_msgs__srv__SetTrafficEvent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__SetTrafficEvent_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetTrafficEvent in the package carma_msgs.
typedef struct carma_msgs__srv__SetTrafficEvent_Response
{
  bool success;
} carma_msgs__srv__SetTrafficEvent_Response;

// Struct for a sequence of carma_msgs__srv__SetTrafficEvent_Response.
typedef struct carma_msgs__srv__SetTrafficEvent_Response__Sequence
{
  carma_msgs__srv__SetTrafficEvent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__SetTrafficEvent_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_H_
