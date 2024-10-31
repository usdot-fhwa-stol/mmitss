// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"

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
  const j2735_v2x_msgs::msg::NodeAttributeXY &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::NodeAttributeXY &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::NodeAttributeXY &,
  size_t current_alignment);
size_t
max_serialized_size_NodeAttributeXY(
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
  const j2735_v2x_msgs::msg::SegmentAttributeXY &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::SegmentAttributeXY &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::SegmentAttributeXY &,
  size_t current_alignment);
size_t
max_serialized_size_SegmentAttributeXY(
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
  const j2735_v2x_msgs::msg::SegmentAttributeXY &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::SegmentAttributeXY &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::SegmentAttributeXY &,
  size_t current_alignment);
size_t
max_serialized_size_SegmentAttributeXY(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::LaneDataAttribute &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::LaneDataAttribute &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::LaneDataAttribute &,
  size_t current_alignment);
size_t
max_serialized_size_LaneDataAttribute(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs


namespace carma_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::NodeAttributeSetXY & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: local_node
  {
    size_t size = ros_message.local_node.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.local_node[i],
        cdr);
    }
  }
  // Member: local_node_exists
  cdr << (ros_message.local_node_exists ? true : false);
  // Member: disabled
  {
    size_t size = ros_message.disabled.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.disabled[i],
        cdr);
    }
  }
  // Member: disabled_exists
  cdr << (ros_message.disabled_exists ? true : false);
  // Member: enabled
  {
    size_t size = ros_message.enabled.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.enabled[i],
        cdr);
    }
  }
  // Member: enabled_exists
  cdr << (ros_message.enabled_exists ? true : false);
  // Member: lane_attribute_list
  {
    size_t size = ros_message.lane_attribute_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.lane_attribute_list[i],
        cdr);
    }
  }
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::NodeAttributeSetXY & ros_message)
{
  // Member: local_node
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.local_node.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.local_node[i]);
    }
  }

  // Member: local_node_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_node_exists = tmp ? true : false;
  }

  // Member: disabled
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.disabled.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.disabled[i]);
    }
  }

  // Member: disabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.disabled_exists = tmp ? true : false;
  }

  // Member: enabled
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.enabled.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.enabled[i]);
    }
  }

  // Member: enabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled_exists = tmp ? true : false;
  }

  // Member: lane_attribute_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.lane_attribute_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.lane_attribute_list[i]);
    }
  }

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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::NodeAttributeSetXY & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: local_node
  {
    size_t array_size = ros_message.local_node.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.local_node[index], current_alignment);
    }
  }
  // Member: local_node_exists
  {
    size_t item_size = sizeof(ros_message.local_node_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disabled
  {
    size_t array_size = ros_message.disabled.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.disabled[index], current_alignment);
    }
  }
  // Member: disabled_exists
  {
    size_t item_size = sizeof(ros_message.disabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enabled
  {
    size_t array_size = ros_message.enabled.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.enabled[index], current_alignment);
    }
  }
  // Member: enabled_exists
  {
    size_t item_size = sizeof(ros_message.enabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_attribute_list
  {
    size_t array_size = ros_message.lane_attribute_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.lane_attribute_list[index], current_alignment);
    }
  }
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
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
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeAttributeXY(
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
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SegmentAttributeXY(
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
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SegmentAttributeXY(
        full_bounded, current_alignment);
    }
  }

  // Member: enabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_attribute_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneDataAttribute(
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
    static_cast<const carma_v2x_msgs::msg::NodeAttributeSetXY *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NodeAttributeSetXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::NodeAttributeSetXY *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NodeAttributeSetXY__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::NodeAttributeSetXY *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NodeAttributeSetXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NodeAttributeSetXY(full_bounded, 0);
}

static message_type_support_callbacks_t _NodeAttributeSetXY__callbacks = {
  "carma_v2x_msgs::msg",
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

}  // namespace carma_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_NodeAttributeSetXY__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, NodeAttributeSetXY)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_NodeAttributeSetXY__handle;
}

#ifdef __cplusplus
}
#endif
