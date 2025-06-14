// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.hpp"

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
namespace carma_debug_ros2_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_debug_ros2_msgs::msg::RegulatoryElement &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_debug_ros2_msgs::msg::RegulatoryElement &);
size_t get_serialized_size(
  const carma_debug_ros2_msgs::msg::RegulatoryElement &,
  size_t current_alignment);
size_t
max_serialized_size_RegulatoryElement(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_debug_ros2_msgs


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_serialize(
  const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lanelet_id
  cdr << ros_message.lanelet_id;
  // Member: element
  carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.element,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair & ros_message)
{
  // Member: lanelet_id
  cdr >> ros_message.lanelet_id;

  // Member: element
  carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.element);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
get_serialized_size(
  const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lanelet_id
  {
    size_t item_size = sizeof(ros_message.lanelet_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: element

  current_alignment +=
    carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.element, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
max_serialized_size_LaneletIdRegulatoryElementPair(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lanelet_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: element
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RegulatoryElement(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LaneletIdRegulatoryElementPair__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneletIdRegulatoryElementPair__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneletIdRegulatoryElementPair__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneletIdRegulatoryElementPair__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LaneletIdRegulatoryElementPair(full_bounded, 0);
}

static message_type_support_callbacks_t _LaneletIdRegulatoryElementPair__callbacks = {
  "carma_debug_ros2_msgs::msg",
  "LaneletIdRegulatoryElementPair",
  _LaneletIdRegulatoryElementPair__cdr_serialize,
  _LaneletIdRegulatoryElementPair__cdr_deserialize,
  _LaneletIdRegulatoryElementPair__get_serialized_size,
  _LaneletIdRegulatoryElementPair__max_serialized_size
};

static rosidl_message_type_support_t _LaneletIdRegulatoryElementPair__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneletIdRegulatoryElementPair__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>()
{
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_LaneletIdRegulatoryElementPair__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair)() {
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_LaneletIdRegulatoryElementPair__handle;
}

#ifdef __cplusplus
}
#endif
