// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__rosidl_typesupport_introspection_c.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__functions.h"
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__struct.h"


// Include directives for member types
// Member `width_confidence`
// Member `length_confidence`
// Member `height_confidence`
#include "j3224_v2x_msgs/msg/size_value_confidence.h"
// Member `width_confidence`
// Member `length_confidence`
// Member `height_confidence`
#include "j3224_v2x_msgs/msg/detail/size_value_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j3224_v2x_msgs__msg__ObstacleSizeConfidence__init(message_memory);
}

void ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_fini_function(void * message_memory)
{
  j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_member_array[4] = {
  {
    "width_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__ObstacleSizeConfidence, width_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__ObstacleSizeConfidence, length_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__ObstacleSizeConfidence, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__ObstacleSizeConfidence, height_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_members = {
  "j3224_v2x_msgs__msg",  // message namespace
  "ObstacleSizeConfidence",  // message name
  4,  // number of fields
  sizeof(j3224_v2x_msgs__msg__ObstacleSizeConfidence),
  ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_member_array,  // message members
  ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_type_support_handle = {
  0,
  &ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, ObstacleSizeConfidence)() {
  ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, SizeValueConfidence)();
  ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, SizeValueConfidence)();
  ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, SizeValueConfidence)();
  if (!ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_type_support_handle.typesupport_identifier) {
    ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObstacleSizeConfidence__rosidl_typesupport_introspection_c__ObstacleSizeConfidence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
