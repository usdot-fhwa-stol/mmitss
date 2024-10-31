// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/SetGuidanceActive.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetGuidanceActive in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__SetGuidanceActive_Request
{
  bool guidance_active;
} carma_planning_msgs__srv__SetGuidanceActive_Request;

// Struct for a sequence of carma_planning_msgs__srv__SetGuidanceActive_Request.
typedef struct carma_planning_msgs__srv__SetGuidanceActive_Request__Sequence
{
  carma_planning_msgs__srv__SetGuidanceActive_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__SetGuidanceActive_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetGuidanceActive in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__SetGuidanceActive_Response
{
  bool guidance_status;
} carma_planning_msgs__srv__SetGuidanceActive_Response;

// Struct for a sequence of carma_planning_msgs__srv__SetGuidanceActive_Response.
typedef struct carma_planning_msgs__srv__SetGuidanceActive_Response__Sequence
{
  carma_planning_msgs__srv__SetGuidanceActive_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__SetGuidanceActive_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__STRUCT_H_
