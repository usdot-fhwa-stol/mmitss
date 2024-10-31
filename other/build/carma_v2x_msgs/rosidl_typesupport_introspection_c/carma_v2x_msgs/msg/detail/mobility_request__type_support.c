// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/MobilityRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/mobility_request__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/mobility_request__functions.h"
#include "carma_v2x_msgs/msg/detail/mobility_request__struct.h"


// Include directives for member types
// Member `m_header`
#include "carma_v2x_msgs/msg/mobility_header.h"
// Member `m_header`
#include "carma_v2x_msgs/msg/detail/mobility_header__rosidl_typesupport_introspection_c.h"
// Member `strategy`
// Member `strategy_params`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan_type`
#include "carma_v2x_msgs/msg/plan_type.h"
// Member `plan_type`
#include "carma_v2x_msgs/msg/detail/plan_type__rosidl_typesupport_introspection_c.h"
// Member `location`
#include "carma_v2x_msgs/msg/location_ecef.h"
// Member `location`
#include "carma_v2x_msgs/msg/detail/location_ecef__rosidl_typesupport_introspection_c.h"
// Member `trajectory`
#include "carma_v2x_msgs/msg/trajectory.h"
// Member `trajectory`
#include "carma_v2x_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__MobilityRequest__init(message_memory);
}

void MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__MobilityRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_member_array[8] = {
  {
    "m_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, m_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strategy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, strategy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, plan_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "urgency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, urgency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strategy_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, strategy_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expiration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityRequest, expiration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "MobilityRequest",  // message name
  8,  // number of fields
  sizeof(carma_v2x_msgs__msg__MobilityRequest),
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_member_array,  // message members
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_type_support_handle = {
  0,
  &MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityRequest)() {
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityHeader)();
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PlanType)();
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, LocationECEF)();
  MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Trajectory)();
  if (!MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_type_support_handle.typesupport_identifier) {
    MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MobilityRequest__rosidl_typesupport_introspection_c__MobilityRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
