// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/connection__struct.hpp"

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
bool cdr_serialize(
  const j2735_v2x_msgs::msg::ConnectingLane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::ConnectingLane &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::ConnectingLane &,
  size_t current_alignment);
size_t
max_serialized_size_ConnectingLane(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs

namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::IntersectionReferenceID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::IntersectionReferenceID &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::IntersectionReferenceID &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionReferenceID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs


namespace j2735_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::Connection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: connecting_lane
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.connecting_lane,
    cdr);
  // Member: remote_intersection
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.remote_intersection,
    cdr);
  // Member: remote_intersection_exists
  cdr << (ros_message.remote_intersection_exists ? true : false);
  // Member: signal_group
  cdr << ros_message.signal_group;
  // Member: signal_group_exists
  cdr << (ros_message.signal_group_exists ? true : false);
  // Member: user_class
  cdr << ros_message.user_class;
  // Member: user_class_exists
  cdr << (ros_message.user_class_exists ? true : false);
  // Member: connection_id
  cdr << ros_message.connection_id;
  // Member: connection_id_exists
  cdr << (ros_message.connection_id_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::Connection & ros_message)
{
  // Member: connecting_lane
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.connecting_lane);

  // Member: remote_intersection
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.remote_intersection);

  // Member: remote_intersection_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.remote_intersection_exists = tmp ? true : false;
  }

  // Member: signal_group
  cdr >> ros_message.signal_group;

  // Member: signal_group_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.signal_group_exists = tmp ? true : false;
  }

  // Member: user_class
  cdr >> ros_message.user_class;

  // Member: user_class_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.user_class_exists = tmp ? true : false;
  }

  // Member: connection_id
  cdr >> ros_message.connection_id;

  // Member: connection_id_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connection_id_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::Connection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: connecting_lane

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.connecting_lane, current_alignment);
  // Member: remote_intersection

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.remote_intersection, current_alignment);
  // Member: remote_intersection_exists
  {
    size_t item_size = sizeof(ros_message.remote_intersection_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_group
  {
    size_t item_size = sizeof(ros_message.signal_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_group_exists
  {
    size_t item_size = sizeof(ros_message.signal_group_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_class
  {
    size_t item_size = sizeof(ros_message.user_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_class_exists
  {
    size_t item_size = sizeof(ros_message.user_class_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: connection_id
  {
    size_t item_size = sizeof(ros_message.connection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: connection_id_exists
  {
    size_t item_size = sizeof(ros_message.connection_id_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_Connection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: connecting_lane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConnectingLane(
        full_bounded, current_alignment);
    }
  }

  // Member: remote_intersection
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionReferenceID(
        full_bounded, current_alignment);
    }
  }

  // Member: remote_intersection_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_group
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_group_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: user_class
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: user_class_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_id_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Connection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::Connection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Connection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::Connection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Connection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::Connection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Connection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Connection(full_bounded, 0);
}

static message_type_support_callbacks_t _Connection__callbacks = {
  "j2735_v2x_msgs::msg",
  "Connection",
  _Connection__cdr_serialize,
  _Connection__cdr_deserialize,
  _Connection__get_serialized_size,
  _Connection__max_serialized_size
};

static rosidl_message_type_support_t _Connection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Connection__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::Connection>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_Connection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, Connection)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_Connection__handle;
}

#ifdef __cplusplus
}
#endif
