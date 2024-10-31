// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/obstacle_size__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/obstacle_size__functions.h"
#include "carma_v2x_msgs/msg/detail/obstacle_size__struct.h"


// Include directives for member types
// Member `width`
// Member `length`
// Member `height`
#include "carma_v2x_msgs/msg/size_value.h"
// Member `width`
// Member `length`
// Member `height`
#include "carma_v2x_msgs/msg/detail/size_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__ObstacleSize__init(message_memory);
}

void ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__ObstacleSize__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_member_array[4] = {
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__ObstacleSize, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__ObstacleSize, length),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__ObstacleSize, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__ObstacleSize, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "ObstacleSize",  // message name
  4,  // number of fields
  sizeof(carma_v2x_msgs__msg__ObstacleSize),
  ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_member_array,  // message members
  ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_type_support_handle = {
  0,
  &ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, ObstacleSize)() {
  ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, SizeValue)();
  ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, SizeValue)();
  ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, SizeValue)();
  if (!ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_type_support_handle.typesupport_identifier) {
    ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObstacleSize__rosidl_typesupport_introspection_c__ObstacleSize_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
