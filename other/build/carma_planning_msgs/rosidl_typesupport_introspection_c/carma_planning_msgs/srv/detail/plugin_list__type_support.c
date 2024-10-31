// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/PluginList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/plugin_list__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/plugin_list__functions.h"
#include "carma_planning_msgs/srv/detail/plugin_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__PluginList_Request__init(message_memory);
}

void PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__PluginList_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginList_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "PluginList_Request",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__PluginList_Request),
  PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_member_array,  // message members
  PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_type_support_handle = {
  0,
  &PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList_Request)() {
  if (!PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_type_support_handle.typesupport_identifier) {
    PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PluginList_Request__rosidl_typesupport_introspection_c__PluginList_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_list__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `plugins`
#include "carma_planning_msgs/msg/plugin.h"
// Member `plugins`
#include "carma_planning_msgs/msg/detail/plugin__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__PluginList_Response__init(message_memory);
}

void PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__PluginList_Response__fini(message_memory);
}

size_t PluginList_Response__rosidl_typesupport_introspection_c__size_function__Plugin__plugins(
  const void * untyped_member)
{
  const carma_planning_msgs__msg__Plugin__Sequence * member =
    (const carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return member->size;
}

const void * PluginList_Response__rosidl_typesupport_introspection_c__get_const_function__Plugin__plugins(
  const void * untyped_member, size_t index)
{
  const carma_planning_msgs__msg__Plugin__Sequence * member =
    (const carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PluginList_Response__rosidl_typesupport_introspection_c__get_function__Plugin__plugins(
  void * untyped_member, size_t index)
{
  carma_planning_msgs__msg__Plugin__Sequence * member =
    (carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PluginList_Response__rosidl_typesupport_introspection_c__resize_function__Plugin__plugins(
  void * untyped_member, size_t size)
{
  carma_planning_msgs__msg__Plugin__Sequence * member =
    (carma_planning_msgs__msg__Plugin__Sequence *)(untyped_member);
  carma_planning_msgs__msg__Plugin__Sequence__fini(member);
  return carma_planning_msgs__msg__Plugin__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginList_Response, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plugins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PluginList_Response, plugins),  // bytes offset in struct
    NULL,  // default value
    PluginList_Response__rosidl_typesupport_introspection_c__size_function__Plugin__plugins,  // size() function pointer
    PluginList_Response__rosidl_typesupport_introspection_c__get_const_function__Plugin__plugins,  // get_const(index) function pointer
    PluginList_Response__rosidl_typesupport_introspection_c__get_function__Plugin__plugins,  // get(index) function pointer
    PluginList_Response__rosidl_typesupport_introspection_c__resize_function__Plugin__plugins  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "PluginList_Response",  // message name
  2,  // number of fields
  sizeof(carma_planning_msgs__srv__PluginList_Response),
  PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_member_array,  // message members
  PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_type_support_handle = {
  0,
  &PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList_Response)() {
  PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, Plugin)();
  if (!PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_type_support_handle.typesupport_identifier) {
    PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PluginList_Response__rosidl_typesupport_introspection_c__PluginList_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "PluginList",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList)() {
  if (!carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PluginList_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__plugin_list__rosidl_typesupport_introspection_c__PluginList_service_type_support_handle;
}
