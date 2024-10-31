// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/road_segment__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/road_segment__functions.h"
#include "carma_v2x_msgs/msg/detail/road_segment__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/road_segment_reference_id.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__rosidl_typesupport_introspection_c.h"
// Member `ref_point`
#include "carma_v2x_msgs/msg/position3_d.h"
// Member `ref_point`
#include "carma_v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `speed_limits`
#include "carma_v2x_msgs/msg/regulatory_speed_limit.h"
// Member `speed_limits`
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__rosidl_typesupport_introspection_c.h"
// Member `road_lane_set_list`
#include "carma_v2x_msgs/msg/generic_lane.h"
// Member `road_lane_set_list`
#include "carma_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__RoadSegment__init(message_memory);
}

void RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__RoadSegment__fini(message_memory);
}

size_t RoadSegment__rosidl_typesupport_introspection_c__size_function__RegulatorySpeedLimit__speed_limits(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * RoadSegment__rosidl_typesupport_introspection_c__get_const_function__RegulatorySpeedLimit__speed_limits(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RoadSegment__rosidl_typesupport_introspection_c__get_function__RegulatorySpeedLimit__speed_limits(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RoadSegment__rosidl_typesupport_introspection_c__resize_function__RegulatorySpeedLimit__speed_limits(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__fini(member);
  return carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(member, size);
}

size_t RoadSegment__rosidl_typesupport_introspection_c__size_function__GenericLane__road_lane_set_list(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (const carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return member->size;
}

const void * RoadSegment__rosidl_typesupport_introspection_c__get_const_function__GenericLane__road_lane_set_list(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (const carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RoadSegment__rosidl_typesupport_introspection_c__get_function__GenericLane__road_lane_set_list(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RoadSegment__rosidl_typesupport_introspection_c__resize_function__GenericLane__road_lane_set_list(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__GenericLane__Sequence__fini(member);
  return carma_v2x_msgs__msg__GenericLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_member_array[10] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, name),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__RoadSegment, name_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, ref_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, lane_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, lane_width_exists),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__RoadSegment, speed_limits),  // bytes offset in struct
    NULL,  // default value
    RoadSegment__rosidl_typesupport_introspection_c__size_function__RegulatorySpeedLimit__speed_limits,  // size() function pointer
    RoadSegment__rosidl_typesupport_introspection_c__get_const_function__RegulatorySpeedLimit__speed_limits,  // get_const(index) function pointer
    RoadSegment__rosidl_typesupport_introspection_c__get_function__RegulatorySpeedLimit__speed_limits,  // get(index) function pointer
    RoadSegment__rosidl_typesupport_introspection_c__resize_function__RegulatorySpeedLimit__speed_limits  // resize(index) function pointer
  },
  {
    "speed_limits_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, speed_limits_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_lane_set_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__RoadSegment, road_lane_set_list),  // bytes offset in struct
    NULL,  // default value
    RoadSegment__rosidl_typesupport_introspection_c__size_function__GenericLane__road_lane_set_list,  // size() function pointer
    RoadSegment__rosidl_typesupport_introspection_c__get_const_function__GenericLane__road_lane_set_list,  // get_const(index) function pointer
    RoadSegment__rosidl_typesupport_introspection_c__get_function__GenericLane__road_lane_set_list,  // get(index) function pointer
    RoadSegment__rosidl_typesupport_introspection_c__resize_function__GenericLane__road_lane_set_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "RoadSegment",  // message name
  10,  // number of fields
  sizeof(carma_v2x_msgs__msg__RoadSegment),
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_member_array,  // message members
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_type_support_handle = {
  0,
  &RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RoadSegment)() {
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, RoadSegmentReferenceID)();
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Position3D)();
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RegulatorySpeedLimit)();
  RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, GenericLane)();
  if (!RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_type_support_handle.typesupport_identifier) {
    RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoadSegment__rosidl_typesupport_introspection_c__RoadSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
