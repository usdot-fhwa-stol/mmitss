// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/msg/detail/light_bar_status__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/msg/detail/light_bar_status__functions.h"
#include "carma_driver_msgs/msg/detail/light_bar_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__msg__LightBarStatus__init(message_memory);
}

void LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_fini_function(void * message_memory)
{
  carma_driver_msgs__msg__LightBarStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_member_array[8] = {
  {
    "green_solid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, green_solid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_solid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, yellow_solid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, right_arrow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, left_arrow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sides_solid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, sides_solid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flash",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, flash),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_flash",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, green_flash),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "takedown",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__LightBarStatus, takedown),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_members = {
  "carma_driver_msgs__msg",  // message namespace
  "LightBarStatus",  // message name
  8,  // number of fields
  sizeof(carma_driver_msgs__msg__LightBarStatus),
  LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_member_array,  // message members
  LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_type_support_handle = {
  0,
  &LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, msg, LightBarStatus)() {
  if (!LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_type_support_handle.typesupport_identifier) {
    LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LightBarStatus__rosidl_typesupport_introspection_c__LightBarStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
