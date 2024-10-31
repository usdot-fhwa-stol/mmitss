// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/check_active_geofence__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_perception_msgs/msg/detail/check_active_geofence__struct.hpp"

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

namespace carma_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
cdr_serialize(
  const carma_perception_msgs::msg::CheckActiveGeofence & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_on_active_geofence
  cdr << (ros_message.is_on_active_geofence ? true : false);
  // Member: type
  cdr << ros_message.type;
  // Member: reason
  cdr << ros_message.reason;
  // Member: value
  cdr << ros_message.value;
  // Member: distance_to_next_geofence
  cdr << ros_message.distance_to_next_geofence;
  // Member: minimum_gap
  cdr << ros_message.minimum_gap;
  // Member: advisory_speed
  cdr << ros_message.advisory_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_perception_msgs::msg::CheckActiveGeofence & ros_message)
{
  // Member: is_on_active_geofence
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_on_active_geofence = tmp ? true : false;
  }

  // Member: type
  cdr >> ros_message.type;

  // Member: reason
  cdr >> ros_message.reason;

  // Member: value
  cdr >> ros_message.value;

  // Member: distance_to_next_geofence
  cdr >> ros_message.distance_to_next_geofence;

  // Member: minimum_gap
  cdr >> ros_message.minimum_gap;

  // Member: advisory_speed
  cdr >> ros_message.advisory_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
get_serialized_size(
  const carma_perception_msgs::msg::CheckActiveGeofence & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_on_active_geofence
  {
    size_t item_size = sizeof(ros_message.is_on_active_geofence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reason.size() + 1);
  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_next_geofence
  {
    size_t item_size = sizeof(ros_message.distance_to_next_geofence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minimum_gap
  {
    size_t item_size = sizeof(ros_message.minimum_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: advisory_speed
  {
    size_t item_size = sizeof(ros_message.advisory_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
max_serialized_size_CheckActiveGeofence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_on_active_geofence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: distance_to_next_geofence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: minimum_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: advisory_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CheckActiveGeofence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_perception_msgs::msg::CheckActiveGeofence *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CheckActiveGeofence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_perception_msgs::msg::CheckActiveGeofence *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CheckActiveGeofence__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_perception_msgs::msg::CheckActiveGeofence *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CheckActiveGeofence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CheckActiveGeofence(full_bounded, 0);
}

static message_type_support_callbacks_t _CheckActiveGeofence__callbacks = {
  "carma_perception_msgs::msg",
  "CheckActiveGeofence",
  _CheckActiveGeofence__cdr_serialize,
  _CheckActiveGeofence__cdr_deserialize,
  _CheckActiveGeofence__get_serialized_size,
  _CheckActiveGeofence__max_serialized_size
};

static rosidl_message_type_support_t _CheckActiveGeofence__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CheckActiveGeofence__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_perception_msgs::msg::CheckActiveGeofence>()
{
  return &carma_perception_msgs::msg::typesupport_fastrtps_cpp::_CheckActiveGeofence__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_perception_msgs, msg, CheckActiveGeofence)() {
  return &carma_perception_msgs::msg::typesupport_fastrtps_cpp::_CheckActiveGeofence__handle;
}

#ifdef __cplusplus
}
#endif
