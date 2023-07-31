// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.h"


// Include directives for member types
// Member `events`
#include "j2735_v2x_msgs/msg/vehicle_event_flags.h"
// Member `events`
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__rosidl_typesupport_introspection_c.h"
// Member `path_history`
#include "carma_v2x_msgs/msg/path_history.h"
// Member `path_history`
#include "carma_v2x_msgs/msg/detail/path_history__rosidl_typesupport_introspection_c.h"
// Member `path_prediction`
#include "carma_v2x_msgs/msg/path_prediction.h"
// Member `path_prediction`
#include "carma_v2x_msgs/msg/detail/path_prediction__rosidl_typesupport_introspection_c.h"
// Member `lights`
#include "j2735_v2x_msgs/msg/exterior_lights.h"
// Member `lights`
#include "j2735_v2x_msgs/msg/detail/exterior_lights__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__VehicleSafetyExtensions__init(message_memory);
}

void VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_member_array[5] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__VehicleSafetyExtensions, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__VehicleSafetyExtensions, events),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_history",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__VehicleSafetyExtensions, path_history),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_prediction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__VehicleSafetyExtensions, path_prediction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__VehicleSafetyExtensions, lights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "VehicleSafetyExtensions",  // message name
  5,  // number of fields
  sizeof(carma_v2x_msgs__msg__VehicleSafetyExtensions),
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_member_array,  // message members
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_type_support_handle = {
  0,
  &VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, VehicleSafetyExtensions)() {
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleEventFlags)();
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PathHistory)();
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PathPrediction)();
  VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ExteriorLights)();
  if (!VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_type_support_handle.typesupport_identifier) {
    VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleSafetyExtensions__rosidl_typesupport_introspection_c__VehicleSafetyExtensions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
