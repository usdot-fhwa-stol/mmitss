// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__struct.hpp"

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
  const j2735_v2x_msgs::msg::DayOfWeek &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::DayOfWeek &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::DayOfWeek &,
  size_t current_alignment);
size_t
max_serialized_size_DayOfWeek(
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
  const j2735_v2x_msgs::msg::DailySchedule &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::DailySchedule &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::DailySchedule &,
  size_t current_alignment);
size_t
max_serialized_size_DailySchedule(
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
  const j2735_v2x_msgs::msg::RepeatParams &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::RepeatParams &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::RepeatParams &,
  size_t current_alignment);
size_t
max_serialized_size_RepeatParams(
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
  const j2735_v2x_msgs::msg::TrafficControlSchedule & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start
  cdr << ros_message.start;
  // Member: end
  cdr << ros_message.end;
  // Member: end_exists
  cdr << (ros_message.end_exists ? true : false);
  // Member: dow
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dow,
    cdr);
  // Member: dow_exists
  cdr << (ros_message.dow_exists ? true : false);
  // Member: between
  {
    size_t size = ros_message.between.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.between[i],
        cdr);
    }
  }
  // Member: between_exists
  cdr << (ros_message.between_exists ? true : false);
  // Member: repeat
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.repeat,
    cdr);
  // Member: repeat_exists
  cdr << (ros_message.repeat_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::TrafficControlSchedule & ros_message)
{
  // Member: start
  cdr >> ros_message.start;

  // Member: end
  cdr >> ros_message.end;

  // Member: end_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.end_exists = tmp ? true : false;
  }

  // Member: dow
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dow);

  // Member: dow_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dow_exists = tmp ? true : false;
  }

  // Member: between
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.between.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.between[i]);
    }
  }

  // Member: between_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.between_exists = tmp ? true : false;
  }

  // Member: repeat
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.repeat);

  // Member: repeat_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.repeat_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::TrafficControlSchedule & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start
  {
    size_t item_size = sizeof(ros_message.start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end
  {
    size_t item_size = sizeof(ros_message.end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_exists
  {
    size_t item_size = sizeof(ros_message.end_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dow

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dow, current_alignment);
  // Member: dow_exists
  {
    size_t item_size = sizeof(ros_message.dow_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: between
  {
    size_t array_size = ros_message.between.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.between[index], current_alignment);
    }
  }
  // Member: between_exists
  {
    size_t item_size = sizeof(ros_message.between_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: repeat

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.repeat, current_alignment);
  // Member: repeat_exists
  {
    size_t item_size = sizeof(ros_message.repeat_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_TrafficControlSchedule(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: start
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dow
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DayOfWeek(
        full_bounded, current_alignment);
    }
  }

  // Member: dow_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: between
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DailySchedule(
        full_bounded, current_alignment);
    }
  }

  // Member: between_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: repeat
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RepeatParams(
        full_bounded, current_alignment);
    }
  }

  // Member: repeat_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TrafficControlSchedule__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TrafficControlSchedule *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficControlSchedule__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::TrafficControlSchedule *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficControlSchedule__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TrafficControlSchedule *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficControlSchedule__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrafficControlSchedule(full_bounded, 0);
}

static message_type_support_callbacks_t _TrafficControlSchedule__callbacks = {
  "j2735_v2x_msgs::msg",
  "TrafficControlSchedule",
  _TrafficControlSchedule__cdr_serialize,
  _TrafficControlSchedule__cdr_deserialize,
  _TrafficControlSchedule__get_serialized_size,
  _TrafficControlSchedule__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlSchedule__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficControlSchedule__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlSchedule>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TrafficControlSchedule__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, TrafficControlSchedule)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TrafficControlSchedule__handle;
}

#ifdef __cplusplus
}
#endif
