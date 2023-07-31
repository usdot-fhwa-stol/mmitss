// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/mobility_response__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/mobility_response__functions.h"
#include "carma_v2x_msgs/msg/detail/mobility_response__struct.h"


// Include directives for member types
// Member `m_header`
#include "carma_v2x_msgs/msg/mobility_header.h"
// Member `m_header`
#include "carma_v2x_msgs/msg/detail/mobility_header__rosidl_typesupport_introspection_c.h"
// Member `plan_type`
#include "carma_v2x_msgs/msg/plan_type.h"
// Member `plan_type`
#include "carma_v2x_msgs/msg/detail/plan_type__rosidl_typesupport_introspection_c.h"
// Member `reason`
#include "carma_v2x_msgs/msg/mobility_reason.h"
// Member `reason`
#include "carma_v2x_msgs/msg/detail/mobility_reason__rosidl_typesupport_introspection_c.h"
// Member `repeat`
#include "carma_v2x_msgs/msg/mobility_repeat.h"
// Member `repeat`
#include "carma_v2x_msgs/msg/detail/mobility_repeat__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__MobilityResponse__init(message_memory);
}

void MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__MobilityResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_member_array[6] = {
  {
    "m_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityResponse, m_header),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__MobilityResponse, urgency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityResponse, is_accepted),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__MobilityResponse, plan_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityResponse, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repeat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MobilityResponse, repeat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "MobilityResponse",  // message name
  6,  // number of fields
  sizeof(carma_v2x_msgs__msg__MobilityResponse),
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_member_array,  // message members
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_type_support_handle = {
  0,
  &MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityResponse)() {
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityHeader)();
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PlanType)();
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityReason)();
  MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityRepeat)();
  if (!MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_type_support_handle.typesupport_identifier) {
    MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MobilityResponse__rosidl_typesupport_introspection_c__MobilityResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
