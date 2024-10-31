// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/bumper_heights__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/bumper_heights__struct.hpp"

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
  const carma_v2x_msgs::msg::BumperHeight &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::BumperHeight &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::BumperHeight &,
  size_t current_alignment);
size_t
max_serialized_size_BumperHeight(
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
  const carma_v2x_msgs::msg::BumperHeight &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::BumperHeight &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::BumperHeight &,
  size_t current_alignment);
size_t
max_serialized_size_BumperHeight(
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
  const carma_v2x_msgs::msg::BumperHeights & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front,
    cdr);
  // Member: rear
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rear,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::BumperHeights & ros_message)
{
  // Member: front
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front);

  // Member: rear
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rear);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::BumperHeights & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front, current_alignment);
  // Member: rear

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rear, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_BumperHeights(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: front
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BumperHeight(
        full_bounded, current_alignment);
    }
  }

  // Member: rear
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BumperHeight(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _BumperHeights__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::BumperHeights *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BumperHeights__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::BumperHeights *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BumperHeights__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::BumperHeights *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BumperHeights__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BumperHeights(full_bounded, 0);
}

static message_type_support_callbacks_t _BumperHeights__callbacks = {
  "carma_v2x_msgs::msg",
  "BumperHeights",
  _BumperHeights__cdr_serialize,
  _BumperHeights__cdr_deserialize,
  _BumperHeights__get_serialized_size,
  _BumperHeights__max_serialized_size
};

static rosidl_message_type_support_t _BumperHeights__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BumperHeights__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::BumperHeights>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_BumperHeights__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, BumperHeights)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_BumperHeights__handle;
}

#ifdef __cplusplus
}
#endif
