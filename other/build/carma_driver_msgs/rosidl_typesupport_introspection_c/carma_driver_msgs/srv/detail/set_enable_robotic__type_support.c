// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:srv/SetEnableRobotic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/srv/detail/set_enable_robotic__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/srv/detail/set_enable_robotic__functions.h"
#include "carma_driver_msgs/srv/detail/set_enable_robotic__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SetEnableRobotic_Request__init(message_memory);
}

void SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SetEnableRobotic_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_member_array[1] = {
  {
    "set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetEnableRobotic_Request, set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SetEnableRobotic_Request",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SetEnableRobotic_Request),
  SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_member_array,  // message members
  SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_type_support_handle = {
  0,
  &SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic_Request)() {
  if (!SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_type_support_handle.typesupport_identifier) {
    SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetEnableRobotic_Request__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/set_enable_robotic__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_enable_robotic__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_enable_robotic__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SetEnableRobotic_Response__init(message_memory);
}

void SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SetEnableRobotic_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetEnableRobotic_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SetEnableRobotic_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SetEnableRobotic_Response),
  SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_member_array,  // message members
  SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_type_support_handle = {
  0,
  &SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic_Response)() {
  if (!SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_type_support_handle.typesupport_identifier) {
    SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetEnableRobotic_Response__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_enable_robotic__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_members = {
  "carma_driver_msgs__srv",  // service namespace
  "SetEnableRobotic",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_Request_message_type_support_handle,
  NULL  // response message
  // carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_type_support_handle = {
  0,
  &carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic)() {
  if (!carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetEnableRobotic_Response)()->data;
  }

  return &carma_driver_msgs__srv__detail__set_enable_robotic__rosidl_typesupport_introspection_c__SetEnableRobotic_service_type_support_handle;
}
