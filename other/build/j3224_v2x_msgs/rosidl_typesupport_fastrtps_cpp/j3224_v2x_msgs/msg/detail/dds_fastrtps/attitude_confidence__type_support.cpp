// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__struct.hpp"

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
  const j2735_v2x_msgs::msg::HeadingConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::HeadingConfidence &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::HeadingConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_HeadingConfidence(
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
  const j2735_v2x_msgs::msg::HeadingConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::HeadingConfidence &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::HeadingConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_HeadingConfidence(
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
  const j2735_v2x_msgs::msg::HeadingConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::HeadingConfidence &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::HeadingConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_HeadingConfidence(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs


namespace j3224_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_serialize(
  const j3224_v2x_msgs::msg::AttitudeConfidence & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pitch_confidence
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pitch_confidence,
    cdr);
  // Member: roll_confidence
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.roll_confidence,
    cdr);
  // Member: yaw_confidence
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.yaw_confidence,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j3224_v2x_msgs::msg::AttitudeConfidence & ros_message)
{
  // Member: pitch_confidence
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pitch_confidence);

  // Member: roll_confidence
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.roll_confidence);

  // Member: yaw_confidence
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.yaw_confidence);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
get_serialized_size(
  const j3224_v2x_msgs::msg::AttitudeConfidence & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pitch_confidence

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pitch_confidence, current_alignment);
  // Member: roll_confidence

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.roll_confidence, current_alignment);
  // Member: yaw_confidence

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.yaw_confidence, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
max_serialized_size_AttitudeConfidence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pitch_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HeadingConfidence(
        full_bounded, current_alignment);
    }
  }

  // Member: roll_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HeadingConfidence(
        full_bounded, current_alignment);
    }
  }

  // Member: yaw_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HeadingConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AttitudeConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::AttitudeConfidence *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AttitudeConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j3224_v2x_msgs::msg::AttitudeConfidence *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AttitudeConfidence__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::AttitudeConfidence *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AttitudeConfidence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AttitudeConfidence(full_bounded, 0);
}

static message_type_support_callbacks_t _AttitudeConfidence__callbacks = {
  "j3224_v2x_msgs::msg",
  "AttitudeConfidence",
  _AttitudeConfidence__cdr_serialize,
  _AttitudeConfidence__cdr_deserialize,
  _AttitudeConfidence__get_serialized_size,
  _AttitudeConfidence__max_serialized_size
};

static rosidl_message_type_support_t _AttitudeConfidence__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AttitudeConfidence__callbacks,
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
get_message_type_support_handle<j3224_v2x_msgs::msg::AttitudeConfidence>()
{
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_AttitudeConfidence__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j3224_v2x_msgs, msg, AttitudeConfidence)() {
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_AttitudeConfidence__handle;
}

#ifdef __cplusplus
}
#endif
