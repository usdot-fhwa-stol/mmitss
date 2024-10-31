// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/trailer_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/trailer_data__struct.h"
#include "j2735_v2x_msgs/msg/detail/trailer_data__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"  // connection
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__functions.h"  // units

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescriptionList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescriptionList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerUnitDescriptionList)();


using _TrailerData__ros_msg_type = j2735_v2x_msgs__msg__TrailerData;

static bool _TrailerData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrailerData__ros_msg_type * ros_message = static_cast<const _TrailerData__ros_msg_type *>(untyped_ros_message);
  // Field name: ssp_index
  {
    cdr << ros_message->ssp_index;
  }

  // Field name: connection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->connection, cdr))
    {
      return false;
    }
  }

  // Field name: units
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerUnitDescriptionList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->units, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrailerData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrailerData__ros_msg_type * ros_message = static_cast<_TrailerData__ros_msg_type *>(untyped_ros_message);
  // Field name: ssp_index
  {
    cdr >> ros_message->ssp_index;
  }

  // Field name: connection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->connection))
    {
      return false;
    }
  }

  // Field name: units
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerUnitDescriptionList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->units))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrailerData__ros_msg_type * ros_message = static_cast<const _TrailerData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ssp_index
  {
    size_t item_size = sizeof(ros_message->ssp_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connection

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
    &(ros_message->connection), current_alignment);
  // field.name units

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescriptionList(
    &(ros_message->units), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrailerData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__TrailerData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ssp_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: connection
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
        full_bounded, current_alignment);
    }
  }
  // member: units
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescriptionList(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrailerData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__TrailerData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrailerData = {
  "j2735_v2x_msgs::msg",
  "TrailerData",
  _TrailerData__cdr_serialize,
  _TrailerData__cdr_deserialize,
  _TrailerData__get_serialized_size,
  _TrailerData__max_serialized_size
};

static rosidl_message_type_support_t _TrailerData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrailerData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerData)() {
  return &_TrailerData__type_support;
}

#if defined(__cplusplus)
}
#endif
