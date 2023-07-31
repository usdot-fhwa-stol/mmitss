// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_localization_msgs/msg/detail/localization_status_report__rosidl_typesupport_introspection_c.h"
#include "carma_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_localization_msgs/msg/detail/localization_status_report__functions.h"
#include "carma_localization_msgs/msg/detail/localization_status_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_localization_msgs__msg__LocalizationStatusReport__init(message_memory);
}

void LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_fini_function(void * message_memory)
{
  carma_localization_msgs__msg__LocalizationStatusReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_localization_msgs__msg__LocalizationStatusReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_localization_msgs__msg__LocalizationStatusReport, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_members = {
  "carma_localization_msgs__msg",  // message namespace
  "LocalizationStatusReport",  // message name
  2,  // number of fields
  sizeof(carma_localization_msgs__msg__LocalizationStatusReport),
  LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_member_array,  // message members
  LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_type_support_handle = {
  0,
  &LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_localization_msgs, msg, LocalizationStatusReport)() {
  LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_type_support_handle.typesupport_identifier) {
    LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalizationStatusReport__rosidl_typesupport_introspection_c__LocalizationStatusReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
