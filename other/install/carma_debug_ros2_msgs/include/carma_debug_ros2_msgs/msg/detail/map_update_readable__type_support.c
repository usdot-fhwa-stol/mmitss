// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__rosidl_typesupport_introspection_c.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__functions.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `format_version`
// Member `map_version`
// Member `route_id`
// Member `traffic_control_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `update_list`
// Member `remove_list`
#include "carma_debug_ros2_msgs/msg/lanelet_id_regulatory_element_pair.h"
// Member `update_list`
// Member `remove_list`
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_debug_ros2_msgs__msg__MapUpdateReadable__init(message_memory);
}

void MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_fini_function(void * message_memory)
{
  carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(message_memory);
}

size_t MapUpdateReadable__rosidl_typesupport_introspection_c__size_function__LaneletIdRegulatoryElementPair__update_list(
  const void * untyped_member)
{
  const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  return member->size;
}

const void * MapUpdateReadable__rosidl_typesupport_introspection_c__get_const_function__LaneletIdRegulatoryElementPair__update_list(
  const void * untyped_member, size_t index)
{
  const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapUpdateReadable__rosidl_typesupport_introspection_c__get_function__LaneletIdRegulatoryElementPair__update_list(
  void * untyped_member, size_t index)
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapUpdateReadable__rosidl_typesupport_introspection_c__resize_function__LaneletIdRegulatoryElementPair__update_list(
  void * untyped_member, size_t size)
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(member);
  return carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(member, size);
}

size_t MapUpdateReadable__rosidl_typesupport_introspection_c__size_function__LaneletIdRegulatoryElementPair__remove_list(
  const void * untyped_member)
{
  const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  return member->size;
}

const void * MapUpdateReadable__rosidl_typesupport_introspection_c__get_const_function__LaneletIdRegulatoryElementPair__remove_list(
  const void * untyped_member, size_t index)
{
  const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapUpdateReadable__rosidl_typesupport_introspection_c__get_function__LaneletIdRegulatoryElementPair__remove_list(
  void * untyped_member, size_t index)
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapUpdateReadable__rosidl_typesupport_introspection_c__resize_function__LaneletIdRegulatoryElementPair__remove_list(
  void * untyped_member, size_t size)
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * member =
    (carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *)(untyped_member);
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(member);
  return carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "format_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, format_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, route_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, route_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "invalidates_route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, invalidates_route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_control_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, traffic_control_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, update_list),  // bytes offset in struct
    NULL,  // default value
    MapUpdateReadable__rosidl_typesupport_introspection_c__size_function__LaneletIdRegulatoryElementPair__update_list,  // size() function pointer
    MapUpdateReadable__rosidl_typesupport_introspection_c__get_const_function__LaneletIdRegulatoryElementPair__update_list,  // get_const(index) function pointer
    MapUpdateReadable__rosidl_typesupport_introspection_c__get_function__LaneletIdRegulatoryElementPair__update_list,  // get(index) function pointer
    MapUpdateReadable__rosidl_typesupport_introspection_c__resize_function__LaneletIdRegulatoryElementPair__update_list  // resize(index) function pointer
  },
  {
    "remove_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__MapUpdateReadable, remove_list),  // bytes offset in struct
    NULL,  // default value
    MapUpdateReadable__rosidl_typesupport_introspection_c__size_function__LaneletIdRegulatoryElementPair__remove_list,  // size() function pointer
    MapUpdateReadable__rosidl_typesupport_introspection_c__get_const_function__LaneletIdRegulatoryElementPair__remove_list,  // get_const(index) function pointer
    MapUpdateReadable__rosidl_typesupport_introspection_c__get_function__LaneletIdRegulatoryElementPair__remove_list,  // get(index) function pointer
    MapUpdateReadable__rosidl_typesupport_introspection_c__resize_function__LaneletIdRegulatoryElementPair__remove_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_members = {
  "carma_debug_ros2_msgs__msg",  // message namespace
  "MapUpdateReadable",  // message name
  9,  // number of fields
  sizeof(carma_debug_ros2_msgs__msg__MapUpdateReadable),
  MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_member_array,  // message members
  MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_init_function,  // function to initialize message memory (memory has to be allocated)
  MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_type_support_handle = {
  0,
  &MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, MapUpdateReadable)() {
  MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair)();
  MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair)();
  if (!MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_type_support_handle.typesupport_identifier) {
    MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapUpdateReadable__rosidl_typesupport_introspection_c__MapUpdateReadable_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
