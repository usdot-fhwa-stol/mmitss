// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/rtcm_package__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_package__struct.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_package__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/rtcm_header__functions.h"  // rtcm_header
#include "rosidl_runtime_c/primitives_sequence.h"  // messages
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // messages

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RTCMHeader)();


using _RTCMPackage__ros_msg_type = j2735_v2x_msgs__msg__RTCMPackage;

static bool _RTCMPackage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RTCMPackage__ros_msg_type * ros_message = static_cast<const _RTCMPackage__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: rtcm_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RTCMHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rtcm_header, cdr))
    {
      return false;
    }
  }

  // Field name: messages
  {
    size_t size = ros_message->messages.size;
    auto array_ptr = ros_message->messages.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RTCMPackage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RTCMPackage__ros_msg_type * ros_message = static_cast<_RTCMPackage__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: rtcm_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RTCMHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rtcm_header))
    {
      return false;
    }
  }

  // Field name: messages
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->messages.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->messages);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->messages, size)) {
      return "failed to create array for field 'messages'";
    }
    auto array_ptr = ros_message->messages.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__RTCMPackage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RTCMPackage__ros_msg_type * ros_message = static_cast<const _RTCMPackage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtcm_header

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
    &(ros_message->rtcm_header), current_alignment);
  // field.name messages
  {
    size_t array_size = ros_message->messages.size;
    auto array_ptr = ros_message->messages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RTCMPackage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__RTCMPackage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__RTCMPackage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rtcm_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
        full_bounded, current_alignment);
    }
  }
  // member: messages
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RTCMPackage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__RTCMPackage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RTCMPackage = {
  "j2735_v2x_msgs::msg",
  "RTCMPackage",
  _RTCMPackage__cdr_serialize,
  _RTCMPackage__cdr_deserialize,
  _RTCMPackage__get_serialized_size,
  _RTCMPackage__max_serialized_size
};

static rosidl_message_type_support_t _RTCMPackage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RTCMPackage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RTCMPackage)() {
  return &_RTCMPackage__type_support;
}

#if defined(__cplusplus)
}
#endif
