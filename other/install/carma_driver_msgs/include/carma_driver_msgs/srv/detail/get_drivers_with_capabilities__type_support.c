// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__functions.h"
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.h"


// Include directives for member types
// Member `capabilities`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__GetDriversWithCapabilities_Request__init(message_memory);
}

void GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_member_array[1] = {
  {
    "capabilities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__GetDriversWithCapabilities_Request, capabilities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "GetDriversWithCapabilities_Request",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__GetDriversWithCapabilities_Request),
  GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_member_array,  // message members
  GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_type_support_handle = {
  0,
  &GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Request)() {
  if (!GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_type_support_handle.typesupport_identifier) {
    GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDriversWithCapabilities_Request__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.h"


// Include directives for member types
// Member `driver_data`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__GetDriversWithCapabilities_Response__init(message_memory);
}

void GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_member_array[1] = {
  {
    "driver_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__GetDriversWithCapabilities_Response, driver_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "GetDriversWithCapabilities_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__GetDriversWithCapabilities_Response),
  GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_member_array,  // message members
  GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_type_support_handle = {
  0,
  &GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Response)() {
  if (!GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_type_support_handle.typesupport_identifier) {
    GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDriversWithCapabilities_Response__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_members = {
  "carma_driver_msgs__srv",  // service namespace
  "GetDriversWithCapabilities",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Request_message_type_support_handle,
  NULL  // response message
  // carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_type_support_handle = {
  0,
  &carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities)() {
  if (!carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Response)()->data;
  }

  return &carma_driver_msgs__srv__detail__get_drivers_with_capabilities__rosidl_typesupport_introspection_c__GetDriversWithCapabilities_service_type_support_handle;
}
