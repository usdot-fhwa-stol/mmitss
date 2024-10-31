// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__struct.hpp"

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
bool cdr_serialize(
  const carma_v2x_msgs::msg::ObstacleSize &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::ObstacleSize &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::ObstacleSize &,
  size_t current_alignment);
size_t
max_serialized_size_ObstacleSize(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace j3224_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j3224_v2x_msgs::msg::ObstacleSizeConfidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j3224_v2x_msgs::msg::ObstacleSizeConfidence &);
size_t get_serialized_size(
  const j3224_v2x_msgs::msg::ObstacleSizeConfidence &,
  size_t current_alignment);
size_t
max_serialized_size_ObstacleSizeConfidence(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j3224_v2x_msgs


namespace carma_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::DetectedObstacleData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: obst_size
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.obst_size,
    cdr);
  // Member: obst_size_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.obst_size_confidence,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::DetectedObstacleData & ros_message)
{
  // Member: obst_size
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.obst_size);

  // Member: obst_size_confidence
  j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.obst_size_confidence);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::DetectedObstacleData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: obst_size

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.obst_size, current_alignment);
  // Member: obst_size_confidence

  current_alignment +=
    j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.obst_size_confidence, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_DetectedObstacleData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: obst_size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObstacleSize(
        full_bounded, current_alignment);
    }
  }

  // Member: obst_size_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j3224_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObstacleSizeConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DetectedObstacleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::DetectedObstacleData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectedObstacleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::DetectedObstacleData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectedObstacleData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::DetectedObstacleData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectedObstacleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectedObstacleData(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectedObstacleData__callbacks = {
  "carma_v2x_msgs::msg",
  "DetectedObstacleData",
  _DetectedObstacleData__cdr_serialize,
  _DetectedObstacleData__cdr_deserialize,
  _DetectedObstacleData__get_serialized_size,
  _DetectedObstacleData__max_serialized_size
};

static rosidl_message_type_support_t _DetectedObstacleData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectedObstacleData__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::DetectedObstacleData>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_DetectedObstacleData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, DetectedObstacleData)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_DetectedObstacleData__handle;
}

#ifdef __cplusplus
}
#endif
