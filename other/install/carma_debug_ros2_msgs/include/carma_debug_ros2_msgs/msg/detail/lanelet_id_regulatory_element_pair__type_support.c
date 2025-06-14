// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__rosidl_typesupport_introspection_c.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.h"


// Include directives for member types
// Member `element`
#include "carma_debug_ros2_msgs/msg/regulatory_element.h"
// Member `element`
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__init(message_memory);
}

void LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_fini_function(void * message_memory)
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_member_array[2] = {
  {
    "lanelet_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair, lanelet_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "element",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair, element),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_members = {
  "carma_debug_ros2_msgs__msg",  // message namespace
  "LaneletIdRegulatoryElementPair",  // message name
  2,  // number of fields
  sizeof(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair),
  LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_member_array,  // message members
  LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_type_support_handle = {
  0,
  &LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair)() {
  LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, RegulatoryElement)();
  if (!LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_type_support_handle.typesupport_identifier) {
    LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneletIdRegulatoryElementPair__rosidl_typesupport_introspection_c__LaneletIdRegulatoryElementPair_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
