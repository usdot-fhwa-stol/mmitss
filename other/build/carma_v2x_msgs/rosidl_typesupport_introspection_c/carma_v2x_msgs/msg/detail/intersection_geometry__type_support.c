// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/intersection_geometry__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/intersection_geometry__functions.h"
#include "carma_v2x_msgs/msg/detail/intersection_geometry__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/intersection_reference_id.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
// Member `ref_point`
#include "carma_v2x_msgs/msg/position3_d.h"
// Member `ref_point`
#include "carma_v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `speed_limits`
#include "carma_v2x_msgs/msg/regulatory_speed_limit.h"
// Member `speed_limits`
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__rosidl_typesupport_introspection_c.h"
// Member `lane_list`
#include "carma_v2x_msgs/msg/generic_lane.h"
// Member `lane_list`
#include "carma_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"
// Member `preempt_priority_list`
#include "j2735_v2x_msgs/msg/signal_control_zone.h"
// Member `preempt_priority_list`
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__IntersectionGeometry__init(message_memory);
}

void IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__IntersectionGeometry__fini(message_memory);
}

size_t IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__RegulatorySpeedLimit__speed_limits(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__RegulatorySpeedLimit__speed_limits(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (const carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__RegulatorySpeedLimit__speed_limits(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__RegulatorySpeedLimit__speed_limits(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence * member =
    (carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__fini(member);
  return carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(member, size);
}

size_t IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__GenericLane__lane_list(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (const carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return member->size;
}

const void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__GenericLane__lane_list(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (const carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__GenericLane__lane_list(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__GenericLane__lane_list(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__GenericLane__Sequence * member =
    (carma_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__GenericLane__Sequence__fini(member);
  return carma_v2x_msgs__msg__GenericLane__Sequence__init(member, size);
}

size_t IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__SignalControlZone__preempt_priority_list(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__SignalControlZone__Sequence * member =
    (const j2735_v2x_msgs__msg__SignalControlZone__Sequence *)(untyped_member);
  return member->size;
}

const void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__SignalControlZone__preempt_priority_list(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__SignalControlZone__Sequence * member =
    (const j2735_v2x_msgs__msg__SignalControlZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__SignalControlZone__preempt_priority_list(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__SignalControlZone__Sequence * member =
    (j2735_v2x_msgs__msg__SignalControlZone__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__SignalControlZone__preempt_priority_list(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__SignalControlZone__Sequence * member =
    (j2735_v2x_msgs__msg__SignalControlZone__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__SignalControlZone__Sequence__fini(member);
  return j2735_v2x_msgs__msg__SignalControlZone__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[12] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, name),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, name_exists),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, id),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, revision),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, ref_point),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, lane_width),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, lane_width_exists),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, speed_limits),  // bytes offset in struct
    NULL,  // default value
    IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__RegulatorySpeedLimit__speed_limits,  // size() function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__RegulatorySpeedLimit__speed_limits,  // get_const(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__RegulatorySpeedLimit__speed_limits,  // get(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__RegulatorySpeedLimit__speed_limits  // resize(index) function pointer
  },
  {
    "speed_limits_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, speed_limits_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, lane_list),  // bytes offset in struct
    NULL,  // default value
    IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__GenericLane__lane_list,  // size() function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__GenericLane__lane_list,  // get_const(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__GenericLane__lane_list,  // get(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__GenericLane__lane_list  // resize(index) function pointer
  },
  {
    "preempt_priority_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, preempt_priority_list),  // bytes offset in struct
    NULL,  // default value
    IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__SignalControlZone__preempt_priority_list,  // size() function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__SignalControlZone__preempt_priority_list,  // get_const(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__SignalControlZone__preempt_priority_list,  // get(index) function pointer
    IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__SignalControlZone__preempt_priority_list  // resize(index) function pointer
  },
  {
    "preempt_priority_data_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__IntersectionGeometry, preempt_priority_data_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "IntersectionGeometry",  // message name
  12,  // number of fields
  sizeof(carma_v2x_msgs__msg__IntersectionGeometry),
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array,  // message members
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle = {
  0,
  &IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, IntersectionGeometry)() {
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, IntersectionReferenceID)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Position3D)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RegulatorySpeedLimit)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, GenericLane)();
  IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SignalControlZone)();
  if (!IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle.typesupport_identifier) {
    IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
