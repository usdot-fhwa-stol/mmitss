// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace j2735_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::ConnectionManeuverAssist & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: connection_id
  cdr << ros_message.connection_id;
  // Member: queue_length
  cdr << ros_message.queue_length;
  // Member: queue_length_exists
  cdr << (ros_message.queue_length_exists ? true : false);
  // Member: available_storage_length
  cdr << ros_message.available_storage_length;
  // Member: available_storage_length_exists
  cdr << (ros_message.available_storage_length_exists ? true : false);
  // Member: wait_on_stop
  cdr << (ros_message.wait_on_stop ? true : false);
  // Member: wait_on_stop_exists
  cdr << (ros_message.wait_on_stop_exists ? true : false);
  // Member: ped_bicycle_detect
  cdr << (ros_message.ped_bicycle_detect ? true : false);
  // Member: ped_bicycle_detect_exists
  cdr << (ros_message.ped_bicycle_detect_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::ConnectionManeuverAssist & ros_message)
{
  // Member: connection_id
  cdr >> ros_message.connection_id;

  // Member: queue_length
  cdr >> ros_message.queue_length;

  // Member: queue_length_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.queue_length_exists = tmp ? true : false;
  }

  // Member: available_storage_length
  cdr >> ros_message.available_storage_length;

  // Member: available_storage_length_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.available_storage_length_exists = tmp ? true : false;
  }

  // Member: wait_on_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wait_on_stop = tmp ? true : false;
  }

  // Member: wait_on_stop_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wait_on_stop_exists = tmp ? true : false;
  }

  // Member: ped_bicycle_detect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ped_bicycle_detect = tmp ? true : false;
  }

  // Member: ped_bicycle_detect_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ped_bicycle_detect_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::ConnectionManeuverAssist & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: connection_id
  {
    size_t item_size = sizeof(ros_message.connection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: queue_length
  {
    size_t item_size = sizeof(ros_message.queue_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: queue_length_exists
  {
    size_t item_size = sizeof(ros_message.queue_length_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: available_storage_length
  {
    size_t item_size = sizeof(ros_message.available_storage_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: available_storage_length_exists
  {
    size_t item_size = sizeof(ros_message.available_storage_length_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wait_on_stop
  {
    size_t item_size = sizeof(ros_message.wait_on_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wait_on_stop_exists
  {
    size_t item_size = sizeof(ros_message.wait_on_stop_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ped_bicycle_detect
  {
    size_t item_size = sizeof(ros_message.ped_bicycle_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ped_bicycle_detect_exists
  {
    size_t item_size = sizeof(ros_message.ped_bicycle_detect_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_ConnectionManeuverAssist(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: connection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: queue_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: queue_length_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: available_storage_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: available_storage_length_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wait_on_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wait_on_stop_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ped_bicycle_detect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ped_bicycle_detect_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ConnectionManeuverAssist__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::ConnectionManeuverAssist *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConnectionManeuverAssist__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::ConnectionManeuverAssist *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConnectionManeuverAssist__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::ConnectionManeuverAssist *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConnectionManeuverAssist__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConnectionManeuverAssist(full_bounded, 0);
}

static message_type_support_callbacks_t _ConnectionManeuverAssist__callbacks = {
  "j2735_v2x_msgs::msg",
  "ConnectionManeuverAssist",
  _ConnectionManeuverAssist__cdr_serialize,
  _ConnectionManeuverAssist__cdr_deserialize,
  _ConnectionManeuverAssist__get_serialized_size,
  _ConnectionManeuverAssist__max_serialized_size
};

static rosidl_message_type_support_t _ConnectionManeuverAssist__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConnectionManeuverAssist__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::ConnectionManeuverAssist>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_ConnectionManeuverAssist__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, ConnectionManeuverAssist)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_ConnectionManeuverAssist__handle;
}

#ifdef __cplusplus
}
#endif
