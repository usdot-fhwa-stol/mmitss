// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.hpp"

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
namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::RegulatorySpeedLimit &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::RegulatorySpeedLimit &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::RegulatorySpeedLimit &,
  size_t current_alignment);
size_t
max_serialized_size_RegulatorySpeedLimit(
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
  const carma_v2x_msgs::msg::LaneDataAttribute & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: choice
  cdr << ros_message.choice;
  // Member: path_end_point_angle
  cdr << ros_message.path_end_point_angle;
  // Member: lane_crown_point_center
  cdr << ros_message.lane_crown_point_center;
  // Member: lane_crown_point_right
  cdr << ros_message.lane_crown_point_right;
  // Member: lane_crown_point_left
  cdr << ros_message.lane_crown_point_left;
  // Member: lane_angle
  cdr << ros_message.lane_angle;
  // Member: speed_limits
  {
    size_t size = ros_message.speed_limits.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.speed_limits[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::LaneDataAttribute & ros_message)
{
  // Member: choice
  cdr >> ros_message.choice;

  // Member: path_end_point_angle
  cdr >> ros_message.path_end_point_angle;

  // Member: lane_crown_point_center
  cdr >> ros_message.lane_crown_point_center;

  // Member: lane_crown_point_right
  cdr >> ros_message.lane_crown_point_right;

  // Member: lane_crown_point_left
  cdr >> ros_message.lane_crown_point_left;

  // Member: lane_angle
  cdr >> ros_message.lane_angle;

  // Member: speed_limits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.speed_limits.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.speed_limits[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::LaneDataAttribute & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: choice
  {
    size_t item_size = sizeof(ros_message.choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: path_end_point_angle
  {
    size_t item_size = sizeof(ros_message.path_end_point_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_crown_point_center
  {
    size_t item_size = sizeof(ros_message.lane_crown_point_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_crown_point_right
  {
    size_t item_size = sizeof(ros_message.lane_crown_point_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_crown_point_left
  {
    size_t item_size = sizeof(ros_message.lane_crown_point_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_angle
  {
    size_t item_size = sizeof(ros_message.lane_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limits
  {
    size_t array_size = ros_message.speed_limits.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.speed_limits[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_LaneDataAttribute(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: path_end_point_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lane_crown_point_center
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_crown_point_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_crown_point_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RegulatorySpeedLimit(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LaneDataAttribute__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::LaneDataAttribute *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneDataAttribute__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::LaneDataAttribute *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneDataAttribute__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::LaneDataAttribute *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneDataAttribute__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LaneDataAttribute(full_bounded, 0);
}

static message_type_support_callbacks_t _LaneDataAttribute__callbacks = {
  "carma_v2x_msgs::msg",
  "LaneDataAttribute",
  _LaneDataAttribute__cdr_serialize,
  _LaneDataAttribute__cdr_deserialize,
  _LaneDataAttribute__get_serialized_size,
  _LaneDataAttribute__max_serialized_size
};

static rosidl_message_type_support_t _LaneDataAttribute__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneDataAttribute__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::LaneDataAttribute>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_LaneDataAttribute__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, LaneDataAttribute)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_LaneDataAttribute__handle;
}

#ifdef __cplusplus
}
#endif
