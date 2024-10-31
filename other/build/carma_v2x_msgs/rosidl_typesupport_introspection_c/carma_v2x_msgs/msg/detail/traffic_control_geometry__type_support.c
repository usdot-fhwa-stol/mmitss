// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/traffic_control_geometry__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_geometry__struct.h"


// Include directives for member types
// Member `proj`
// Member `datum`
#include "rosidl_runtime_c/string_functions.h"
// Member `reftime`
#include "builtin_interfaces/msg/time.h"
// Member `reftime`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "carma_v2x_msgs/msg/path_node.h"
// Member `nodes`
#include "carma_v2x_msgs/msg/detail/path_node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__TrafficControlGeometry__init(message_memory);
}

void TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__TrafficControlGeometry__fini(message_memory);
}

size_t TrafficControlGeometry__rosidl_typesupport_introspection_c__size_function__PathNode__nodes(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__PathNode__Sequence * member =
    (const carma_v2x_msgs__msg__PathNode__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficControlGeometry__rosidl_typesupport_introspection_c__get_const_function__PathNode__nodes(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__PathNode__Sequence * member =
    (const carma_v2x_msgs__msg__PathNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficControlGeometry__rosidl_typesupport_introspection_c__get_function__PathNode__nodes(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__PathNode__Sequence * member =
    (carma_v2x_msgs__msg__PathNode__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficControlGeometry__rosidl_typesupport_introspection_c__resize_function__PathNode__nodes(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__PathNode__Sequence * member =
    (carma_v2x_msgs__msg__PathNode__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__PathNode__Sequence__fini(member);
  return carma_v2x_msgs__msg__PathNode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_member_array[8] = {
  {
    "proj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, proj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "datum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, datum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reftime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, reftime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reflon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, reflon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reflat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, reflat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "refelv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, refelv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlGeometry, nodes),  // bytes offset in struct
    NULL,  // default value
    TrafficControlGeometry__rosidl_typesupport_introspection_c__size_function__PathNode__nodes,  // size() function pointer
    TrafficControlGeometry__rosidl_typesupport_introspection_c__get_const_function__PathNode__nodes,  // get_const(index) function pointer
    TrafficControlGeometry__rosidl_typesupport_introspection_c__get_function__PathNode__nodes,  // get(index) function pointer
    TrafficControlGeometry__rosidl_typesupport_introspection_c__resize_function__PathNode__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "TrafficControlGeometry",  // message name
  8,  // number of fields
  sizeof(carma_v2x_msgs__msg__TrafficControlGeometry),
  TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_member_array,  // message members
  TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_type_support_handle = {
  0,
  &TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, TrafficControlGeometry)() {
  TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PathNode)();
  if (!TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_type_support_handle.typesupport_identifier) {
    TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficControlGeometry__rosidl_typesupport_introspection_c__TrafficControlGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
