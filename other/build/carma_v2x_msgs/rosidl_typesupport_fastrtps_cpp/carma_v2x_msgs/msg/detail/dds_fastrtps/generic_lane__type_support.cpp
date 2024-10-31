// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/generic_lane__struct.hpp"

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
  const j2735_v2x_msgs::msg::LaneAttributes &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::LaneAttributes &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::LaneAttributes &,
  size_t current_alignment);
size_t
max_serialized_size_LaneAttributes(
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
  const j2735_v2x_msgs::msg::AllowedManeuvers &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::AllowedManeuvers &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::AllowedManeuvers &,
  size_t current_alignment);
size_t
max_serialized_size_AllowedManeuvers(
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
  const carma_v2x_msgs::msg::NodeListXY &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::NodeListXY &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::NodeListXY &,
  size_t current_alignment);
size_t
max_serialized_size_NodeListXY(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::Connection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::Connection &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::Connection &,
  size_t current_alignment);
size_t
max_serialized_size_Connection(
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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::GenericLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lane_id
  cdr << ros_message.lane_id;
  // Member: name
  cdr << ros_message.name;
  // Member: name_exists
  cdr << (ros_message.name_exists ? true : false);
  // Member: ingress_approach
  cdr << ros_message.ingress_approach;
  // Member: ingress_approach_exists
  cdr << (ros_message.ingress_approach_exists ? true : false);
  // Member: egress_approach
  cdr << ros_message.egress_approach;
  // Member: egress_approach_exists
  cdr << (ros_message.egress_approach_exists ? true : false);
  // Member: lane_attributes
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lane_attributes,
    cdr);
  // Member: maneuvers
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.maneuvers,
    cdr);
  // Member: maneuvers_exists
  cdr << (ros_message.maneuvers_exists ? true : false);
  // Member: node_list
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.node_list,
    cdr);
  // Member: connect_to_list
  {
    size_t size = ros_message.connect_to_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.connect_to_list[i],
        cdr);
    }
  }
  // Member: connects_to_exists
  cdr << (ros_message.connects_to_exists ? true : false);
  // Member: overlay_lane_list
  {
    cdr << ros_message.overlay_lane_list;
  }
  // Member: overlay_lane_list_exists
  cdr << (ros_message.overlay_lane_list_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::GenericLane & ros_message)
{
  // Member: lane_id
  cdr >> ros_message.lane_id;

  // Member: name
  cdr >> ros_message.name;

  // Member: name_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.name_exists = tmp ? true : false;
  }

  // Member: ingress_approach
  cdr >> ros_message.ingress_approach;

  // Member: ingress_approach_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ingress_approach_exists = tmp ? true : false;
  }

  // Member: egress_approach
  cdr >> ros_message.egress_approach;

  // Member: egress_approach_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.egress_approach_exists = tmp ? true : false;
  }

  // Member: lane_attributes
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lane_attributes);

  // Member: maneuvers
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.maneuvers);

  // Member: maneuvers_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.maneuvers_exists = tmp ? true : false;
  }

  // Member: node_list
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.node_list);

  // Member: connect_to_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.connect_to_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.connect_to_list[i]);
    }
  }

  // Member: connects_to_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connects_to_exists = tmp ? true : false;
  }

  // Member: overlay_lane_list
  {
    cdr >> ros_message.overlay_lane_list;
  }

  // Member: overlay_lane_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overlay_lane_list_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::GenericLane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lane_id
  {
    size_t item_size = sizeof(ros_message.lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: name_exists
  {
    size_t item_size = sizeof(ros_message.name_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ingress_approach
  {
    size_t item_size = sizeof(ros_message.ingress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ingress_approach_exists
  {
    size_t item_size = sizeof(ros_message.ingress_approach_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: egress_approach
  {
    size_t item_size = sizeof(ros_message.egress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: egress_approach_exists
  {
    size_t item_size = sizeof(ros_message.egress_approach_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_attributes

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lane_attributes, current_alignment);
  // Member: maneuvers

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.maneuvers, current_alignment);
  // Member: maneuvers_exists
  {
    size_t item_size = sizeof(ros_message.maneuvers_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: node_list

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.node_list, current_alignment);
  // Member: connect_to_list
  {
    size_t array_size = ros_message.connect_to_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.connect_to_list[index], current_alignment);
    }
  }
  // Member: connects_to_exists
  {
    size_t item_size = sizeof(ros_message.connects_to_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overlay_lane_list
  {
    size_t array_size = ros_message.overlay_lane_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.overlay_lane_list[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overlay_lane_list_exists
  {
    size_t item_size = sizeof(ros_message.overlay_lane_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_GenericLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: name_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ingress_approach
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ingress_approach_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: egress_approach
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: egress_approach_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_attributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneAttributes(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuvers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AllowedManeuvers(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuvers_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: node_list
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeListXY(
        full_bounded, current_alignment);
    }
  }

  // Member: connect_to_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Connection(
        full_bounded, current_alignment);
    }
  }

  // Member: connects_to_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overlay_lane_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: overlay_lane_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GenericLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::GenericLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GenericLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::GenericLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GenericLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::GenericLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GenericLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GenericLane(full_bounded, 0);
}

static message_type_support_callbacks_t _GenericLane__callbacks = {
  "carma_v2x_msgs::msg",
  "GenericLane",
  _GenericLane__cdr_serialize,
  _GenericLane__cdr_deserialize,
  _GenericLane__get_serialized_size,
  _GenericLane__max_serialized_size
};

static rosidl_message_type_support_t _GenericLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GenericLane__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::GenericLane>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_GenericLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, GenericLane)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_GenericLane__handle;
}

#ifdef __cplusplus
}
#endif
