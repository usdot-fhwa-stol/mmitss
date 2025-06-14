// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/Plugin.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/plugin__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/msg/detail/plugin__struct.hpp"

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

namespace carma_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::msg::Plugin & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: version_id
  cdr << ros_message.version_id;
  // Member: type
  cdr << ros_message.type;
  // Member: available
  cdr << (ros_message.available ? true : false);
  // Member: activated
  cdr << (ros_message.activated ? true : false);
  // Member: capability
  cdr << ros_message.capability;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::msg::Plugin & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: version_id
  cdr >> ros_message.version_id;

  // Member: type
  cdr >> ros_message.type;

  // Member: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.available = tmp ? true : false;
  }

  // Member: activated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.activated = tmp ? true : false;
  }

  // Member: capability
  cdr >> ros_message.capability;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::msg::Plugin & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: version_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.version_id.size() + 1);
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: available
  {
    size_t item_size = sizeof(ros_message.available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: activated
  {
    size_t item_size = sizeof(ros_message.activated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: capability
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.capability.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_Plugin(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: version_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: activated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: capability
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

static bool _Plugin__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::Plugin *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Plugin__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::msg::Plugin *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Plugin__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::Plugin *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Plugin__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Plugin(full_bounded, 0);
}

static message_type_support_callbacks_t _Plugin__callbacks = {
  "carma_planning_msgs::msg",
  "Plugin",
  _Plugin__cdr_serialize,
  _Plugin__cdr_deserialize,
  _Plugin__get_serialized_size,
  _Plugin__max_serialized_size
};

static rosidl_message_type_support_t _Plugin__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Plugin__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::Plugin>()
{
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_Plugin__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, msg, Plugin)() {
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_Plugin__handle;
}

#ifdef __cplusplus
}
#endif
