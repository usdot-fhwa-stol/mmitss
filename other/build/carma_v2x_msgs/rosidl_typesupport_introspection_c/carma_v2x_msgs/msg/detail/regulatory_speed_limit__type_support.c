// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.h"


// Include directives for member types
// Member `type`
#include "j2735_v2x_msgs/msg/speed_limit_type.h"
// Member `type`
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__RegulatorySpeedLimit__init(message_memory);
}

void RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RegulatorySpeedLimit, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RegulatorySpeedLimit, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "RegulatorySpeedLimit",  // message name
  2,  // number of fields
  sizeof(carma_v2x_msgs__msg__RegulatorySpeedLimit),
  RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_member_array,  // message members
  RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_init_function,  // function to initialize message memory (memory has to be allocated)
  RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_type_support_handle = {
  0,
  &RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RegulatorySpeedLimit)() {
  RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpeedLimitType)();
  if (!RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_type_support_handle.typesupport_identifier) {
    RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegulatorySpeedLimit__rosidl_typesupport_introspection_c__RegulatorySpeedLimit_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
