// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/TrafficControlRequestPolygon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/traffic_control_request_polygon__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_request_polygon__functions.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_request_polygon__struct.h"


// Include directives for member types
// Member `polygon_list`
#include "carma_v2x_msgs/msg/position3_d.h"
// Member `polygon_list`
#include "carma_v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__TrafficControlRequestPolygon__init(message_memory);
}

void TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__TrafficControlRequestPolygon__fini(message_memory);
}

size_t TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__size_function__Position3D__polygon_list(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__Position3D__Sequence * member =
    (const carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__get_const_function__Position3D__polygon_list(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__Position3D__Sequence * member =
    (const carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__get_function__Position3D__polygon_list(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__Position3D__Sequence * member =
    (carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__resize_function__Position3D__polygon_list(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__Position3D__Sequence * member =
    (carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__Position3D__Sequence__fini(member);
  return carma_v2x_msgs__msg__Position3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_member_array[1] = {
  {
    "polygon_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlRequestPolygon, polygon_list),  // bytes offset in struct
    NULL,  // default value
    TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__size_function__Position3D__polygon_list,  // size() function pointer
    TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__get_const_function__Position3D__polygon_list,  // get_const(index) function pointer
    TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__get_function__Position3D__polygon_list,  // get(index) function pointer
    TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__resize_function__Position3D__polygon_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "TrafficControlRequestPolygon",  // message name
  1,  // number of fields
  sizeof(carma_v2x_msgs__msg__TrafficControlRequestPolygon),
  TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_member_array,  // message members
  TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_type_support_handle = {
  0,
  &TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, TrafficControlRequestPolygon)() {
  TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Position3D)();
  if (!TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_type_support_handle.typesupport_identifier) {
    TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficControlRequestPolygon__rosidl_typesupport_introspection_c__TrafficControlRequestPolygon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
