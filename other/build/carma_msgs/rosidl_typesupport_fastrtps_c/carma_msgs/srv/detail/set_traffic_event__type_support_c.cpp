// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice
#include "carma_msgs/srv/detail/set_traffic_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_msgs/srv/detail/set_traffic_event__struct.h"
#include "carma_msgs/srv/detail/set_traffic_event__functions.h"
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


using _SetTrafficEvent_Request__ros_msg_type = carma_msgs__srv__SetTrafficEvent_Request;

static bool _SetTrafficEvent_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetTrafficEvent_Request__ros_msg_type * ros_message = static_cast<const _SetTrafficEvent_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: up_track
  {
    cdr << ros_message->up_track;
  }

  // Field name: down_track
  {
    cdr << ros_message->down_track;
  }

  // Field name: minimum_gap
  {
    cdr << ros_message->minimum_gap;
  }

  // Field name: advisory_speed
  {
    cdr << ros_message->advisory_speed;
  }

  return true;
}

static bool _SetTrafficEvent_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetTrafficEvent_Request__ros_msg_type * ros_message = static_cast<_SetTrafficEvent_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: up_track
  {
    cdr >> ros_message->up_track;
  }

  // Field name: down_track
  {
    cdr >> ros_message->down_track;
  }

  // Field name: minimum_gap
  {
    cdr >> ros_message->minimum_gap;
  }

  // Field name: advisory_speed
  {
    cdr >> ros_message->advisory_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t get_serialized_size_carma_msgs__srv__SetTrafficEvent_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetTrafficEvent_Request__ros_msg_type * ros_message = static_cast<const _SetTrafficEvent_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name up_track
  {
    size_t item_size = sizeof(ros_message->up_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name down_track
  {
    size_t item_size = sizeof(ros_message->down_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minimum_gap
  {
    size_t item_size = sizeof(ros_message->minimum_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name advisory_speed
  {
    size_t item_size = sizeof(ros_message->advisory_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetTrafficEvent_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_msgs__srv__SetTrafficEvent_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t max_serialized_size_carma_msgs__srv__SetTrafficEvent_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: up_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: down_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: minimum_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: advisory_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetTrafficEvent_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_msgs__srv__SetTrafficEvent_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetTrafficEvent_Request = {
  "carma_msgs::srv",
  "SetTrafficEvent_Request",
  _SetTrafficEvent_Request__cdr_serialize,
  _SetTrafficEvent_Request__cdr_deserialize,
  _SetTrafficEvent_Request__get_serialized_size,
  _SetTrafficEvent_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetTrafficEvent_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetTrafficEvent_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, SetTrafficEvent_Request)() {
  return &_SetTrafficEvent_Request__type_support;
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
// #include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__struct.h"
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__functions.h"
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


using _SetTrafficEvent_Response__ros_msg_type = carma_msgs__srv__SetTrafficEvent_Response;

static bool _SetTrafficEvent_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetTrafficEvent_Response__ros_msg_type * ros_message = static_cast<const _SetTrafficEvent_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetTrafficEvent_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetTrafficEvent_Response__ros_msg_type * ros_message = static_cast<_SetTrafficEvent_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t get_serialized_size_carma_msgs__srv__SetTrafficEvent_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetTrafficEvent_Response__ros_msg_type * ros_message = static_cast<const _SetTrafficEvent_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetTrafficEvent_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_msgs__srv__SetTrafficEvent_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t max_serialized_size_carma_msgs__srv__SetTrafficEvent_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetTrafficEvent_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_msgs__srv__SetTrafficEvent_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetTrafficEvent_Response = {
  "carma_msgs::srv",
  "SetTrafficEvent_Response",
  _SetTrafficEvent_Response__cdr_serialize,
  _SetTrafficEvent_Response__cdr_deserialize,
  _SetTrafficEvent_Response__get_serialized_size,
  _SetTrafficEvent_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetTrafficEvent_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetTrafficEvent_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, SetTrafficEvent_Response)() {
  return &_SetTrafficEvent_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_msgs/srv/set_traffic_event.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetTrafficEvent__callbacks = {
  "carma_msgs::srv",
  "SetTrafficEvent",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, SetTrafficEvent_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, SetTrafficEvent_Response)(),
};

static rosidl_service_type_support_t SetTrafficEvent__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetTrafficEvent__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, SetTrafficEvent)() {
  return &SetTrafficEvent__handle;
}

#if defined(__cplusplus)
}
#endif
