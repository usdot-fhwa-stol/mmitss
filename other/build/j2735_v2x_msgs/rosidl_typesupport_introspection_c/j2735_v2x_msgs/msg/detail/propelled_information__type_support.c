// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/propelled_information__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"
#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.h"


// Include directives for member types
// Member `human`
#include "j2735_v2x_msgs/msg/human_propelled_type.h"
// Member `human`
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__rosidl_typesupport_introspection_c.h"
// Member `animal`
#include "j2735_v2x_msgs/msg/animal_propelled_type.h"
// Member `animal`
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__rosidl_typesupport_introspection_c.h"
// Member `motor`
#include "j2735_v2x_msgs/msg/motorized_propelled_type.h"
// Member `motor`
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__PropelledInformation__init(message_memory);
}

void PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__PropelledInformation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_member_array[4] = {
  {
    "choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PropelledInformation, choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "human",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PropelledInformation, human),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "animal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PropelledInformation, animal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PropelledInformation, motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "PropelledInformation",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__PropelledInformation),
  PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_member_array,  // message members
  PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_type_support_handle = {
  0,
  &PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PropelledInformation)() {
  PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, HumanPropelledType)();
  PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AnimalPropelledType)();
  PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, MotorizedPropelledType)();
  if (!PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_type_support_handle.typesupport_identifier) {
    PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PropelledInformation__rosidl_typesupport_introspection_c__PropelledInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
