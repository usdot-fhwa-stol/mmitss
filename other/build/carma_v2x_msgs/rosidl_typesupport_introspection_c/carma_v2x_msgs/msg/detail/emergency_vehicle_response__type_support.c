// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__functions.h"
#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__struct.h"


// Include directives for member types
// Member `m_header`
#include "carma_v2x_msgs/msg/mobility_header.h"
// Member `m_header`
#include "carma_v2x_msgs/msg/detail/mobility_header__rosidl_typesupport_introspection_c.h"
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__EmergencyVehicleResponse__init(message_memory);
}

void EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_member_array[4] = {
  {
    "m_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__EmergencyVehicleResponse, m_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_change_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__EmergencyVehicleResponse, can_change_lanes),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__EmergencyVehicleResponse, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__EmergencyVehicleResponse, reason_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "EmergencyVehicleResponse",  // message name
  4,  // number of fields
  sizeof(carma_v2x_msgs__msg__EmergencyVehicleResponse),
  EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_member_array,  // message members
  EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_type_support_handle = {
  0,
  &EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, EmergencyVehicleResponse)() {
  EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MobilityHeader)();
  if (!EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_type_support_handle.typesupport_identifier) {
    EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EmergencyVehicleResponse__rosidl_typesupport_introspection_c__EmergencyVehicleResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
