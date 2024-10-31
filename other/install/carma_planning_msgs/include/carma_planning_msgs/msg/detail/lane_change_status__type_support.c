// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/lane_change_status__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/lane_change_status__functions.h"
#include "carma_planning_msgs/msg/detail/lane_change_status__struct.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__LaneChangeStatus__init(message_memory);
}

void LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__LaneChangeStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__LaneChangeStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__LaneChangeStatus, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "LaneChangeStatus",  // message name
  2,  // number of fields
  sizeof(carma_planning_msgs__msg__LaneChangeStatus),
  LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_member_array,  // message members
  LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle = {
  0,
  &LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, LaneChangeStatus)() {
  if (!LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle.typesupport_identifier) {
    LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
