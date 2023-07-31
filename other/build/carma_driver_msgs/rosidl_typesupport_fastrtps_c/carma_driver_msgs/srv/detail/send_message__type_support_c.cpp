// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/srv/detail/send_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/srv/detail/send_message__struct.h"
#include "carma_driver_msgs/srv/detail/send_message__functions.h"
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

#include "carma_driver_msgs/msg/detail/byte_array__functions.h"  // message_to_send

// forward declare type support functions
size_t get_serialized_size_carma_driver_msgs__msg__ByteArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_driver_msgs__msg__ByteArray(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, ByteArray)();


using _SendMessage_Request__ros_msg_type = carma_driver_msgs__srv__SendMessage_Request;

static bool _SendMessage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendMessage_Request__ros_msg_type * ros_message = static_cast<const _SendMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: message_to_send
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, ByteArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->message_to_send, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SendMessage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendMessage_Request__ros_msg_type * ros_message = static_cast<_SendMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: message_to_send
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, ByteArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->message_to_send))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__srv__SendMessage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendMessage_Request__ros_msg_type * ros_message = static_cast<const _SendMessage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name message_to_send

  current_alignment += get_serialized_size_carma_driver_msgs__msg__ByteArray(
    &(ros_message->message_to_send), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SendMessage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__srv__SendMessage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__srv__SendMessage_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: message_to_send
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_driver_msgs__msg__ByteArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SendMessage_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__srv__SendMessage_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendMessage_Request = {
  "carma_driver_msgs::srv",
  "SendMessage_Request",
  _SendMessage_Request__cdr_serialize,
  _SendMessage_Request__cdr_deserialize,
  _SendMessage_Request__get_serialized_size,
  _SendMessage_Request__max_serialized_size
};

static rosidl_message_type_support_t _SendMessage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendMessage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SendMessage_Request)() {
  return &_SendMessage_Request__type_support;
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
// #include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__struct.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__functions.h"
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


using _SendMessage_Response__ros_msg_type = carma_driver_msgs__srv__SendMessage_Response;

static bool _SendMessage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendMessage_Response__ros_msg_type * ros_message = static_cast<const _SendMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_status
  {
    cdr << ros_message->error_status;
  }

  return true;
}

static bool _SendMessage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendMessage_Response__ros_msg_type * ros_message = static_cast<_SendMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_status
  {
    cdr >> ros_message->error_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__srv__SendMessage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendMessage_Response__ros_msg_type * ros_message = static_cast<const _SendMessage_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SendMessage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__srv__SendMessage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__srv__SendMessage_Response(
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

static size_t _SendMessage_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__srv__SendMessage_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendMessage_Response = {
  "carma_driver_msgs::srv",
  "SendMessage_Response",
  _SendMessage_Response__cdr_serialize,
  _SendMessage_Response__cdr_deserialize,
  _SendMessage_Response__get_serialized_size,
  _SendMessage_Response__max_serialized_size
};

static rosidl_message_type_support_t _SendMessage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendMessage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SendMessage_Response)() {
  return &_SendMessage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/srv/send_message.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SendMessage__callbacks = {
  "carma_driver_msgs::srv",
  "SendMessage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SendMessage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SendMessage_Response)(),
};

static rosidl_service_type_support_t SendMessage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SendMessage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SendMessage)() {
  return &SendMessage__handle;
}

#if defined(__cplusplus)
}
#endif
