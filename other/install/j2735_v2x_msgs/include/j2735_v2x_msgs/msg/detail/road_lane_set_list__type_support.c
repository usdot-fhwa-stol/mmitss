// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/RoadLaneSetList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__struct.h"


// Include directives for member types
// Member `road_lane_set_list`
#include "j2735_v2x_msgs/msg/generic_lane.h"
// Member `road_lane_set_list`
#include "j2735_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__RoadLaneSetList__init(message_memory);
}

void RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__RoadLaneSetList__fini(message_memory);
}

size_t RoadLaneSetList__rosidl_typesupport_introspection_c__size_function__GenericLane__road_lane_set_list(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (const j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return member->size;
}

const void * RoadLaneSetList__rosidl_typesupport_introspection_c__get_const_function__GenericLane__road_lane_set_list(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (const j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RoadLaneSetList__rosidl_typesupport_introspection_c__get_function__GenericLane__road_lane_set_list(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RoadLaneSetList__rosidl_typesupport_introspection_c__resize_function__GenericLane__road_lane_set_list(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__GenericLane__Sequence__fini(member);
  return j2735_v2x_msgs__msg__GenericLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_member_array[1] = {
  {
    "road_lane_set_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__RoadLaneSetList, road_lane_set_list),  // bytes offset in struct
    NULL,  // default value
    RoadLaneSetList__rosidl_typesupport_introspection_c__size_function__GenericLane__road_lane_set_list,  // size() function pointer
    RoadLaneSetList__rosidl_typesupport_introspection_c__get_const_function__GenericLane__road_lane_set_list,  // get_const(index) function pointer
    RoadLaneSetList__rosidl_typesupport_introspection_c__get_function__GenericLane__road_lane_set_list,  // get(index) function pointer
    RoadLaneSetList__rosidl_typesupport_introspection_c__resize_function__GenericLane__road_lane_set_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "RoadLaneSetList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__RoadLaneSetList),
  RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_member_array,  // message members
  RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_type_support_handle = {
  0,
  &RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, RoadLaneSetList)() {
  RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, GenericLane)();
  if (!RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_type_support_handle.typesupport_identifier) {
    RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoadLaneSetList__rosidl_typesupport_introspection_c__RoadLaneSetList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
