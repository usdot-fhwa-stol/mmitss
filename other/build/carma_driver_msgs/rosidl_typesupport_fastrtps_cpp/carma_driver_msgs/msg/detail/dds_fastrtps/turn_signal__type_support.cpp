// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/turn_signal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_driver_msgs/msg/detail/turn_signal__struct.hpp"

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

namespace carma_driver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
cdr_serialize(
  const carma_driver_msgs::msg::TurnSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state
  cdr << ros_message.state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_driver_msgs::msg::TurnSignal & ros_message)
{
  // Member: state
  cdr >> ros_message.state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
get_serialized_size(
  const carma_driver_msgs::msg::TurnSignal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
max_serialized_size_TurnSignal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TurnSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_driver_msgs::msg::TurnSignal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurnSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_driver_msgs::msg::TurnSignal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurnSignal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_driver_msgs::msg::TurnSignal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurnSignal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TurnSignal(full_bounded, 0);
}

static message_type_support_callbacks_t _TurnSignal__callbacks = {
  "carma_driver_msgs::msg",
  "TurnSignal",
  _TurnSignal__cdr_serialize,
  _TurnSignal__cdr_deserialize,
  _TurnSignal__get_serialized_size,
  _TurnSignal__max_serialized_size
};

static rosidl_message_type_support_t _TurnSignal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurnSignal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_driver_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::msg::TurnSignal>()
{
  return &carma_driver_msgs::msg::typesupport_fastrtps_cpp::_TurnSignal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_driver_msgs, msg, TurnSignal)() {
  return &carma_driver_msgs::msg::typesupport_fastrtps_cpp::_TurnSignal__handle;
}

#ifdef __cplusplus
}
#endif
