// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/movement_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/movement_state__struct.hpp"

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
bool cdr_serialize(
  const j2735_v2x_msgs::msg::MovementEventList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::MovementEventList &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::MovementEventList &,
  size_t current_alignment);
size_t
max_serialized_size_MovementEventList(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs

namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::ManeuverAssistList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::ManeuverAssistList &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::ManeuverAssistList &,
  size_t current_alignment);
size_t
max_serialized_size_ManeuverAssistList(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs


namespace j2735_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::MovementState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: movement_name
  cdr << ros_message.movement_name;
  // Member: movement_name_exists
  cdr << (ros_message.movement_name_exists ? true : false);
  // Member: signal_group
  cdr << ros_message.signal_group;
  // Member: state_time_speed
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.state_time_speed,
    cdr);
  // Member: maneuver_assist_list
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.maneuver_assist_list,
    cdr);
  // Member: maneuver_assist_list_exists
  cdr << (ros_message.maneuver_assist_list_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::MovementState & ros_message)
{
  // Member: movement_name
  cdr >> ros_message.movement_name;

  // Member: movement_name_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.movement_name_exists = tmp ? true : false;
  }

  // Member: signal_group
  cdr >> ros_message.signal_group;

  // Member: state_time_speed
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.state_time_speed);

  // Member: maneuver_assist_list
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.maneuver_assist_list);

  // Member: maneuver_assist_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.maneuver_assist_list_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::MovementState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: movement_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.movement_name.size() + 1);
  // Member: movement_name_exists
  {
    size_t item_size = sizeof(ros_message.movement_name_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_group
  {
    size_t item_size = sizeof(ros_message.signal_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_time_speed

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.state_time_speed, current_alignment);
  // Member: maneuver_assist_list

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.maneuver_assist_list, current_alignment);
  // Member: maneuver_assist_list_exists
  {
    size_t item_size = sizeof(ros_message.maneuver_assist_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_MovementState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: movement_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: movement_name_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_group
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: state_time_speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MovementEventList(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuver_assist_list
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ManeuverAssistList(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuver_assist_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MovementState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::MovementState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MovementState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::MovementState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MovementState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::MovementState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MovementState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MovementState(full_bounded, 0);
}

static message_type_support_callbacks_t _MovementState__callbacks = {
  "j2735_v2x_msgs::msg",
  "MovementState",
  _MovementState__cdr_serialize,
  _MovementState__cdr_deserialize,
  _MovementState__get_serialized_size,
  _MovementState__max_serialized_size
};

static rosidl_message_type_support_t _MovementState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MovementState__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::MovementState>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_MovementState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, MovementState)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_MovementState__handle;
}

#ifdef __cplusplus
}
#endif
