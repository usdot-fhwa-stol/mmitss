// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:srv/SetLights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/srv/detail/set_lights__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/srv/detail/set_lights__functions.h"
#include "carma_driver_msgs/srv/detail/set_lights__struct.h"


// Include directives for member types
// Member `set_state`
#include "carma_driver_msgs/msg/light_bar_status.h"
// Member `set_state`
#include "carma_driver_msgs/msg/detail/light_bar_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SetLights_Request__init(message_memory);
}

void SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SetLights_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_member_array[1] = {
  {
    "set_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLights_Request, set_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SetLights_Request",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SetLights_Request),
  SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_member_array,  // message members
  SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_type_support_handle = {
  0,
  &SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights_Request)() {
  SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, msg, LightBarStatus)();
  if (!SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_type_support_handle.typesupport_identifier) {
    SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLights_Request__rosidl_typesupport_introspection_c__SetLights_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/set_lights__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_lights__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_lights__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SetLights_Response__init(message_memory);
}

void SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SetLights_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLights_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SetLights_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SetLights_Response),
  SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_member_array,  // message members
  SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_type_support_handle = {
  0,
  &SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights_Response)() {
  if (!SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_type_support_handle.typesupport_identifier) {
    SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLights_Response__rosidl_typesupport_introspection_c__SetLights_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_lights__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_members = {
  "carma_driver_msgs__srv",  // service namespace
  "SetLights",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_Request_message_type_support_handle,
  NULL  // response message
  // carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_type_support_handle = {
  0,
  &carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights)() {
  if (!carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLights_Response)()->data;
  }

  return &carma_driver_msgs__srv__detail__set_lights__rosidl_typesupport_introspection_c__SetLights_service_type_support_handle;
}
