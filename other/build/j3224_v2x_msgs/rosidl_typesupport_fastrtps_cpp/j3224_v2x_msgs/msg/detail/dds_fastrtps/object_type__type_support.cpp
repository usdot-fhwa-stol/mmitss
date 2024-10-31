// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/object_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j3224_v2x_msgs/msg/detail/object_type__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_serialize(
  const j3224_v2x_msgs::msg::ObjectType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: object_type
  cdr << ros_message.object_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j3224_v2x_msgs::msg::ObjectType & ros_message)
{
  // Member: object_type
  cdr >> ros_message.object_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
get_serialized_size(
  const j3224_v2x_msgs::msg::ObjectType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: object_type
  {
    size_t item_size = sizeof(ros_message.object_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
max_serialized_size_ObjectType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: object_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ObjectType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::ObjectType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j3224_v2x_msgs::msg::ObjectType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::ObjectType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObjectType(full_bounded, 0);
}

static message_type_support_callbacks_t _ObjectType__callbacks = {
  "j3224_v2x_msgs::msg",
  "ObjectType",
  _ObjectType__cdr_serialize,
  _ObjectType__cdr_deserialize,
  _ObjectType__get_serialized_size,
  _ObjectType__max_serialized_size
};

static rosidl_message_type_support_t _ObjectType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectType__callbacks,
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
get_message_type_support_handle<j3224_v2x_msgs::msg::ObjectType>()
{
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_ObjectType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j3224_v2x_msgs, msg, ObjectType)() {
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_ObjectType__handle;
}

#ifdef __cplusplus
}
#endif
