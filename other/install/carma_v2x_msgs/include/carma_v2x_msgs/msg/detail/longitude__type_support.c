// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/longitude__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/longitude__functions.h"
#include "carma_v2x_msgs/msg/detail/longitude__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Longitude__rosidl_typesupport_introspection_c__Longitude_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__Longitude__init(message_memory);
}

void Longitude__rosidl_typesupport_introspection_c__Longitude_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__Longitude__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Longitude__rosidl_typesupport_introspection_c__Longitude_message_member_array[2] = {
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Longitude, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unavailable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Longitude, unavailable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Longitude__rosidl_typesupport_introspection_c__Longitude_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "Longitude",  // message name
  2,  // number of fields
  sizeof(carma_v2x_msgs__msg__Longitude),
  Longitude__rosidl_typesupport_introspection_c__Longitude_message_member_array,  // message members
  Longitude__rosidl_typesupport_introspection_c__Longitude_init_function,  // function to initialize message memory (memory has to be allocated)
  Longitude__rosidl_typesupport_introspection_c__Longitude_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Longitude__rosidl_typesupport_introspection_c__Longitude_message_type_support_handle = {
  0,
  &Longitude__rosidl_typesupport_introspection_c__Longitude_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Longitude)() {
  if (!Longitude__rosidl_typesupport_introspection_c__Longitude_message_type_support_handle.typesupport_identifier) {
    Longitude__rosidl_typesupport_introspection_c__Longitude_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Longitude__rosidl_typesupport_introspection_c__Longitude_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
