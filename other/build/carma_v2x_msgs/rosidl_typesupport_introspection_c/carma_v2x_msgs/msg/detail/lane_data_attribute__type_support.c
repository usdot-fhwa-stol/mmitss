// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__functions.h"
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.h"


// Include directives for member types
// Member `speed_limits`
#include "carma_v2x_msgs/msg/regulatory_speed_limit.h"
// Member `speed_limits`
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__LaneDataAttribute__init(message_memory);
}

void LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__LaneDataAttribute__fini(message_memory);
}

size_t LaneDataAttribute__rosidl_typesupport_introspection_c__size_function__RegulatorySpeedLimit__speed_limits(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__RegulatorySpeedLimit__speed_limits(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__RegulatorySpeedLimit__speed_limits(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneDataAttribute__rosidl_typesupport_introspection_c__resize_function__RegulatorySpeedLimit__speed_limits(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__fini(member);
  return carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[7] = {
  {
    "choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_end_point_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, path_end_point_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_crown_point_center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, lane_crown_point_center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_crown_point_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, lane_crown_point_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_crown_point_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, lane_crown_point_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, lane_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__LaneDataAttribute, speed_limits),  // bytes offset in struct
    NULL,  // default value
    LaneDataAttribute__rosidl_typesupport_introspection_c__size_function__RegulatorySpeedLimit__speed_limits,  // size() function pointer
    LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__RegulatorySpeedLimit__speed_limits,  // get_const(index) function pointer
    LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__RegulatorySpeedLimit__speed_limits,  // get(index) function pointer
    LaneDataAttribute__rosidl_typesupport_introspection_c__resize_function__RegulatorySpeedLimit__speed_limits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "LaneDataAttribute",  // message name
  7,  // number of fields
  sizeof(carma_v2x_msgs__msg__LaneDataAttribute),
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array,  // message members
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle = {
  0,
  &LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, LaneDataAttribute)() {
  LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RegulatorySpeedLimit)();
  if (!LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle.typesupport_identifier) {
    LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
