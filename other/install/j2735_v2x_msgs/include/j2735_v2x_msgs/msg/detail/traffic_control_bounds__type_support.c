// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__struct.h"


// Include directives for member types
// Member `offsets`
#include "j2735_v2x_msgs/msg/offset_point.h"
// Member `offsets`
#include "j2735_v2x_msgs/msg/detail/offset_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrafficControlBounds__init(message_memory);
}

void TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrafficControlBounds__fini(message_memory);
}

size_t TrafficControlBounds__rosidl_typesupport_introspection_c__size_function__OffsetPoint__offsets(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * TrafficControlBounds__rosidl_typesupport_introspection_c__get_const_function__OffsetPoint__offsets(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__OffsetPoint ** member =
    (const j2735_v2x_msgs__msg__OffsetPoint **)(untyped_member);
  return &(*member)[index];
}

void * TrafficControlBounds__rosidl_typesupport_introspection_c__get_function__OffsetPoint__offsets(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__OffsetPoint ** member =
    (j2735_v2x_msgs__msg__OffsetPoint **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_member_array[4] = {
  {
    "oldest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlBounds, oldest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reflon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlBounds, reflon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reflat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlBounds, reflat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offsets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlBounds, offsets),  // bytes offset in struct
    NULL,  // default value
    TrafficControlBounds__rosidl_typesupport_introspection_c__size_function__OffsetPoint__offsets,  // size() function pointer
    TrafficControlBounds__rosidl_typesupport_introspection_c__get_const_function__OffsetPoint__offsets,  // get_const(index) function pointer
    TrafficControlBounds__rosidl_typesupport_introspection_c__get_function__OffsetPoint__offsets,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrafficControlBounds",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrafficControlBounds),
  TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_member_array,  // message members
  TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_type_support_handle = {
  0,
  &TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlBounds)() {
  TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, OffsetPoint)();
  if (!TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_type_support_handle.typesupport_identifier) {
    TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficControlBounds__rosidl_typesupport_introspection_c__TrafficControlBounds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
