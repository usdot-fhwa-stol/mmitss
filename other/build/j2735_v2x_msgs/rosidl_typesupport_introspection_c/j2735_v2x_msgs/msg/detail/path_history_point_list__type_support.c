// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__struct.h"


// Include directives for member types
// Member `points`
#include "j2735_v2x_msgs/msg/path_history_point.h"
// Member `points`
#include "j2735_v2x_msgs/msg/detail/path_history_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__PathHistoryPointList__init(message_memory);
}

void PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__PathHistoryPointList__fini(message_memory);
}

size_t PathHistoryPointList__rosidl_typesupport_introspection_c__size_function__PathHistoryPoint__points(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * member =
    (const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * PathHistoryPointList__rosidl_typesupport_introspection_c__get_const_function__PathHistoryPoint__points(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * member =
    (const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PathHistoryPointList__rosidl_typesupport_introspection_c__get_function__PathHistoryPoint__points(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * member =
    (j2735_v2x_msgs__msg__PathHistoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PathHistoryPointList__rosidl_typesupport_introspection_c__resize_function__PathHistoryPoint__points(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * member =
    (j2735_v2x_msgs__msg__PathHistoryPoint__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__fini(member);
  return j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistoryPointList, points),  // bytes offset in struct
    NULL,  // default value
    PathHistoryPointList__rosidl_typesupport_introspection_c__size_function__PathHistoryPoint__points,  // size() function pointer
    PathHistoryPointList__rosidl_typesupport_introspection_c__get_const_function__PathHistoryPoint__points,  // get_const(index) function pointer
    PathHistoryPointList__rosidl_typesupport_introspection_c__get_function__PathHistoryPoint__points,  // get(index) function pointer
    PathHistoryPointList__rosidl_typesupport_introspection_c__resize_function__PathHistoryPoint__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "PathHistoryPointList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__PathHistoryPointList),
  PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_member_array,  // message members
  PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_init_function,  // function to initialize message memory (memory has to be allocated)
  PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_type_support_handle = {
  0,
  &PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PathHistoryPointList)() {
  PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PathHistoryPoint)();
  if (!PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_type_support_handle.typesupport_identifier) {
    PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathHistoryPointList__rosidl_typesupport_introspection_c__PathHistoryPointList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
