// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/node_set_xy__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/node_set_xy__functions.h"
#include "carma_v2x_msgs/msg/detail/node_set_xy__struct.h"


// Include directives for member types
// Member `node_set_xy`
#include "carma_v2x_msgs/msg/node_xy.h"
// Member `node_set_xy`
#include "carma_v2x_msgs/msg/detail/node_xy__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__NodeSetXY__init(message_memory);
}

void NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__NodeSetXY__fini(message_memory);
}

size_t NodeSetXY__rosidl_typesupport_introspection_c__size_function__NodeXY__node_set_xy(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__NodeXY__Sequence * member =
    (const carma_v2x_msgs__msg__NodeXY__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeXY__node_set_xy(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__NodeXY__Sequence * member =
    (const carma_v2x_msgs__msg__NodeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeSetXY__rosidl_typesupport_introspection_c__get_function__NodeXY__node_set_xy(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__NodeXY__Sequence * member =
    (carma_v2x_msgs__msg__NodeXY__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeSetXY__rosidl_typesupport_introspection_c__resize_function__NodeXY__node_set_xy(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__NodeXY__Sequence * member =
    (carma_v2x_msgs__msg__NodeXY__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__NodeXY__Sequence__fini(member);
  return carma_v2x_msgs__msg__NodeXY__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_member_array[1] = {
  {
    "node_set_xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__NodeSetXY, node_set_xy),  // bytes offset in struct
    NULL,  // default value
    NodeSetXY__rosidl_typesupport_introspection_c__size_function__NodeXY__node_set_xy,  // size() function pointer
    NodeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeXY__node_set_xy,  // get_const(index) function pointer
    NodeSetXY__rosidl_typesupport_introspection_c__get_function__NodeXY__node_set_xy,  // get(index) function pointer
    NodeSetXY__rosidl_typesupport_introspection_c__resize_function__NodeXY__node_set_xy  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "NodeSetXY",  // message name
  1,  // number of fields
  sizeof(carma_v2x_msgs__msg__NodeSetXY),
  NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_member_array,  // message members
  NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle = {
  0,
  &NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, NodeSetXY)() {
  NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, NodeXY)();
  if (!NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle.typesupport_identifier) {
    NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
