// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__struct.h"


// Include directives for member types
// Member `reqid`
#include "j2735_v2x_msgs/msg/id64b.h"
// Member `reqid`
#include "j2735_v2x_msgs/msg/detail/id64b__rosidl_typesupport_introspection_c.h"
// Member `bounds`
#include "j2735_v2x_msgs/msg/traffic_control_bounds.h"
// Member `bounds`
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrafficControlRequestV01__init(message_memory);
}

void TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrafficControlRequestV01__fini(message_memory);
}

size_t TrafficControlRequestV01__rosidl_typesupport_introspection_c__size_function__TrafficControlBounds__bounds(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * member =
    (const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficControlRequestV01__rosidl_typesupport_introspection_c__get_const_function__TrafficControlBounds__bounds(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * member =
    (const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficControlRequestV01__rosidl_typesupport_introspection_c__get_function__TrafficControlBounds__bounds(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * member =
    (j2735_v2x_msgs__msg__TrafficControlBounds__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficControlRequestV01__rosidl_typesupport_introspection_c__resize_function__TrafficControlBounds__bounds(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * member =
    (j2735_v2x_msgs__msg__TrafficControlBounds__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__fini(member);
  return j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_member_array[4] = {
  {
    "reqid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlRequestV01, reqid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reqseq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlRequestV01, reqseq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlRequestV01, scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlRequestV01, bounds),  // bytes offset in struct
    NULL,  // default value
    TrafficControlRequestV01__rosidl_typesupport_introspection_c__size_function__TrafficControlBounds__bounds,  // size() function pointer
    TrafficControlRequestV01__rosidl_typesupport_introspection_c__get_const_function__TrafficControlBounds__bounds,  // get_const(index) function pointer
    TrafficControlRequestV01__rosidl_typesupport_introspection_c__get_function__TrafficControlBounds__bounds,  // get(index) function pointer
    TrafficControlRequestV01__rosidl_typesupport_introspection_c__resize_function__TrafficControlBounds__bounds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrafficControlRequestV01",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrafficControlRequestV01),
  TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_member_array,  // message members
  TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_type_support_handle = {
  0,
  &TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlRequestV01)() {
  TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Id64b)();
  TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlBounds)();
  if (!TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_type_support_handle.typesupport_identifier) {
    TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficControlRequestV01__rosidl_typesupport_introspection_c__TrafficControlRequestV01_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
