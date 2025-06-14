// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_msgs/srv/detail/set_traffic_event__rosidl_typesupport_introspection_c.h"
#include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_msgs/srv/detail/set_traffic_event__functions.h"
#include "carma_msgs/srv/detail/set_traffic_event__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__SetTrafficEvent_Request__init(message_memory);
}

void SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_fini_function(void * message_memory)
{
  carma_msgs__srv__SetTrafficEvent_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_member_array[4] = {
  {
    "up_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__SetTrafficEvent_Request, up_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "down_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__SetTrafficEvent_Request, down_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minimum_gap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__SetTrafficEvent_Request, minimum_gap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "advisory_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__SetTrafficEvent_Request, advisory_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_members = {
  "carma_msgs__srv",  // message namespace
  "SetTrafficEvent_Request",  // message name
  4,  // number of fields
  sizeof(carma_msgs__srv__SetTrafficEvent_Request),
  SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_member_array,  // message members
  SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_type_support_handle = {
  0,
  &SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent_Request)() {
  if (!SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_type_support_handle.typesupport_identifier) {
    SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetTrafficEvent_Request__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__functions.h"
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__SetTrafficEvent_Response__init(message_memory);
}

void SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_fini_function(void * message_memory)
{
  carma_msgs__srv__SetTrafficEvent_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__SetTrafficEvent_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_members = {
  "carma_msgs__srv",  // message namespace
  "SetTrafficEvent_Response",  // message name
  1,  // number of fields
  sizeof(carma_msgs__srv__SetTrafficEvent_Response),
  SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_member_array,  // message members
  SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_type_support_handle = {
  0,
  &SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent_Response)() {
  if (!SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_type_support_handle.typesupport_identifier) {
    SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetTrafficEvent_Response__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_members = {
  "carma_msgs__srv",  // service namespace
  "SetTrafficEvent",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_Request_message_type_support_handle,
  NULL  // response message
  // carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_type_support_handle = {
  0,
  &carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent)() {
  if (!carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_type_support_handle.typesupport_identifier) {
    carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, SetTrafficEvent_Response)()->data;
  }

  return &carma_msgs__srv__detail__set_traffic_event__rosidl_typesupport_introspection_c__SetTrafficEvent_service_type_support_handle;
}
