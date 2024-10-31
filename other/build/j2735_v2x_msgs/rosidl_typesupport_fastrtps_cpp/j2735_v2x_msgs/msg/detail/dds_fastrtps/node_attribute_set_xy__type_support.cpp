// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"

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
  const j2735_v2x_msgs::msg::NodeAttributeXYList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::NodeAttributeXYList &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::NodeAttributeXYList &,
  size_t current_alignment);
size_t
max_serialized_size_NodeAttributeXYList(
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
  const j2735_v2x_msgs::msg::SegmentAttributeXYList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::SegmentAttributeXYList &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::SegmentAttributeXYList &,
  size_t current_alignment);
size_t
max_serialized_size_SegmentAttributeXYList(
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
  const j2735_v2x_msgs::msg::SegmentAttributeXYList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::SegmentAttributeXYList &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::SegmentAttributeXYList &,
  size_t current_alignment);
size_t
max_serialized_size_SegmentAttributeXYList(
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
  const j2735_v2x_msgs::msg::LaneDataAttributeList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::LaneDataAttributeList &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::LaneDataAttributeList &,
  size_t current_alignment);
size_t
max_serialized_size_LaneDataAttributeList(
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
  const j2735_v2x_msgs::msg::NodeAttributeSetXY & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: local_node
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.local_node,
    cdr);
  // Member: local_node_exists
  cdr << (ros_message.local_node_exists ? true : false);
  // Member: disabled
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.disabled,
    cdr);
  // Member: disabled_exists
  cdr << (ros_message.disabled_exists ? true : false);
  // Member: enabled
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.enabled,
    cdr);
  // Member: enabled_exists
  cdr << (ros_message.enabled_exists ? true : false);
  // Member: data
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.data,
    cdr);
  // Member: data_exists
  cdr << (ros_message.data_exists ? true : false);
  // Member: d_width
  cdr << ros_message.d_width;
  // Member: d_width_exists
  cdr << (ros_message.d_width_exists ? true : false);
  // Member: d_elevation
  cdr << ros_message.d_elevation;
  // Member: d_elevation_exists
  cdr << (ros_message.d_elevation_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::NodeAttributeSetXY & ros_message)
{
  // Member: local_node
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.local_node);

  // Member: local_node_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_node_exists = tmp ? true : false;
  }

  // Member: disabled
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.disabled);

  // Member: disabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.disabled_exists = tmp ? true : false;
  }

  // Member: enabled
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.enabled);

  // Member: enabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled_exists = tmp ? true : false;
  }

  // Member: data
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.data);

  // Member: data_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.data_exists = tmp ? true : false;
  }

  // Member: d_width
  cdr >> ros_message.d_width;

  // Member: d_width_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.d_width_exists = tmp ? true : false;
  }

  // Member: d_elevation
  cdr >> ros_message.d_elevation;

  // Member: d_elevation_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.d_elevation_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::NodeAttributeSetXY & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: local_node

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.local_node, current_alignment);
  // Member: local_node_exists
  {
    size_t item_size = sizeof(ros_message.local_node_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disabled

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.disabled, current_alignment);
  // Member: disabled_exists
  {
    size_t item_size = sizeof(ros_message.disabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enabled

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.enabled, current_alignment);
  // Member: enabled_exists
  {
    size_t item_size = sizeof(ros_message.enabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.data, current_alignment);
  // Member: data_exists
  {
    size_t item_size = sizeof(ros_message.data_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d_width
  {
    size_t item_size = sizeof(ros_message.d_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d_width_exists
  {
    size_t item_size = sizeof(ros_message.d_width_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d_elevation
  {
    size_t item_size = sizeof(ros_message.d_elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d_elevation_exists
  {
    size_t item_size = sizeof(ros_message.d_elevation_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_NodeAttributeSetXY(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: local_node
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeAttributeXYList(
        full_bounded, current_alignment);
    }
  }

  // Member: local_node_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SegmentAttributeXYList(
        full_bounded, current_alignment);
    }
  }

  // Member: disabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SegmentAttributeXYList(
        full_bounded, current_alignment);
    }
  }

  // Member: enabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneDataAttributeList(
        full_bounded, current_alignment);
    }
  }

  // Member: data_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: d_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: d_width_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: d_elevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: d_elevation_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NodeAttributeSetXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::NodeAttributeSetXY *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NodeAttributeSetXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::NodeAttributeSetXY *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NodeAttributeSetXY__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::NodeAttributeSetXY *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NodeAttributeSetXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NodeAttributeSetXY(full_bounded, 0);
}

static message_type_support_callbacks_t _NodeAttributeSetXY__callbacks = {
  "j2735_v2x_msgs::msg",
  "NodeAttributeSetXY",
  _NodeAttributeSetXY__cdr_serialize,
  _NodeAttributeSetXY__cdr_deserialize,
  _NodeAttributeSetXY__get_serialized_size,
  _NodeAttributeSetXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeAttributeSetXY__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NodeAttributeSetXY__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_NodeAttributeSetXY__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, NodeAttributeSetXY)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_NodeAttributeSetXY__handle;
}

#ifdef __cplusplus
}
#endif
