// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__STRUCT_H_
#define CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ind_list'
#include "carma_msgs/msg/detail/light_bar_indicator__struct.h"
// Member 'cda_list'
#include "carma_msgs/msg/detail/light_bar_cda_type__struct.h"
// Member 'requester_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RequestIndicatorControl in the package carma_msgs.
typedef struct carma_msgs__srv__RequestIndicatorControl_Request
{
  carma_msgs__msg__LightBarIndicator__Sequence ind_list;
  carma_msgs__msg__LightBarCDAType__Sequence cda_list;
  rosidl_runtime_c__String requester_name;
} carma_msgs__srv__RequestIndicatorControl_Request;

// Struct for a sequence of carma_msgs__srv__RequestIndicatorControl_Request.
typedef struct carma_msgs__srv__RequestIndicatorControl_Request__Sequence
{
  carma_msgs__srv__RequestIndicatorControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__RequestIndicatorControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ind_list'
// already included above
// #include "carma_msgs/msg/detail/light_bar_indicator__struct.h"
// Member 'cda_list'
// already included above
// #include "carma_msgs/msg/detail/light_bar_cda_type__struct.h"

// Struct defined in srv/RequestIndicatorControl in the package carma_msgs.
typedef struct carma_msgs__srv__RequestIndicatorControl_Response
{
  carma_msgs__msg__LightBarIndicator__Sequence ind_list;
  carma_msgs__msg__LightBarCDAType__Sequence cda_list;
} carma_msgs__srv__RequestIndicatorControl_Response;

// Struct for a sequence of carma_msgs__srv__RequestIndicatorControl_Response.
typedef struct carma_msgs__srv__RequestIndicatorControl_Response__Sequence
{
  carma_msgs__srv__RequestIndicatorControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__RequestIndicatorControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__STRUCT_H_
