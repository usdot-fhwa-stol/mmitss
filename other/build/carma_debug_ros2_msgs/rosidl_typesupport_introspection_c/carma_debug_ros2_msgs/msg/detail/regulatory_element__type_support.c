// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__rosidl_typesupport_introspection_c.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__functions.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.h"


// Include directives for member types
// Member `rule_name`
// Member `participants`
// Member `direction`
// Member `left_participants`
// Member `right_participants`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_debug_ros2_msgs__msg__RegulatoryElement__init(message_memory);
}

void RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_fini_function(void * message_memory)
{
  carma_debug_ros2_msgs__msg__RegulatoryElement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_member_array[9] = {
  {
    "rule_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, rule_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "participants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, participants),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unsupported_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, unsupported_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_gap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, min_gap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, speed_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_participants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, left_participants),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_participants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, right_participants),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__RegulatoryElement, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_members = {
  "carma_debug_ros2_msgs__msg",  // message namespace
  "RegulatoryElement",  // message name
  9,  // number of fields
  sizeof(carma_debug_ros2_msgs__msg__RegulatoryElement),
  RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_member_array,  // message members
  RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_init_function,  // function to initialize message memory (memory has to be allocated)
  RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_type_support_handle = {
  0,
  &RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, RegulatoryElement)() {
  if (!RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_type_support_handle.typesupport_identifier) {
    RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegulatoryElement__rosidl_typesupport_introspection_c__RegulatoryElement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
