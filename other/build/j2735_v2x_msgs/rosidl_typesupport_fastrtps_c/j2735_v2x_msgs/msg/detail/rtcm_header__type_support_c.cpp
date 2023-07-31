// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/rtcm_header__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_header__struct.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_header__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"  // status
#include "j2735_v2x_msgs/msg/detail/offset_b09__functions.h"  // ant_offset_y
#include "j2735_v2x_msgs/msg/detail/offset_b10__functions.h"  // ant_offset_z
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"  // ant_offset_x

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GNSSStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__OffsetB09(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__OffsetB09(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB09)();
size_t get_serialized_size_j2735_v2x_msgs__msg__OffsetB10(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__OffsetB10(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB10)();
size_t get_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB12)();


using _RTCMHeader__ros_msg_type = j2735_v2x_msgs__msg__RTCMHeader;

static bool _RTCMHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RTCMHeader__ros_msg_type * ros_message = static_cast<const _RTCMHeader__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GNSSStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  // Field name: ant_offset_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ant_offset_x, cdr))
    {
      return false;
    }
  }

  // Field name: ant_offset_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB09
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ant_offset_y, cdr))
    {
      return false;
    }
  }

  // Field name: ant_offset_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB10
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ant_offset_z, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RTCMHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RTCMHeader__ros_msg_type * ros_message = static_cast<_RTCMHeader__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GNSSStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  // Field name: ant_offset_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ant_offset_x))
    {
      return false;
    }
  }

  // Field name: ant_offset_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB09
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ant_offset_y))
    {
      return false;
    }
  }

  // Field name: ant_offset_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB10
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ant_offset_z))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RTCMHeader__ros_msg_type * ros_message = static_cast<const _RTCMHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
    &(ros_message->status), current_alignment);
  // field.name ant_offset_x

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
    &(ros_message->ant_offset_x), current_alignment);
  // field.name ant_offset_y

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__OffsetB09(
    &(ros_message->ant_offset_y), current_alignment);
  // field.name ant_offset_z

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__OffsetB10(
    &(ros_message->ant_offset_z), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RTCMHeader__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
        full_bounded, current_alignment);
    }
  }
  // member: ant_offset_x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
        full_bounded, current_alignment);
    }
  }
  // member: ant_offset_y
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__OffsetB09(
        full_bounded, current_alignment);
    }
  }
  // member: ant_offset_z
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__OffsetB10(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RTCMHeader__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__RTCMHeader(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RTCMHeader = {
  "j2735_v2x_msgs::msg",
  "RTCMHeader",
  _RTCMHeader__cdr_serialize,
  _RTCMHeader__cdr_deserialize,
  _RTCMHeader__get_serialized_size,
  _RTCMHeader__max_serialized_size
};

static rosidl_message_type_support_t _RTCMHeader__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RTCMHeader,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RTCMHeader)() {
  return &_RTCMHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
