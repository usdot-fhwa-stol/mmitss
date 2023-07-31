// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"


// Include directives for member types
// Member `local_node`
#include "j2735_v2x_msgs/msg/node_attribute_xy.h"
// Member `local_node`
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__rosidl_typesupport_introspection_c.h"
// Member `disabled`
// Member `enabled`
#include "j2735_v2x_msgs/msg/segment_attribute_xy.h"
// Member `disabled`
// Member `enabled`
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__rosidl_typesupport_introspection_c.h"
// Member `lane_attribute_list`
#include "carma_v2x_msgs/msg/lane_data_attribute.h"
// Member `lane_attribute_list`
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__NodeAttributeSetXY__init(message_memory);
}

void NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__NodeAttributeSetXY__fini(message_memory);
}

size_t NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__NodeAttributeXY__local_node(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * member =
    (const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeAttributeXY__local_node(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * member =
    (const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__NodeAttributeXY__local_node(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * member =
    (j2735_v2x_msgs__msg__NodeAttributeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__NodeAttributeXY__local_node(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * member =
    (j2735_v2x_msgs__msg__NodeAttributeXY__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__fini(member);
  return j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__init(member, size);
}

size_t NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__SegmentAttributeXY__disabled(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__SegmentAttributeXY__disabled(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__SegmentAttributeXY__disabled(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__SegmentAttributeXY__disabled(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__fini(member);
  return j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__init(member, size);
}

size_t NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__SegmentAttributeXY__enabled(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__SegmentAttributeXY__enabled(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (const j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__SegmentAttributeXY__enabled(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__SegmentAttributeXY__enabled(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence * member =
    (j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__fini(member);
  return j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__init(member, size);
}

size_t NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__LaneDataAttribute__lane_attribute_list(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__LaneDataAttribute__Sequence * member =
    (const carma_v2x_msgs__msg__LaneDataAttribute__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__lane_attribute_list(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__LaneDataAttribute__Sequence * member =
    (const carma_v2x_msgs__msg__LaneDataAttribute__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__lane_attribute_list(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence * member =
    (carma_v2x_msgs__msg__LaneDataAttribute__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__LaneDataAttribute__lane_attribute_list(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence * member =
    (carma_v2x_msgs__msg__LaneDataAttribute__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(member);
  return carma_v2x_msgs__msg__LaneDataAttribute__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[12] = {
  {
    "local_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, local_node),  // bytes offset in struct
    NULL,  // default value
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__NodeAttributeXY__local_node,  // size() function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeAttributeXY__local_node,  // get_const(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__NodeAttributeXY__local_node,  // get(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__NodeAttributeXY__local_node  // resize(index) function pointer
  },
  {
    "local_node_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, local_node_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, disabled),  // bytes offset in struct
    NULL,  // default value
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__SegmentAttributeXY__disabled,  // size() function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__SegmentAttributeXY__disabled,  // get_const(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__SegmentAttributeXY__disabled,  // get(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__SegmentAttributeXY__disabled  // resize(index) function pointer
  },
  {
    "disabled_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, disabled_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, enabled),  // bytes offset in struct
    NULL,  // default value
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__SegmentAttributeXY__enabled,  // size() function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__SegmentAttributeXY__enabled,  // get_const(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__SegmentAttributeXY__enabled,  // get(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__SegmentAttributeXY__enabled  // resize(index) function pointer
  },
  {
    "enabled_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, enabled_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_attribute_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, lane_attribute_list),  // bytes offset in struct
    NULL,  // default value
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__LaneDataAttribute__lane_attribute_list,  // size() function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__lane_attribute_list,  // get_const(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__lane_attribute_list,  // get(index) function pointer
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__LaneDataAttribute__lane_attribute_list  // resize(index) function pointer
  },
  {
    "data_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, data_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, d_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_width_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, d_width_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, d_elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_elevation_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeAttributeSetXY, d_elevation_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "NodeAttributeSetXY",  // message name
  12,  // number of fields
  sizeof(carma_v2x_msgs__msg__NodeAttributeSetXY),
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array,  // message members
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle = {
  0,
  &NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, NodeAttributeSetXY)() {
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, NodeAttributeXY)();
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SegmentAttributeXY)();
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SegmentAttributeXY)();
  NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, LaneDataAttribute)();
  if (!NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle.typesupport_identifier) {
    NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
