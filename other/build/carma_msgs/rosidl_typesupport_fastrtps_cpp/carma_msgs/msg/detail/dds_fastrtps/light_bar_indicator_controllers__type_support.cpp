// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.hpp"

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

namespace carma_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_serialize(
  const carma_msgs::msg::LightBarIndicatorControllers & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: green_solid_owner
  cdr << ros_message.green_solid_owner;
  // Member: green_flash_owner
  cdr << ros_message.green_flash_owner;
  // Member: yellow_sides_owner
  cdr << ros_message.yellow_sides_owner;
  // Member: yellow_dim_owner
  cdr << ros_message.yellow_dim_owner;
  // Member: yellow_flash_owner
  cdr << ros_message.yellow_flash_owner;
  // Member: yellow_arrow_left_owner
  cdr << ros_message.yellow_arrow_left_owner;
  // Member: yellow_arrow_right_owner
  cdr << ros_message.yellow_arrow_right_owner;
  // Member: yellow_arrow_out_owner
  cdr << ros_message.yellow_arrow_out_owner;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_msgs::msg::LightBarIndicatorControllers & ros_message)
{
  // Member: green_solid_owner
  cdr >> ros_message.green_solid_owner;

  // Member: green_flash_owner
  cdr >> ros_message.green_flash_owner;

  // Member: yellow_sides_owner
  cdr >> ros_message.yellow_sides_owner;

  // Member: yellow_dim_owner
  cdr >> ros_message.yellow_dim_owner;

  // Member: yellow_flash_owner
  cdr >> ros_message.yellow_flash_owner;

  // Member: yellow_arrow_left_owner
  cdr >> ros_message.yellow_arrow_left_owner;

  // Member: yellow_arrow_right_owner
  cdr >> ros_message.yellow_arrow_right_owner;

  // Member: yellow_arrow_out_owner
  cdr >> ros_message.yellow_arrow_out_owner;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
get_serialized_size(
  const carma_msgs::msg::LightBarIndicatorControllers & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: green_solid_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.green_solid_owner.size() + 1);
  // Member: green_flash_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.green_flash_owner.size() + 1);
  // Member: yellow_sides_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.yellow_sides_owner.size() + 1);
  // Member: yellow_dim_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.yellow_dim_owner.size() + 1);
  // Member: yellow_flash_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.yellow_flash_owner.size() + 1);
  // Member: yellow_arrow_left_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.yellow_arrow_left_owner.size() + 1);
  // Member: yellow_arrow_right_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.yellow_arrow_right_owner.size() + 1);
  // Member: yellow_arrow_out_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.yellow_arrow_out_owner.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
max_serialized_size_LightBarIndicatorControllers(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: green_solid_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: green_flash_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: yellow_sides_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: yellow_dim_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: yellow_flash_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: yellow_arrow_left_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: yellow_arrow_right_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: yellow_arrow_out_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LightBarIndicatorControllers__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_msgs::msg::LightBarIndicatorControllers *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LightBarIndicatorControllers__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_msgs::msg::LightBarIndicatorControllers *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LightBarIndicatorControllers__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_msgs::msg::LightBarIndicatorControllers *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LightBarIndicatorControllers__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LightBarIndicatorControllers(full_bounded, 0);
}

static message_type_support_callbacks_t _LightBarIndicatorControllers__callbacks = {
  "carma_msgs::msg",
  "LightBarIndicatorControllers",
  _LightBarIndicatorControllers__cdr_serialize,
  _LightBarIndicatorControllers__cdr_deserialize,
  _LightBarIndicatorControllers__get_serialized_size,
  _LightBarIndicatorControllers__max_serialized_size
};

static rosidl_message_type_support_t _LightBarIndicatorControllers__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LightBarIndicatorControllers__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::msg::LightBarIndicatorControllers>()
{
  return &carma_msgs::msg::typesupport_fastrtps_cpp::_LightBarIndicatorControllers__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, msg, LightBarIndicatorControllers)() {
  return &carma_msgs::msg::typesupport_fastrtps_cpp::_LightBarIndicatorControllers__handle;
}

#ifdef __cplusplus
}
#endif
