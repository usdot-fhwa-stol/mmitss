// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/check_active_geofence__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/check_active_geofence__functions.h"
#include "carma_perception_msgs/msg/detail/check_active_geofence__struct.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__CheckActiveGeofence__init(message_memory);
}

void CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__CheckActiveGeofence__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_member_array[7] = {
  {
    "is_on_active_geofence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, is_on_active_geofence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, type),  // bytes offset in struct
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
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_next_geofence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, distance_to_next_geofence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minimum_gap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, minimum_gap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "advisory_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__CheckActiveGeofence, advisory_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "CheckActiveGeofence",  // message name
  7,  // number of fields
  sizeof(carma_perception_msgs__msg__CheckActiveGeofence),
  CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_member_array,  // message members
  CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_init_function,  // function to initialize message memory (memory has to be allocated)
  CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_type_support_handle = {
  0,
  &CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, CheckActiveGeofence)() {
  if (!CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_type_support_handle.typesupport_identifier) {
    CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CheckActiveGeofence__rosidl_typesupport_introspection_c__CheckActiveGeofence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
