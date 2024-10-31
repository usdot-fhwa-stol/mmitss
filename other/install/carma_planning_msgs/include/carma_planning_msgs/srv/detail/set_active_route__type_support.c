// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/SetActiveRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/set_active_route__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/set_active_route__functions.h"
#include "carma_planning_msgs/srv/detail/set_active_route__struct.h"


// Include directives for member types
// Member `route_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `destination_points`
#include "carma_v2x_msgs/msg/position3_d.h"
// Member `destination_points`
#include "carma_v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__SetActiveRoute_Request__init(message_memory);
}

void SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__SetActiveRoute_Request__fini(message_memory);
}

size_t SetActiveRoute_Request__rosidl_typesupport_introspection_c__size_function__Position3D__destination_points(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__Position3D__Sequence * member =
    (const carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  return member->size;
}

const void * SetActiveRoute_Request__rosidl_typesupport_introspection_c__get_const_function__Position3D__destination_points(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__Position3D__Sequence * member =
    (const carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetActiveRoute_Request__rosidl_typesupport_introspection_c__get_function__Position3D__destination_points(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__Position3D__Sequence * member =
    (carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetActiveRoute_Request__rosidl_typesupport_introspection_c__resize_function__Position3D__destination_points(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__Position3D__Sequence * member =
    (carma_v2x_msgs__msg__Position3D__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__Position3D__Sequence__fini(member);
  return carma_v2x_msgs__msg__Position3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_member_array[3] = {
  {
    "choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__SetActiveRoute_Request, choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__SetActiveRoute_Request, route_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__SetActiveRoute_Request, destination_points),  // bytes offset in struct
    NULL,  // default value
    SetActiveRoute_Request__rosidl_typesupport_introspection_c__size_function__Position3D__destination_points,  // size() function pointer
    SetActiveRoute_Request__rosidl_typesupport_introspection_c__get_const_function__Position3D__destination_points,  // get_const(index) function pointer
    SetActiveRoute_Request__rosidl_typesupport_introspection_c__get_function__Position3D__destination_points,  // get(index) function pointer
    SetActiveRoute_Request__rosidl_typesupport_introspection_c__resize_function__Position3D__destination_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "SetActiveRoute_Request",  // message name
  3,  // number of fields
  sizeof(carma_planning_msgs__srv__SetActiveRoute_Request),
  SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_member_array,  // message members
  SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_type_support_handle = {
  0,
  &SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute_Request)() {
  SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Position3D)();
  if (!SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_type_support_handle.typesupport_identifier) {
    SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetActiveRoute_Request__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/set_active_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/set_active_route__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/set_active_route__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__SetActiveRoute_Response__init(message_memory);
}

void SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__SetActiveRoute_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_member_array[1] = {
  {
    "error_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__SetActiveRoute_Response, error_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "SetActiveRoute_Response",  // message name
  1,  // number of fields
  sizeof(carma_planning_msgs__srv__SetActiveRoute_Response),
  SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_member_array,  // message members
  SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_type_support_handle = {
  0,
  &SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute_Response)() {
  if (!SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_type_support_handle.typesupport_identifier) {
    SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetActiveRoute_Response__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/set_active_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "SetActiveRoute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute)() {
  if (!carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, SetActiveRoute_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__set_active_route__rosidl_typesupport_introspection_c__SetActiveRoute_service_type_support_handle;
}
