// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/generic_lane__functions.h"
#include "carma_v2x_msgs/msg/detail/generic_lane__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `lane_attributes`
#include "j2735_v2x_msgs/msg/lane_attributes.h"
// Member `lane_attributes`
#include "j2735_v2x_msgs/msg/detail/lane_attributes__rosidl_typesupport_introspection_c.h"
// Member `maneuvers`
#include "j2735_v2x_msgs/msg/allowed_maneuvers.h"
// Member `maneuvers`
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__rosidl_typesupport_introspection_c.h"
// Member `node_list`
#include "carma_v2x_msgs/msg/node_list_xy.h"
// Member `node_list`
#include "carma_v2x_msgs/msg/detail/node_list_xy__rosidl_typesupport_introspection_c.h"
// Member `connect_to_list`
#include "j2735_v2x_msgs/msg/connection.h"
// Member `connect_to_list`
#include "j2735_v2x_msgs/msg/detail/connection__rosidl_typesupport_introspection_c.h"
// Member `overlay_lane_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__GenericLane__init(message_memory);
}

void GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__GenericLane__fini(message_memory);
}

size_t GenericLane__rosidl_typesupport_introspection_c__size_function__Connection__connect_to_list(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__Connection__Sequence * member =
    (const j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * GenericLane__rosidl_typesupport_introspection_c__get_const_function__Connection__connect_to_list(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__Connection__Sequence * member =
    (const j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GenericLane__rosidl_typesupport_introspection_c__get_function__Connection__connect_to_list(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__Connection__Sequence * member =
    (j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GenericLane__rosidl_typesupport_introspection_c__resize_function__Connection__connect_to_list(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__Connection__Sequence * member =
    (j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__Connection__Sequence__fini(member);
  return j2735_v2x_msgs__msg__Connection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[15] = {
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, name_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ingress_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, ingress_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ingress_approach_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, ingress_approach_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egress_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, egress_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egress_approach_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, egress_approach_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, lane_attributes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, maneuvers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, maneuvers_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, node_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connect_to_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, connect_to_list),  // bytes offset in struct
    NULL,  // default value
    GenericLane__rosidl_typesupport_introspection_c__size_function__Connection__connect_to_list,  // size() function pointer
    GenericLane__rosidl_typesupport_introspection_c__get_const_function__Connection__connect_to_list,  // get_const(index) function pointer
    GenericLane__rosidl_typesupport_introspection_c__get_function__Connection__connect_to_list,  // get(index) function pointer
    GenericLane__rosidl_typesupport_introspection_c__resize_function__Connection__connect_to_list  // resize(index) function pointer
  },
  {
    "connects_to_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, connects_to_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overlay_lane_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, overlay_lane_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overlay_lane_list_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__GenericLane, overlay_lane_list_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "GenericLane",  // message name
  15,  // number of fields
  sizeof(carma_v2x_msgs__msg__GenericLane),
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array,  // message members
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function,  // function to initialize message memory (memory has to be allocated)
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle = {
  0,
  &GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, GenericLane)() {
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneAttributes)();
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AllowedManeuvers)();
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, NodeListXY)();
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Connection)();
  if (!GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier) {
    GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
