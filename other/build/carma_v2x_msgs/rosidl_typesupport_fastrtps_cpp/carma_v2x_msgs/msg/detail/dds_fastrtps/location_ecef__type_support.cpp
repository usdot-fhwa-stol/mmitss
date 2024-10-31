// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/LocationECEF.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/location_ecef__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/location_ecef__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::LocationECEF & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ecef_x
  cdr << ros_message.ecef_x;
  // Member: ecef_y
  cdr << ros_message.ecef_y;
  // Member: ecef_z
  cdr << ros_message.ecef_z;
  // Member: timestamp
  cdr << ros_message.timestamp;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::LocationECEF & ros_message)
{
  // Member: ecef_x
  cdr >> ros_message.ecef_x;

  // Member: ecef_y
  cdr >> ros_message.ecef_y;

  // Member: ecef_z
  cdr >> ros_message.ecef_z;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::LocationECEF & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ecef_x
  {
    size_t item_size = sizeof(ros_message.ecef_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_y
  {
    size_t item_size = sizeof(ros_message.ecef_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_z
  {
    size_t item_size = sizeof(ros_message.ecef_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_LocationECEF(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ecef_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LocationECEF__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::LocationECEF *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LocationECEF__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::LocationECEF *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LocationECEF__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::LocationECEF *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LocationECEF__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LocationECEF(full_bounded, 0);
}

static message_type_support_callbacks_t _LocationECEF__callbacks = {
  "carma_v2x_msgs::msg",
  "LocationECEF",
  _LocationECEF__cdr_serialize,
  _LocationECEF__cdr_deserialize,
  _LocationECEF__get_serialized_size,
  _LocationECEF__max_serialized_size
};

static rosidl_message_type_support_t _LocationECEF__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LocationECEF__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::LocationECEF>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_LocationECEF__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, LocationECEF)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_LocationECEF__handle;
}

#ifdef __cplusplus
}
#endif
