// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/GetPluginApi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/get_plugin_api__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/get_plugin_api__functions.h"
#include "carma_planning_msgs/srv/detail/get_plugin_api__struct.h"


// Include directives for member types
// Member `capability`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__GetPluginApi_Request__init(message_memory);
}

void GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__GetPluginApi_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_member_array[1] = {
  {
    "capability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__GetPluginApi_Request, capability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "GetPluginApi_Request",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__GetPluginApi_Request),
  GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_member_array,  // message members
  GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_type_support_handle = {
  0,
  &GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi_Request)() {
  if (!GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_type_support_handle.typesupport_identifier) {
    GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPluginApi_Request__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/get_plugin_api__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_plugin_api__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_plugin_api__struct.h"


// Include directives for member types
// Member `plan_service`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__GetPluginApi_Response__init(message_memory);
}

void GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__GetPluginApi_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_member_array[1] = {
  {
    "plan_service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__GetPluginApi_Response, plan_service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "GetPluginApi_Response",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__GetPluginApi_Response),
  GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_member_array,  // message members
  GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_type_support_handle = {
  0,
  &GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi_Response)() {
  if (!GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_type_support_handle.typesupport_identifier) {
    GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPluginApi_Response__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_plugin_api__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "GetPluginApi",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi)() {
  if (!carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetPluginApi_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__get_plugin_api__rosidl_typesupport_introspection_c__GetPluginApi_service_type_support_handle;
}
