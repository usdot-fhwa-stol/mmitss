// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__IntersectionReferenceID__init(message_memory);
}

void IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__IntersectionReferenceID__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_member_array[3] = {
  {
    "region",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__IntersectionReferenceID, region),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "region_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__IntersectionReferenceID, region_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__IntersectionReferenceID, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "IntersectionReferenceID",  // message name
  3,  // number of fields
  sizeof(j2735_v2x_msgs__msg__IntersectionReferenceID),
  IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_member_array,  // message members
  IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_type_support_handle = {
  0,
  &IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, IntersectionReferenceID)() {
  if (!IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_type_support_handle.typesupport_identifier) {
    IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntersectionReferenceID__rosidl_typesupport_introspection_c__IntersectionReferenceID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
