// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"


// Include directives for member types
// Member `requester_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `indicator`
#include "carma_msgs/msg/light_bar_indicator.h"
// Member `indicator`
#include "carma_msgs/msg/detail/light_bar_indicator__rosidl_typesupport_introspection_c.h"
// Member `cda_type`
#include "carma_msgs/msg/light_bar_cda_type.h"
// Member `cda_type`
#include "carma_msgs/msg/detail/light_bar_cda_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SetLightBarIndicator_Request__init(message_memory);
}

void SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_member_array[4] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLightBarIndicator_Request, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requester_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLightBarIndicator_Request, requester_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "indicator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLightBarIndicator_Request, indicator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cda_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLightBarIndicator_Request, cda_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SetLightBarIndicator_Request",  // message name
  4,  // number of fields
  sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Request),
  SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_member_array,  // message members
  SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_type_support_handle = {
  0,
  &SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator_Request)() {
  SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarIndicator)();
  SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarCDAType)();
  if (!SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_type_support_handle.typesupport_identifier) {
    SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLightBarIndicator_Request__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SetLightBarIndicator_Response__init(message_memory);
}

void SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_member_array[1] = {
  {
    "status_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SetLightBarIndicator_Response, status_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SetLightBarIndicator_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Response),
  SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_member_array,  // message members
  SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_type_support_handle = {
  0,
  &SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator_Response)() {
  if (!SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_type_support_handle.typesupport_identifier) {
    SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLightBarIndicator_Response__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_members = {
  "carma_driver_msgs__srv",  // service namespace
  "SetLightBarIndicator",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_Request_message_type_support_handle,
  NULL  // response message
  // carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_type_support_handle = {
  0,
  &carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator)() {
  if (!carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SetLightBarIndicator_Response)()->data;
  }

  return &carma_driver_msgs__srv__detail__set_light_bar_indicator__rosidl_typesupport_introspection_c__SetLightBarIndicator_service_type_support_handle;
}
