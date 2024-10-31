// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/GetAvailableRoutes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/get_available_routes__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/get_available_routes__functions.h"
#include "carma_planning_msgs/srv/detail/get_available_routes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__GetAvailableRoutes_Request__init(message_memory);
}

void GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__GetAvailableRoutes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__GetAvailableRoutes_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "GetAvailableRoutes_Request",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__GetAvailableRoutes_Request),
  GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_member_array,  // message members
  GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_type_support_handle = {
  0,
  &GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes_Request)() {
  if (!GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_type_support_handle.typesupport_identifier) {
    GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAvailableRoutes_Request__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/get_available_routes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_available_routes__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_available_routes__struct.h"


// Include directives for member types
// Member `available_routes`
#include "carma_planning_msgs/msg/route.h"
// Member `available_routes`
#include "carma_planning_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__GetAvailableRoutes_Response__init(message_memory);
}

void GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__GetAvailableRoutes_Response__fini(message_memory);
}

size_t GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__size_function__Route__available_routes(
  const void * untyped_member)
{
  const carma_planning_msgs__msg__Route__Sequence * member =
    (const carma_planning_msgs__msg__Route__Sequence *)(untyped_member);
  return member->size;
}

const void * GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__get_const_function__Route__available_routes(
  const void * untyped_member, size_t index)
{
  const carma_planning_msgs__msg__Route__Sequence * member =
    (const carma_planning_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__get_function__Route__available_routes(
  void * untyped_member, size_t index)
{
  carma_planning_msgs__msg__Route__Sequence * member =
    (carma_planning_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__resize_function__Route__available_routes(
  void * untyped_member, size_t size)
{
  carma_planning_msgs__msg__Route__Sequence * member =
    (carma_planning_msgs__msg__Route__Sequence *)(untyped_member);
  carma_planning_msgs__msg__Route__Sequence__fini(member);
  return carma_planning_msgs__msg__Route__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_member_array[1] = {
  {
    "available_routes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__GetAvailableRoutes_Response, available_routes),  // bytes offset in struct
    NULL,  // default value
    GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__size_function__Route__available_routes,  // size() function pointer
    GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__get_const_function__Route__available_routes,  // get_const(index) function pointer
    GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__get_function__Route__available_routes,  // get(index) function pointer
    GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__resize_function__Route__available_routes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "GetAvailableRoutes_Response",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__GetAvailableRoutes_Response),
  GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_member_array,  // message members
  GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_type_support_handle = {
  0,
  &GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes_Response)() {
  GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, Route)();
  if (!GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_type_support_handle.typesupport_identifier) {
    GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAvailableRoutes_Response__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/get_available_routes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "GetAvailableRoutes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes)() {
  if (!carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, GetAvailableRoutes_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__get_available_routes__rosidl_typesupport_introspection_c__GetAvailableRoutes_service_type_support_handle;
}
