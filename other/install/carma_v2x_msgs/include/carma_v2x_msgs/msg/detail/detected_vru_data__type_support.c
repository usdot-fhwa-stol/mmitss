// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/detected_vru_data__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/detected_vru_data__functions.h"
#include "carma_v2x_msgs/msg/detail/detected_vru_data__struct.h"


// Include directives for member types
// Member `basic_type`
#include "j2735_v2x_msgs/msg/personal_device_user_type.h"
// Member `basic_type`
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__rosidl_typesupport_introspection_c.h"
// Member `propulsion`
#include "j2735_v2x_msgs/msg/propelled_information.h"
// Member `propulsion`
#include "j2735_v2x_msgs/msg/detail/propelled_information__rosidl_typesupport_introspection_c.h"
// Member `attachment`
#include "j2735_v2x_msgs/msg/attachment.h"
// Member `attachment`
#include "j2735_v2x_msgs/msg/detail/attachment__rosidl_typesupport_introspection_c.h"
// Member `radius`
#include "carma_v2x_msgs/msg/attachment_radius.h"
// Member `radius`
#include "carma_v2x_msgs/msg/detail/attachment_radius__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__DetectedVRUData__init(message_memory);
}

void DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__DetectedVRUData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_member_array[5] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedVRUData, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basic_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedVRUData, basic_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "propulsion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedVRUData, propulsion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attachment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedVRUData, attachment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedVRUData, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "DetectedVRUData",  // message name
  5,  // number of fields
  sizeof(carma_v2x_msgs__msg__DetectedVRUData),
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_member_array,  // message members
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_type_support_handle = {
  0,
  &DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedVRUData)() {
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PersonalDeviceUserType)();
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PropelledInformation)();
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Attachment)();
  DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, AttachmentRadius)();
  if (!DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_type_support_handle.typesupport_identifier) {
    DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedVRUData__rosidl_typesupport_introspection_c__DetectedVRUData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
