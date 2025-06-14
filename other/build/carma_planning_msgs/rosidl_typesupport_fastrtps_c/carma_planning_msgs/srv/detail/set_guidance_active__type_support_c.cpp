// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/SetGuidanceActive.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/set_guidance_active__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/set_guidance_active__struct.h"
#include "carma_planning_msgs/srv/detail/set_guidance_active__functions.h"
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


using _SetGuidanceActive_Request__ros_msg_type = carma_planning_msgs__srv__SetGuidanceActive_Request;

static bool _SetGuidanceActive_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetGuidanceActive_Request__ros_msg_type * ros_message = static_cast<const _SetGuidanceActive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: guidance_active
  {
    cdr << (ros_message->guidance_active ? true : false);
  }

  return true;
}

static bool _SetGuidanceActive_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetGuidanceActive_Request__ros_msg_type * ros_message = static_cast<_SetGuidanceActive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: guidance_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->guidance_active = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetGuidanceActive_Request__ros_msg_type * ros_message = static_cast<const _SetGuidanceActive_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name guidance_active
  {
    size_t item_size = sizeof(ros_message->guidance_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetGuidanceActive_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: guidance_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetGuidanceActive_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetGuidanceActive_Request = {
  "carma_planning_msgs::srv",
  "SetGuidanceActive_Request",
  _SetGuidanceActive_Request__cdr_serialize,
  _SetGuidanceActive_Request__cdr_deserialize,
  _SetGuidanceActive_Request__get_serialized_size,
  _SetGuidanceActive_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetGuidanceActive_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetGuidanceActive_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetGuidanceActive_Request)() {
  return &_SetGuidanceActive_Request__type_support;
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
// #include "carma_planning_msgs/srv/detail/set_guidance_active__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/set_guidance_active__functions.h"
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


using _SetGuidanceActive_Response__ros_msg_type = carma_planning_msgs__srv__SetGuidanceActive_Response;

static bool _SetGuidanceActive_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetGuidanceActive_Response__ros_msg_type * ros_message = static_cast<const _SetGuidanceActive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: guidance_status
  {
    cdr << (ros_message->guidance_status ? true : false);
  }

  return true;
}

static bool _SetGuidanceActive_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetGuidanceActive_Response__ros_msg_type * ros_message = static_cast<_SetGuidanceActive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: guidance_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->guidance_status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetGuidanceActive_Response__ros_msg_type * ros_message = static_cast<const _SetGuidanceActive_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name guidance_status
  {
    size_t item_size = sizeof(ros_message->guidance_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetGuidanceActive_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: guidance_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetGuidanceActive_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__SetGuidanceActive_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetGuidanceActive_Response = {
  "carma_planning_msgs::srv",
  "SetGuidanceActive_Response",
  _SetGuidanceActive_Response__cdr_serialize,
  _SetGuidanceActive_Response__cdr_deserialize,
  _SetGuidanceActive_Response__get_serialized_size,
  _SetGuidanceActive_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetGuidanceActive_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetGuidanceActive_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetGuidanceActive_Response)() {
  return &_SetGuidanceActive_Response__type_support;
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
#include "carma_planning_msgs/srv/set_guidance_active.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetGuidanceActive__callbacks = {
  "carma_planning_msgs::srv",
  "SetGuidanceActive",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetGuidanceActive_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetGuidanceActive_Response)(),
};

static rosidl_service_type_support_t SetGuidanceActive__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetGuidanceActive__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetGuidanceActive)() {
  return &SetGuidanceActive__handle;
}

#if defined(__cplusplus)
}
#endif
