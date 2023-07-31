// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:srv/GetDriverApi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/srv/detail/get_driver_api__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/srv/detail/get_driver_api__functions.h"
#include "carma_driver_msgs/srv/detail/get_driver_api__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__GetDriverApi_Request__init(message_memory);
}

void GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__GetDriverApi_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__GetDriverApi_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "GetDriverApi_Request",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__GetDriverApi_Request),
  GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_member_array,  // message members
  GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_type_support_handle = {
  0,
  &GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi_Request)() {
  if (!GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_type_support_handle.typesupport_identifier) {
    GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDriverApi_Request__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/get_driver_api__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_driver_api__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_driver_api__struct.h"


// Include directives for member types
// Member `api_list`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__GetDriverApi_Response__init(message_memory);
}

void GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__GetDriverApi_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_member_array[1] = {
  {
    "api_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__GetDriverApi_Response, api_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "GetDriverApi_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__GetDriverApi_Response),
  GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_member_array,  // message members
  GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_type_support_handle = {
  0,
  &GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi_Response)() {
  if (!GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_type_support_handle.typesupport_identifier) {
    GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDriverApi_Response__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_driver_api__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_members = {
  "carma_driver_msgs__srv",  // service namespace
  "GetDriverApi",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_Request_message_type_support_handle,
  NULL  // response message
  // carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_type_support_handle = {
  0,
  &carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi)() {
  if (!carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, GetDriverApi_Response)()->data;
  }

  return &carma_driver_msgs__srv__detail__get_driver_api__rosidl_typesupport_introspection_c__GetDriverApi_service_type_support_handle;
}
