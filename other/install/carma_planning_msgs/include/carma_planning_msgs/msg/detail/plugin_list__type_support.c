// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/PluginList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/plugin_list__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/plugin_list__functions.h"
#include "carma_planning_msgs/msg/detail/plugin_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `plugins`
#include "carma_planning_msgs/msg/plugin.h"
// Member `plugins`
#include "carma_planning_msgs/msg/detail/plugin__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PluginList__rosidl_typesupport_introspection_c__PluginList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__PluginList__init(message_memory);
}

void PluginList__rosidl_typesupport_introspection_c__PluginList_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__PluginList__fini(message_memory);
}

size_t PluginList__rosidl_typesupport_introspection_c__size_function__Plugin__plugins(
  const void * untyped_member)
{
  const carma_planning_msgs__msg__Plugin__Sequence * member =
    (const carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return member->size;
}

const void * PluginList__rosidl_typesupport_introspection_c__get_const_function__Plugin__plugins(
  const void * untyped_member, size_t index)
{
  const carma_planning_msgs__msg__Plugin__Sequence * member =
    (const carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PluginList__rosidl_typesupport_introspection_c__get_function__Plugin__plugins(
  void * untyped_member, size_t index)
{
  carma_planning_msgs__msg__Plugin__Sequence * member =
    (carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PluginList__rosidl_typesupport_introspection_c__resize_function__Plugin__plugins(
  void * untyped_member, size_t size)
{
  carma_planning_msgs__msg__Plugin__Sequence * member =
    (carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  carma_planning_msgs__msg__Plugin__Sequence__fini(member);
  return carma_planning_msgs__msg__Plugin__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PluginList__rosidl_typesupport_introspection_c__PluginList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__PluginList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plugins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__PluginList, plugins),  // bytes offset in struct
    NULL,  // default value
    PluginList__rosidl_typesupport_introspection_c__size_function__Plugin__plugins,  // size() function pointer
    PluginList__rosidl_typesupport_introspection_c__get_const_function__Plugin__plugins,  // get_const(index) function pointer
    PluginList__rosidl_typesupport_introspection_c__get_function__Plugin__plugins,  // get(index) function pointer
    PluginList__rosidl_typesupport_introspection_c__resize_function__Plugin__plugins  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PluginList__rosidl_typesupport_introspection_c__PluginList_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "PluginList",  // message name
  2,  // number of fields
  sizeof(carma_planning_msgs__msg__PluginList),
  PluginList__rosidl_typesupport_introspection_c__PluginList_message_member_array,  // message members
  PluginList__rosidl_typesupport_introspection_c__PluginList_init_function,  // function to initialize message memory (memory has to be allocated)
  PluginList__rosidl_typesupport_introspection_c__PluginList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PluginList__rosidl_typesupport_introspection_c__PluginList_message_type_support_handle = {
  0,
  &PluginList__rosidl_typesupport_introspection_c__PluginList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, PluginList)() {
  PluginList__rosidl_typesupport_introspection_c__PluginList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PluginList__rosidl_typesupport_introspection_c__PluginList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, Plugin)();
  if (!PluginList__rosidl_typesupport_introspection_c__PluginList_message_type_support_handle.typesupport_identifier) {
    PluginList__rosidl_typesupport_introspection_c__PluginList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PluginList__rosidl_typesupport_introspection_c__PluginList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
