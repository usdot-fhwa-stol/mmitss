// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/movement_event__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/movement_event__struct.hpp"

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
  const j2735_v2x_msgs::msg::MovementPhaseState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::MovementPhaseState &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::MovementPhaseState &,
  size_t current_alignment);
size_t
max_serialized_size_MovementPhaseState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::TimeChangeDetails &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::TimeChangeDetails &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::TimeChangeDetails &,
  size_t current_alignment);
size_t
max_serialized_size_TimeChangeDetails(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::AdvisorySpeed &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::AdvisorySpeed &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::AdvisorySpeed &,
  size_t current_alignment);
size_t
max_serialized_size_AdvisorySpeed(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs


namespace carma_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::MovementEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: event_state
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.event_state,
    cdr);
  // Member: timing
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.timing,
    cdr);
  // Member: timing_exists
  cdr << (ros_message.timing_exists ? true : false);
  // Member: advisory_speed_list
  {
    size_t size = ros_message.advisory_speed_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.advisory_speed_list[i],
        cdr);
    }
  }
  // Member: speeds_exists
  cdr << (ros_message.speeds_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::MovementEvent & ros_message)
{
  // Member: event_state
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.event_state);

  // Member: timing
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.timing);

  // Member: timing_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.timing_exists = tmp ? true : false;
  }

  // Member: advisory_speed_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.advisory_speed_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.advisory_speed_list[i]);
    }
  }

  // Member: speeds_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.speeds_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::MovementEvent & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: event_state

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.event_state, current_alignment);
  // Member: timing

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.timing, current_alignment);
  // Member: timing_exists
  {
    size_t item_size = sizeof(ros_message.timing_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: advisory_speed_list
  {
    size_t array_size = ros_message.advisory_speed_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.advisory_speed_list[index], current_alignment);
    }
  }
  // Member: speeds_exists
  {
    size_t item_size = sizeof(ros_message.speeds_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_MovementEvent(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: event_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MovementPhaseState(
        full_bounded, current_alignment);
    }
  }

  // Member: timing
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TimeChangeDetails(
        full_bounded, current_alignment);
    }
  }

  // Member: timing_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: advisory_speed_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AdvisorySpeed(
        full_bounded, current_alignment);
    }
  }

  // Member: speeds_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MovementEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::MovementEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MovementEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::MovementEvent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MovementEvent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::MovementEvent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MovementEvent__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MovementEvent(full_bounded, 0);
}

static message_type_support_callbacks_t _MovementEvent__callbacks = {
  "carma_v2x_msgs::msg",
  "MovementEvent",
  _MovementEvent__cdr_serialize,
  _MovementEvent__cdr_deserialize,
  _MovementEvent__get_serialized_size,
  _MovementEvent__max_serialized_size
};

static rosidl_message_type_support_t _MovementEvent__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MovementEvent__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::MovementEvent>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_MovementEvent__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, MovementEvent)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_MovementEvent__handle;
}

#ifdef __cplusplus
}
#endif
