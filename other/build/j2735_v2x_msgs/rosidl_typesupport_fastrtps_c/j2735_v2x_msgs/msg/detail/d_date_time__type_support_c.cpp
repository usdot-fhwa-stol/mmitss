// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/d_date_time__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"  // day
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"  // hour
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"  // minute
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"  // month
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"  // offset
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"  // second
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"  // year

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__DDay(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DDay(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDay)();
size_t get_serialized_size_j2735_v2x_msgs__msg__DHour(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DHour(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DHour)();
size_t get_serialized_size_j2735_v2x_msgs__msg__DMinute(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DMinute(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DMinute)();
size_t get_serialized_size_j2735_v2x_msgs__msg__DMonth(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DMonth(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DMonth)();
size_t get_serialized_size_j2735_v2x_msgs__msg__DOffset(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DOffset(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DOffset)();
size_t get_serialized_size_j2735_v2x_msgs__msg__DSecond(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DSecond(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DSecond)();
size_t get_serialized_size_j2735_v2x_msgs__msg__DYear(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DYear(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DYear)();


using _DDateTime__ros_msg_type = j2735_v2x_msgs__msg__DDateTime;

static bool _DDateTime__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DDateTime__ros_msg_type * ros_message = static_cast<const _DDateTime__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: year
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DYear
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->year, cdr))
    {
      return false;
    }
  }

  // Field name: month
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DMonth
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->month, cdr))
    {
      return false;
    }
  }

  // Field name: day
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDay
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->day, cdr))
    {
      return false;
    }
  }

  // Field name: hour
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DHour
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->hour, cdr))
    {
      return false;
    }
  }

  // Field name: minute
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DMinute
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->minute, cdr))
    {
      return false;
    }
  }

  // Field name: second
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DSecond
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->second, cdr))
    {
      return false;
    }
  }

  // Field name: offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DOffset
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offset, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DDateTime__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DDateTime__ros_msg_type * ros_message = static_cast<_DDateTime__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: year
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DYear
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->year))
    {
      return false;
    }
  }

  // Field name: month
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DMonth
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->month))
    {
      return false;
    }
  }

  // Field name: day
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDay
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->day))
    {
      return false;
    }
  }

  // Field name: hour
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DHour
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->hour))
    {
      return false;
    }
  }

  // Field name: minute
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DMinute
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->minute))
    {
      return false;
    }
  }

  // Field name: second
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DSecond
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->second))
    {
      return false;
    }
  }

  // Field name: offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DOffset
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offset))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DDateTime__ros_msg_type * ros_message = static_cast<const _DDateTime__ros_msg_type *>(untyped_ros_message);
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
  // field.name year

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DYear(
    &(ros_message->year), current_alignment);
  // field.name month

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DMonth(
    &(ros_message->month), current_alignment);
  // field.name day

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DDay(
    &(ros_message->day), current_alignment);
  // field.name hour

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DHour(
    &(ros_message->hour), current_alignment);
  // field.name minute

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DMinute(
    &(ros_message->minute), current_alignment);
  // field.name second

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DSecond(
    &(ros_message->second), current_alignment);
  // field.name offset

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DOffset(
    &(ros_message->offset), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DDateTime__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
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

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: year
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DYear(
        full_bounded, current_alignment);
    }
  }
  // member: month
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DMonth(
        full_bounded, current_alignment);
    }
  }
  // member: day
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DDay(
        full_bounded, current_alignment);
    }
  }
  // member: hour
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DHour(
        full_bounded, current_alignment);
    }
  }
  // member: minute
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DMinute(
        full_bounded, current_alignment);
    }
  }
  // member: second
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DSecond(
        full_bounded, current_alignment);
    }
  }
  // member: offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DOffset(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DDateTime__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DDateTime = {
  "j2735_v2x_msgs::msg",
  "DDateTime",
  _DDateTime__cdr_serialize,
  _DDateTime__cdr_deserialize,
  _DDateTime__get_serialized_size,
  _DDateTime__max_serialized_size
};

static rosidl_message_type_support_t _DDateTime__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DDateTime,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime)() {
  return &_DDateTime__type_support;
}

#if defined(__cplusplus)
}
#endif
