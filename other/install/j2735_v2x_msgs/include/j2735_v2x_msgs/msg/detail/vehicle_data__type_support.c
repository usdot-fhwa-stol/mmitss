// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/vehicle_data__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.h"


// Include directives for member types
// Member `height`
#include "j2735_v2x_msgs/msg/vehicle_height.h"
// Member `height`
#include "j2735_v2x_msgs/msg/detail/vehicle_height__rosidl_typesupport_introspection_c.h"
// Member `bumpers`
#include "j2735_v2x_msgs/msg/bumper_heights.h"
// Member `bumpers`
#include "j2735_v2x_msgs/msg/detail/bumper_heights__rosidl_typesupport_introspection_c.h"
// Member `mass`
#include "j2735_v2x_msgs/msg/vehicle_mass.h"
// Member `mass`
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__rosidl_typesupport_introspection_c.h"
// Member `trailer_weight`
#include "j2735_v2x_msgs/msg/trailer_weight.h"
// Member `trailer_weight`
#include "j2735_v2x_msgs/msg/detail/trailer_weight__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleData__rosidl_typesupport_introspection_c__VehicleData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__VehicleData__init(message_memory);
}

void VehicleData__rosidl_typesupport_introspection_c__VehicleData_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__VehicleData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_member_array[5] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleData, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleData, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bumpers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleData, bumpers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleData, mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trailer_weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__VehicleData, trailer_weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "VehicleData",  // message name
  5,  // number of fields
  sizeof(j2735_v2x_msgs__msg__VehicleData),
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_member_array,  // message members
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_type_support_handle = {
  0,
  &VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleData)() {
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleHeight)();
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BumperHeights)();
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleMass)();
  VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrailerWeight)();
  if (!VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_type_support_handle.typesupport_identifier) {
    VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleData__rosidl_typesupport_introspection_c__VehicleData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
