// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/PositionOffsetXYZ.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__struct.hpp"

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
namespace j3224_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j3224_v2x_msgs::msg::ObjectDistance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::ObjectDistance &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::ObjectDistance &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectDistance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs

namespace j3224_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j3224_v2x_msgs::msg::ObjectDistance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::ObjectDistance &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::ObjectDistance &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectDistance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs

namespace j3224_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j3224_v2x_msgs::msg::ObjectDistance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::ObjectDistance &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::ObjectDistance &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectDistance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs


namespace j3224_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_serialize(
  const j3224_v2x_msgs::msg::PositionOffsetXYZ & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: offset_x
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offset_x,
    cdr);
  // Member: offset_y
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offset_y,
    cdr);
  // Member: presence_vector
  cdr << ros_message.presence_vector;
  // Member: offset_z
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.offset_z,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j3224_v2x_msgs::msg::PositionOffsetXYZ & ros_message)
{
  // Member: offset_x
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offset_x);

  // Member: offset_y
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offset_y);

  // Member: presence_vector
  cdr >> ros_message.presence_vector;

  // Member: offset_z
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.offset_z);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
get_serialized_size(
  const j3224_v2x_msgs::msg::PositionOffsetXYZ & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: offset_x

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offset_x, current_alignment);
  // Member: offset_y

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offset_y, current_alignment);
  // Member: presence_vector
  {
    size_t item_size = sizeof(ros_message.presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset_z

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.offset_z, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
max_serialized_size_PositionOffsetXYZ(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: offset_x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectDistance(
        full_bounded, current_alignment);
    }
  }

  // Member: offset_y
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectDistance(
        full_bounded, current_alignment);
    }
  }

  // Member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: offset_z
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectDistance(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PositionOffsetXYZ__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::PositionOffsetXYZ *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PositionOffsetXYZ__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j3224_v2x_msgs::msg::PositionOffsetXYZ *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PositionOffsetXYZ__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::PositionOffsetXYZ *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PositionOffsetXYZ__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PositionOffsetXYZ(full_bounded, 0);
}

static message_type_support_callbacks_t _PositionOffsetXYZ__callbacks = {
  "j3224_v2x_msgs::msg",
  "PositionOffsetXYZ",
  _PositionOffsetXYZ__cdr_serialize,
  _PositionOffsetXYZ__cdr_deserialize,
  _PositionOffsetXYZ__get_serialized_size,
  _PositionOffsetXYZ__max_serialized_size
};

static rosidl_message_type_support_t _PositionOffsetXYZ__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PositionOffsetXYZ__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace j3224_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<j3224_v2x_msgs::msg::PositionOffsetXYZ>()
{
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_PositionOffsetXYZ__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j3224_v2x_msgs, msg, PositionOffsetXYZ)() {
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_PositionOffsetXYZ__handle;
}

#ifdef __cplusplus
}
#endif
