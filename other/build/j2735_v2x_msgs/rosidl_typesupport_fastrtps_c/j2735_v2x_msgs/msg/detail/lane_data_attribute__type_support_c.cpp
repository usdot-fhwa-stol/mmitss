// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__struct.h"
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"  // speed_limits

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__SpeedLimitList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SpeedLimitList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedLimitList)();


using _LaneDataAttribute__ros_msg_type = j2735_v2x_msgs__msg__LaneDataAttribute;

static bool _LaneDataAttribute__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneDataAttribute__ros_msg_type * ros_message = static_cast<const _LaneDataAttribute__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: path_end_point_angle
  {
    cdr << ros_message->path_end_point_angle;
  }

  // Field name: lane_crown_point_center
  {
    cdr << ros_message->lane_crown_point_center;
  }

  // Field name: lane_crown_point_right
  {
    cdr << ros_message->lane_crown_point_right;
  }

  // Field name: lane_crown_point_left
  {
    cdr << ros_message->lane_crown_point_left;
  }

  // Field name: lane_angle
  {
    cdr << ros_message->lane_angle;
  }

  // Field name: speed_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedLimitList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed_limits, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LaneDataAttribute__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneDataAttribute__ros_msg_type * ros_message = static_cast<_LaneDataAttribute__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: path_end_point_angle
  {
    cdr >> ros_message->path_end_point_angle;
  }

  // Field name: lane_crown_point_center
  {
    cdr >> ros_message->lane_crown_point_center;
  }

  // Field name: lane_crown_point_right
  {
    cdr >> ros_message->lane_crown_point_right;
  }

  // Field name: lane_crown_point_left
  {
    cdr >> ros_message->lane_crown_point_left;
  }

  // Field name: lane_angle
  {
    cdr >> ros_message->lane_angle;
  }

  // Field name: speed_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedLimitList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed_limits))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneDataAttribute(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneDataAttribute__ros_msg_type * ros_message = static_cast<const _LaneDataAttribute__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name choice
  {
    size_t item_size = sizeof(ros_message->choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_end_point_angle
  {
    size_t item_size = sizeof(ros_message->path_end_point_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_crown_point_center
  {
    size_t item_size = sizeof(ros_message->lane_crown_point_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_crown_point_right
  {
    size_t item_size = sizeof(ros_message->lane_crown_point_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_crown_point_left
  {
    size_t item_size = sizeof(ros_message->lane_crown_point_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_angle
  {
    size_t item_size = sizeof(ros_message->lane_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limits

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpeedLimitList(
    &(ros_message->speed_limits), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LaneDataAttribute__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__LaneDataAttribute(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__LaneDataAttribute(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_end_point_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lane_crown_point_center
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_crown_point_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_crown_point_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: speed_limits
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpeedLimitList(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneDataAttribute__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__LaneDataAttribute(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneDataAttribute = {
  "j2735_v2x_msgs::msg",
  "LaneDataAttribute",
  _LaneDataAttribute__cdr_serialize,
  _LaneDataAttribute__cdr_deserialize,
  _LaneDataAttribute__get_serialized_size,
  _LaneDataAttribute__max_serialized_size
};

static rosidl_message_type_support_t _LaneDataAttribute__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneDataAttribute,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDataAttribute)() {
  return &_LaneDataAttribute__type_support;
}

#if defined(__cplusplus)
}
#endif
