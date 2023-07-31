// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/GetRegisteredPlugins.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/get_registered_plugins__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/get_registered_plugins__functions.h"
#include "carma_planning_msgs/srv/detail/get_registered_plugins__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__GetRegisteredPlugins_Request__init(message_memory);
}

void GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__GetRegisteredPlugins_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__GetRegisteredPlugins_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "GetRegisteredPlugins_Request",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__GetRegisteredPlugins_Request),
  GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_member_array,  // message members
  GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_type_support_handle = {
  0,
  &GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins_Request)() {
  if (!GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_type_support_handle.typesupport_identifier) {
    GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetRegisteredPlugins_Request__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/get_registered_plugins__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_registered_plugins__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_registered_plugins__struct.h"


// Include directives for member types
// Member `plugins`
#include "carma_planning_msgs/msg/plugin.h"
// Member `plugins`
#include "carma_planning_msgs/msg/detail/plugin__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__GetRegisteredPlugins_Response__init(message_memory);
}

void GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__GetRegisteredPlugins_Response__fini(message_memory);
}

size_t GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__size_function__Plugin__plugins(
  const void * untyped_member)
{
  const carma_planning_msgs__msg__Plugin__Sequence * member =
    (const carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return member->size;
}

const void * GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__get_const_function__Plugin__plugins(
  const void * untyped_member, size_t index)
{
  const carma_planning_msgs__msg__Plugin__Sequence * member =
    (const carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__get_function__Plugin__plugins(
  void * untyped_member, size_t index)
{
  carma_planning_msgs__msg__Plugin__Sequence * member =
    (carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__resize_function__Plugin__plugins(
  void * untyped_member, size_t size)
{
  carma_planning_msgs__msg__Plugin__Sequence * member =
    (carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  carma_planning_msgs__msg__Plugin__Sequence__fini(member);
  return carma_planning_msgs__msg__Plugin__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_member_array[1] = {
  {
    "plugins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__GetRegisteredPlugins_Response, plugins),  // bytes offset in struct
    NULL,  // default value
    GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__size_function__Plugin__plugins,  // size() function pointer
    GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__get_const_function__Plugin__plugins,  // get_const(index) function pointer
    GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__get_function__Plugin__plugins,  // get(index) function pointer
    GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__resize_function__Plugin__plugins  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "GetRegisteredPlugins_Response",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__GetRegisteredPlugins_Response),
  GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_member_array,  // message members
  GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_type_support_handle = {
  0,
  &GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins_Response)() {
  GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, Plugin)();
  if (!GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_type_support_handle.typesupport_identifier) {
    GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetRegisteredPlugins_Response__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_registered_plugins__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "GetRegisteredPlugins",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins)() {
  if (!carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetRegisteredPlugins_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__get_registered_plugins__rosidl_typesupport_introspection_c__GetRegisteredPlugins_service_type_support_handle;
}
