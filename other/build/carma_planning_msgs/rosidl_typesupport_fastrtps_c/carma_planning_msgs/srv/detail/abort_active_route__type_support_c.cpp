// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/AbortActiveRoute.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/abort_active_route__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/abort_active_route__struct.h"
#include "carma_planning_msgs/srv/detail/abort_active_route__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AbortActiveRoute_Request__ros_msg_type = carma_planning_msgs__srv__AbortActiveRoute_Request;

static bool _AbortActiveRoute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AbortActiveRoute_Request__ros_msg_type * ros_message = static_cast<const _AbortActiveRoute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _AbortActiveRoute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AbortActiveRoute_Request__ros_msg_type * ros_message = static_cast<_AbortActiveRoute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AbortActiveRoute_Request__ros_msg_type * ros_message = static_cast<const _AbortActiveRoute_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AbortActiveRoute_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AbortActiveRoute_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AbortActiveRoute_Request = {
  "carma_planning_msgs::srv",
  "AbortActiveRoute_Request",
  _AbortActiveRoute_Request__cdr_serialize,
  _AbortActiveRoute_Request__cdr_deserialize,
  _AbortActiveRoute_Request__get_serialized_size,
  _AbortActiveRoute_Request__max_serialized_size
};

static rosidl_message_type_support_t _AbortActiveRoute_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AbortActiveRoute_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, AbortActiveRoute_Request)() {
  return &_AbortActiveRoute_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/abort_active_route__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/abort_active_route__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AbortActiveRoute_Response__ros_msg_type = carma_planning_msgs__srv__AbortActiveRoute_Response;

static bool _AbortActiveRoute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AbortActiveRoute_Response__ros_msg_type * ros_message = static_cast<const _AbortActiveRoute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_status
  {
    cdr << ros_message->error_status;
  }

  return true;
}

static bool _AbortActiveRoute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AbortActiveRoute_Response__ros_msg_type * ros_message = static_cast<_AbortActiveRoute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_status
  {
    cdr >> ros_message->error_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AbortActiveRoute_Response__ros_msg_type * ros_message = static_cast<const _AbortActiveRoute_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_status
  {
    size_t item_size = sizeof(ros_message->error_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AbortActiveRoute_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: error_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AbortActiveRoute_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__AbortActiveRoute_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AbortActiveRoute_Response = {
  "carma_planning_msgs::srv",
  "AbortActiveRoute_Response",
  _AbortActiveRoute_Response__cdr_serialize,
  _AbortActiveRoute_Response__cdr_deserialize,
  _AbortActiveRoute_Response__get_serialized_size,
  _AbortActiveRoute_Response__max_serialized_size
};

static rosidl_message_type_support_t _AbortActiveRoute_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AbortActiveRoute_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, AbortActiveRoute_Response)() {
  return &_AbortActiveRoute_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/abort_active_route.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AbortActiveRoute__callbacks = {
  "carma_planning_msgs::srv",
  "AbortActiveRoute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, AbortActiveRoute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, AbortActiveRoute_Response)(),
};

static rosidl_service_type_support_t AbortActiveRoute__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AbortActiveRoute__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, AbortActiveRoute)() {
  return &AbortActiveRoute__handle;
}

#if defined(__cplusplus)
}
#endif
