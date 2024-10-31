// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/computed_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/computed_lane__struct.hpp"

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
  const carma_v2x_msgs::msg::OffsetAxis &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::OffsetAxis &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::OffsetAxis &,
  size_t current_alignment);
size_t
max_serialized_size_OffsetAxis(
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
  const carma_v2x_msgs::msg::OffsetAxis &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::OffsetAxis &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::OffsetAxis &,
  size_t current_alignment);
size_t
max_serialized_size_OffsetAxis(
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
  const carma_v2x_msgs::msg::ComputedLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: reference_lane_id
  cdr << ros_message.reference_lane_id;
  // Member: offset_x_axis
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offset_x_axis,
    cdr);
  // Member: offset_y_axis
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offset_y_axis,
    cdr);
  // Member: rotate_xy
  cdr << ros_message.rotate_xy;
  // Member: rotatexy_exists
  cdr << (ros_message.rotatexy_exists ? true : false);
  // Member: scale_x_axis
  cdr << ros_message.scale_x_axis;
  // Member: scale_x_axis_exists
  cdr << (ros_message.scale_x_axis_exists ? true : false);
  // Member: scale_y_axis
  cdr << ros_message.scale_y_axis;
  // Member: scale_y_axis_exists
  cdr << (ros_message.scale_y_axis_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::ComputedLane & ros_message)
{
  // Member: reference_lane_id
  cdr >> ros_message.reference_lane_id;

  // Member: offset_x_axis
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offset_x_axis);

  // Member: offset_y_axis
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offset_y_axis);

  // Member: rotate_xy
  cdr >> ros_message.rotate_xy;

  // Member: rotatexy_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rotatexy_exists = tmp ? true : false;
  }

  // Member: scale_x_axis
  cdr >> ros_message.scale_x_axis;

  // Member: scale_x_axis_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.scale_x_axis_exists = tmp ? true : false;
  }

  // Member: scale_y_axis
  cdr >> ros_message.scale_y_axis;

  // Member: scale_y_axis_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.scale_y_axis_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::ComputedLane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: reference_lane_id
  {
    size_t item_size = sizeof(ros_message.reference_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset_x_axis

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offset_x_axis, current_alignment);
  // Member: offset_y_axis

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offset_y_axis, current_alignment);
  // Member: rotate_xy
  {
    size_t item_size = sizeof(ros_message.rotate_xy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotatexy_exists
  {
    size_t item_size = sizeof(ros_message.rotatexy_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scale_x_axis
  {
    size_t item_size = sizeof(ros_message.scale_x_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scale_x_axis_exists
  {
    size_t item_size = sizeof(ros_message.scale_x_axis_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scale_y_axis
  {
    size_t item_size = sizeof(ros_message.scale_y_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scale_y_axis_exists
  {
    size_t item_size = sizeof(ros_message.scale_y_axis_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_ComputedLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: reference_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: offset_x_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OffsetAxis(
        full_bounded, current_alignment);
    }
  }

  // Member: offset_y_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OffsetAxis(
        full_bounded, current_alignment);
    }
  }

  // Member: rotate_xy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rotatexy_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scale_x_axis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scale_x_axis_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scale_y_axis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scale_y_axis_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ComputedLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::ComputedLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ComputedLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::ComputedLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ComputedLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::ComputedLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ComputedLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ComputedLane(full_bounded, 0);
}

static message_type_support_callbacks_t _ComputedLane__callbacks = {
  "carma_v2x_msgs::msg",
  "ComputedLane",
  _ComputedLane__cdr_serialize,
  _ComputedLane__cdr_deserialize,
  _ComputedLane__get_serialized_size,
  _ComputedLane__max_serialized_size
};

static rosidl_message_type_support_t _ComputedLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ComputedLane__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::ComputedLane>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_ComputedLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, ComputedLane)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_ComputedLane__handle;
}

#ifdef __cplusplus
}
#endif
