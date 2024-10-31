// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::IntersectionStatusObject & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: intersection_status_object
  cdr << ros_message.intersection_status_object;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::IntersectionStatusObject & ros_message)
{
  // Member: intersection_status_object
  cdr >> ros_message.intersection_status_object;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::IntersectionStatusObject & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: intersection_status_object
  {
    size_t item_size = sizeof(ros_message.intersection_status_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_IntersectionStatusObject(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: intersection_status_object
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _IntersectionStatusObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::IntersectionStatusObject *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IntersectionStatusObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::IntersectionStatusObject *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IntersectionStatusObject__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::IntersectionStatusObject *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IntersectionStatusObject__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IntersectionStatusObject(full_bounded, 0);
}

static message_type_support_callbacks_t _IntersectionStatusObject__callbacks = {
  "j2735_v2x_msgs::msg",
  "IntersectionStatusObject",
  _IntersectionStatusObject__cdr_serialize,
  _IntersectionStatusObject__cdr_deserialize,
  _IntersectionStatusObject__get_serialized_size,
  _IntersectionStatusObject__max_serialized_size
};

static rosidl_message_type_support_t _IntersectionStatusObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IntersectionStatusObject__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::IntersectionStatusObject>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_IntersectionStatusObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, IntersectionStatusObject)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_IntersectionStatusObject__handle;
}

#ifdef __cplusplus
}
#endif
