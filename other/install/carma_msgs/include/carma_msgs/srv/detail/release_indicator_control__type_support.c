// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_msgs/srv/detail/release_indicator_control__rosidl_typesupport_introspection_c.h"
#include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_msgs/srv/detail/release_indicator_control__functions.h"
#include "carma_msgs/srv/detail/release_indicator_control__struct.h"


// Include directives for member types
// Member `ind_list`
#include "carma_msgs/msg/light_bar_indicator.h"
// Member `ind_list`
#include "carma_msgs/msg/detail/light_bar_indicator__rosidl_typesupport_introspection_c.h"
// Member `cda_list`
#include "carma_msgs/msg/light_bar_cda_type.h"
// Member `cda_list`
#include "carma_msgs/msg/detail/light_bar_cda_type__rosidl_typesupport_introspection_c.h"
// Member `requester_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__ReleaseIndicatorControl_Request__init(message_memory);
}

void ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_fini_function(void * message_memory)
{
  carma_msgs__srv__ReleaseIndicatorControl_Request__fini(message_memory);
}

size_t ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__LightBarIndicator__ind_list(
  const void * untyped_member)
{
  const carma_msgs__msg__LightBarIndicator__Sequence * member =
    (const carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return member->size;
}

const void * ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__LightBarIndicator__ind_list(
  const void * untyped_member, size_t index)
{
  const carma_msgs__msg__LightBarIndicator__Sequence * member =
    (const carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__LightBarIndicator__ind_list(
  void * untyped_member, size_t index)
{
  carma_msgs__msg__LightBarIndicator__Sequence * member =
    (carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__LightBarIndicator__ind_list(
  void * untyped_member, size_t size)
{
  carma_msgs__msg__LightBarIndicator__Sequence * member =
    (carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  carma_msgs__msg__LightBarIndicator__Sequence__fini(member);
  return carma_msgs__msg__LightBarIndicator__Sequence__init(member, size);
}

size_t ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__LightBarCDAType__cda_list(
  const void * untyped_member)
{
  const carma_msgs__msg__LightBarCDAType__Sequence * member =
    (const carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return member->size;
}

const void * ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__LightBarCDAType__cda_list(
  const void * untyped_member, size_t index)
{
  const carma_msgs__msg__LightBarCDAType__Sequence * member =
    (const carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__LightBarCDAType__cda_list(
  void * untyped_member, size_t index)
{
  carma_msgs__msg__LightBarCDAType__Sequence * member =
    (carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__LightBarCDAType__cda_list(
  void * untyped_member, size_t size)
{
  carma_msgs__msg__LightBarCDAType__Sequence * member =
    (carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  carma_msgs__msg__LightBarCDAType__Sequence__fini(member);
  return carma_msgs__msg__LightBarCDAType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_member_array[3] = {
  {
    "ind_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__ReleaseIndicatorControl_Request, ind_list),  // bytes offset in struct
    NULL,  // default value
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__LightBarIndicator__ind_list,  // size() function pointer
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__LightBarIndicator__ind_list,  // get_const(index) function pointer
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__LightBarIndicator__ind_list,  // get(index) function pointer
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__LightBarIndicator__ind_list  // resize(index) function pointer
  },
  {
    "cda_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__ReleaseIndicatorControl_Request, cda_list),  // bytes offset in struct
    NULL,  // default value
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__LightBarCDAType__cda_list,  // size() function pointer
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__LightBarCDAType__cda_list,  // get_const(index) function pointer
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__LightBarCDAType__cda_list,  // get(index) function pointer
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__LightBarCDAType__cda_list  // resize(index) function pointer
  },
  {
    "requester_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__ReleaseIndicatorControl_Request, requester_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_members = {
  "carma_msgs__srv",  // message namespace
  "ReleaseIndicatorControl_Request",  // message name
  3,  // number of fields
  sizeof(carma_msgs__srv__ReleaseIndicatorControl_Request),
  ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_member_array,  // message members
  ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_type_support_handle = {
  0,
  &ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl_Request)() {
  ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarIndicator)();
  ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarCDAType)();
  if (!ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_type_support_handle.typesupport_identifier) {
    ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ReleaseIndicatorControl_Request__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__functions.h"
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__ReleaseIndicatorControl_Response__init(message_memory);
}

void ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_fini_function(void * message_memory)
{
  carma_msgs__srv__ReleaseIndicatorControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__ReleaseIndicatorControl_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_members = {
  "carma_msgs__srv",  // message namespace
  "ReleaseIndicatorControl_Response",  // message name
  1,  // number of fields
  sizeof(carma_msgs__srv__ReleaseIndicatorControl_Response),
  ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_member_array,  // message members
  ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_type_support_handle = {
  0,
  &ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl_Response)() {
  if (!ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_type_support_handle.typesupport_identifier) {
    ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ReleaseIndicatorControl_Response__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_members = {
  "carma_msgs__srv",  // service namespace
  "ReleaseIndicatorControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Request_message_type_support_handle,
  NULL  // response message
  // carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_type_support_handle = {
  0,
  &carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl)() {
  if (!carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_type_support_handle.typesupport_identifier) {
    carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, ReleaseIndicatorControl_Response)()->data;
  }

  return &carma_msgs__srv__detail__release_indicator_control__rosidl_typesupport_introspection_c__ReleaseIndicatorControl_service_type_support_handle;
}
