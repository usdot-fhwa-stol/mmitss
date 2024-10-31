// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/VehicleSizeConfidence.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.hpp"

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
bool cdr_serialize(
  const j3224_v2x_msgs::msg::SizeValueConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::SizeValueConfidence &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::SizeValueConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_SizeValueConfidence(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs

namespace j3224_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j3224_v2x_msgs::msg::SizeValueConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::SizeValueConfidence &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::SizeValueConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_SizeValueConfidence(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs

namespace j3224_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j3224_v2x_msgs::msg::SizeValueConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::SizeValueConfidence &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::SizeValueConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_SizeValueConfidence(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs


namespace j3224_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_serialize(
  const j3224_v2x_msgs::msg::VehicleSizeConfidence & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_width_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehicle_width_confidence,
    cdr);
  // Member: vehicle_length_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehicle_length_confidence,
    cdr);
  // Member: presence_vector
  cdr << ros_message.presence_vector;
  // Member: vehicle_height_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehicle_height_confidence,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j3224_v2x_msgs::msg::VehicleSizeConfidence & ros_message)
{
  // Member: vehicle_width_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehicle_width_confidence);

  // Member: vehicle_length_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehicle_length_confidence);

  // Member: presence_vector
  cdr >> ros_message.presence_vector;

  // Member: vehicle_height_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehicle_height_confidence);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
get_serialized_size(
  const j3224_v2x_msgs::msg::VehicleSizeConfidence & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vehicle_width_confidence

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehicle_width_confidence, current_alignment);
  // Member: vehicle_length_confidence

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehicle_length_confidence, current_alignment);
  // Member: presence_vector
  {
    size_t item_size = sizeof(ros_message.presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_height_confidence

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehicle_height_confidence, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j3224_v2x_msgs
max_serialized_size_VehicleSizeConfidence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: vehicle_width_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SizeValueConfidence(
        full_bounded, current_alignment);
    }
  }

  // Member: vehicle_length_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SizeValueConfidence(
        full_bounded, current_alignment);
    }
  }

  // Member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_height_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SizeValueConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleSizeConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::VehicleSizeConfidence *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleSizeConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j3224_v2x_msgs::msg::VehicleSizeConfidence *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleSizeConfidence__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j3224_v2x_msgs::msg::VehicleSizeConfidence *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleSizeConfidence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleSizeConfidence(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleSizeConfidence__callbacks = {
  "j3224_v2x_msgs::msg",
  "VehicleSizeConfidence",
  _VehicleSizeConfidence__cdr_serialize,
  _VehicleSizeConfidence__cdr_deserialize,
  _VehicleSizeConfidence__get_serialized_size,
  _VehicleSizeConfidence__max_serialized_size
};

static rosidl_message_type_support_t _VehicleSizeConfidence__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleSizeConfidence__callbacks,
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
get_message_type_support_handle<j3224_v2x_msgs::msg::VehicleSizeConfidence>()
{
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_VehicleSizeConfidence__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j3224_v2x_msgs, msg, VehicleSizeConfidence)() {
  return &j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::_VehicleSizeConfidence__handle;
}

#ifdef __cplusplus
}
#endif
