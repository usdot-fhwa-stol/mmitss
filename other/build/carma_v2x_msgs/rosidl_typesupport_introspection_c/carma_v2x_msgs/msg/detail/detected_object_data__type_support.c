// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/DetectedObjectData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/detected_object_data__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/detected_object_data__functions.h"
#include "carma_v2x_msgs/msg/detail/detected_object_data__struct.h"


// Include directives for member types
// Member `detected_object_common_data`
#include "carma_v2x_msgs/msg/detected_object_common_data.h"
// Member `detected_object_common_data`
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__rosidl_typesupport_introspection_c.h"
// Member `detected_object_optional_data`
#include "carma_v2x_msgs/msg/detected_object_optional_data.h"
// Member `detected_object_optional_data`
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__DetectedObjectData__init(message_memory);
}

void DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__DetectedObjectData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_member_array[3] = {
  {
    "detected_object_common_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectData, detected_object_common_data),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__DetectedObjectData, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detected_object_optional_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectData, detected_object_optional_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "DetectedObjectData",  // message name
  3,  // number of fields
  sizeof(carma_v2x_msgs__msg__DetectedObjectData),
  DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_member_array,  // message members
  DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_type_support_handle = {
  0,
  &DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedObjectData)() {
  DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedObjectCommonData)();
  DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedObjectOptionalData)();
  if (!DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_type_support_handle.typesupport_identifier) {
    DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedObjectData__rosidl_typesupport_introspection_c__DetectedObjectData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
