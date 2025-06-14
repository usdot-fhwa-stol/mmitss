// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace carma_debug_ros2_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair &);
size_t get_serialized_size(
  const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair &,
  size_t current_alignment);
size_t
max_serialized_size_LaneletIdRegulatoryElementPair(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_debug_ros2_msgs

namespace carma_debug_ros2_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair &);
size_t get_serialized_size(
  const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair &,
  size_t current_alignment);
size_t
max_serialized_size_LaneletIdRegulatoryElementPair(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_debug_ros2_msgs


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_serialize(
  const carma_debug_ros2_msgs::msg::MapUpdateReadable & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: format_version
  cdr << ros_message.format_version;
  // Member: map_version
  cdr << ros_message.map_version;
  // Member: route_id
  cdr << ros_message.route_id;
  // Member: route_version
  cdr << ros_message.route_version;
  // Member: invalidates_route
  cdr << (ros_message.invalidates_route ? true : false);
  // Member: traffic_control_id
  cdr << ros_message.traffic_control_id;
  // Member: update_list
  {
    size_t size = ros_message.update_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.update_list[i],
        cdr);
    }
  }
  // Member: remove_list
  {
    size_t size = ros_message.remove_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.remove_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_debug_ros2_msgs::msg::MapUpdateReadable & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: format_version
  cdr >> ros_message.format_version;

  // Member: map_version
  cdr >> ros_message.map_version;

  // Member: route_id
  cdr >> ros_message.route_id;

  // Member: route_version
  cdr >> ros_message.route_version;

  // Member: invalidates_route
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.invalidates_route = tmp ? true : false;
  }

  // Member: traffic_control_id
  cdr >> ros_message.traffic_control_id;

  // Member: update_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.update_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.update_list[i]);
    }
  }

  // Member: remove_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.remove_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.remove_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
get_serialized_size(
  const carma_debug_ros2_msgs::msg::MapUpdateReadable & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: format_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.format_version.size() + 1);
  // Member: map_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.map_version.size() + 1);
  // Member: route_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.route_id.size() + 1);
  // Member: route_version
  {
    size_t item_size = sizeof(ros_message.route_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: invalidates_route
  {
    size_t item_size = sizeof(ros_message.invalidates_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_control_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.traffic_control_id.size() + 1);
  // Member: update_list
  {
    size_t array_size = ros_message.update_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.update_list[index], current_alignment);
    }
  }
  // Member: remove_list
  {
    size_t array_size = ros_message.remove_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.remove_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
max_serialized_size_MapUpdateReadable(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: format_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: map_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: route_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: route_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: invalidates_route
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: traffic_control_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: update_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneletIdRegulatoryElementPair(
        full_bounded, current_alignment);
    }
  }

  // Member: remove_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneletIdRegulatoryElementPair(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MapUpdateReadable__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::MapUpdateReadable *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapUpdateReadable__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_debug_ros2_msgs::msg::MapUpdateReadable *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapUpdateReadable__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::MapUpdateReadable *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapUpdateReadable__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MapUpdateReadable(full_bounded, 0);
}

static message_type_support_callbacks_t _MapUpdateReadable__callbacks = {
  "carma_debug_ros2_msgs::msg",
  "MapUpdateReadable",
  _MapUpdateReadable__cdr_serialize,
  _MapUpdateReadable__cdr_deserialize,
  _MapUpdateReadable__get_serialized_size,
  _MapUpdateReadable__max_serialized_size
};

static rosidl_message_type_support_t _MapUpdateReadable__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapUpdateReadable__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_debug_ros2_msgs::msg::MapUpdateReadable>()
{
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_MapUpdateReadable__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_debug_ros2_msgs, msg, MapUpdateReadable)() {
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_MapUpdateReadable__handle;
}

#ifdef __cplusplus
}
#endif
