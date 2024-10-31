// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/plugin_activation__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/plugin_activation__functions.h"
#include "carma_planning_msgs/srv/detail/plugin_activation__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `plugin_name`
// Member `plugin_version`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__PluginActivation_Request__init(message_memory);
}

void PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__PluginActivation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginActivation_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plugin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginActivation_Request, plugin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plugin_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginActivation_Request, plugin_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginActivation_Request, activated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "PluginActivation_Request",  // message name
  4,  // number of fields
  sizeof(carma_planning_msgs__srv__PluginActivation_Request),
  PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_member_array,  // message members
  PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_type_support_handle = {
  0,
  &PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation_Request)() {
  PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_type_support_handle.typesupport_identifier) {
    PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PluginActivation_Request__rosidl_typesupport_introspection_c__PluginActivation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_activation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_activation__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_activation__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__PluginActivation_Response__init(message_memory);
}

void PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__PluginActivation_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_member_array[1] = {
  {
    "newstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginActivation_Response, newstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "PluginActivation_Response",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__PluginActivation_Response),
  PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_member_array,  // message members
  PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_type_support_handle = {
  0,
  &PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation_Response)() {
  if (!PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_type_support_handle.typesupport_identifier) {
    PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PluginActivation_Response__rosidl_typesupport_introspection_c__PluginActivation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_activation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "PluginActivation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation)() {
  if (!carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginActivation_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__plugin_activation__rosidl_typesupport_introspection_c__PluginActivation_service_type_support_handle;
}
