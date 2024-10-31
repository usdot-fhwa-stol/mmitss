// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/intersection_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/intersection_state__struct.hpp"

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
bool cdr_serialize(
  const j2735_v2x_msgs::msg::IntersectionStatusObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::IntersectionStatusObject &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::IntersectionStatusObject &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionStatusObject(
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
  const carma_v2x_msgs::msg::MovementState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::MovementState &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::MovementState &,
  size_t current_alignment);
size_t
max_serialized_size_MovementState(
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
  const j2735_v2x_msgs::msg::ConnectionManeuverAssist &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::ConnectionManeuverAssist &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::ConnectionManeuverAssist &,
  size_t current_alignment);
size_t
max_serialized_size_ConnectionManeuverAssist(
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
  const carma_v2x_msgs::msg::IntersectionState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: name_exists
  cdr << (ros_message.name_exists ? true : false);
  // Member: id
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.id,
    cdr);
  // Member: revision
  cdr << ros_message.revision;
  // Member: status
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status,
    cdr);
  // Member: moy
  cdr << ros_message.moy;
  // Member: moy_exists
  cdr << (ros_message.moy_exists ? true : false);
  // Member: time_stamp
  cdr << ros_message.time_stamp;
  // Member: time_stamp_exists
  cdr << (ros_message.time_stamp_exists ? true : false);
  // Member: lane_id_list
  {
    cdr << ros_message.lane_id_list;
  }
  // Member: enabled_lanes_exists
  cdr << (ros_message.enabled_lanes_exists ? true : false);
  // Member: movement_list
  {
    size_t size = ros_message.movement_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.movement_list[i],
        cdr);
    }
  }
  // Member: connection_maneuver_assist_list
  {
    size_t size = ros_message.connection_maneuver_assist_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.connection_maneuver_assist_list[i],
        cdr);
    }
  }
  // Member: maneuever_assist_list_exists
  cdr << (ros_message.maneuever_assist_list_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::IntersectionState & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: name_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.name_exists = tmp ? true : false;
  }

  // Member: id
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.id);

  // Member: revision
  cdr >> ros_message.revision;

  // Member: status
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status);

  // Member: moy
  cdr >> ros_message.moy;

  // Member: moy_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.moy_exists = tmp ? true : false;
  }

  // Member: time_stamp
  cdr >> ros_message.time_stamp;

  // Member: time_stamp_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.time_stamp_exists = tmp ? true : false;
  }

  // Member: lane_id_list
  {
    cdr >> ros_message.lane_id_list;
  }

  // Member: enabled_lanes_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled_lanes_exists = tmp ? true : false;
  }

  // Member: movement_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.movement_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.movement_list[i]);
    }
  }

  // Member: connection_maneuver_assist_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.connection_maneuver_assist_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.connection_maneuver_assist_list[i]);
    }
  }

  // Member: maneuever_assist_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.maneuever_assist_list_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::IntersectionState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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
  // Member: id

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.id, current_alignment);
  // Member: revision
  {
    size_t item_size = sizeof(ros_message.revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status, current_alignment);
  // Member: moy
  {
    size_t item_size = sizeof(ros_message.moy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moy_exists
  {
    size_t item_size = sizeof(ros_message.moy_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_stamp
  {
    size_t item_size = sizeof(ros_message.time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_stamp_exists
  {
    size_t item_size = sizeof(ros_message.time_stamp_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_id_list
  {
    size_t array_size = ros_message.lane_id_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.lane_id_list[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enabled_lanes_exists
  {
    size_t item_size = sizeof(ros_message.enabled_lanes_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: movement_list
  {
    size_t array_size = ros_message.movement_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.movement_list[index], current_alignment);
    }
  }
  // Member: connection_maneuver_assist_list
  {
    size_t array_size = ros_message.connection_maneuver_assist_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.connection_maneuver_assist_list[index], current_alignment);
    }
  }
  // Member: maneuever_assist_list_exists
  {
    size_t item_size = sizeof(ros_message.maneuever_assist_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_IntersectionState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


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

  // Member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionReferenceID(
        full_bounded, current_alignment);
    }
  }

  // Member: revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionStatusObject(
        full_bounded, current_alignment);
    }
  }

  // Member: moy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: moy_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time_stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_stamp_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_id_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: enabled_lanes_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: movement_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MovementState(
        full_bounded, current_alignment);
    }
  }

  // Member: connection_maneuver_assist_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConnectionManeuverAssist(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuever_assist_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _IntersectionState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::IntersectionState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IntersectionState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::IntersectionState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IntersectionState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::IntersectionState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IntersectionState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IntersectionState(full_bounded, 0);
}

static message_type_support_callbacks_t _IntersectionState__callbacks = {
  "carma_v2x_msgs::msg",
  "IntersectionState",
  _IntersectionState__cdr_serialize,
  _IntersectionState__cdr_deserialize,
  _IntersectionState__get_serialized_size,
  _IntersectionState__max_serialized_size
};

static rosidl_message_type_support_t _IntersectionState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IntersectionState__callbacks,
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
get_message_type_support_handle<carma_v2x_msgs::msg::IntersectionState>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_IntersectionState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, IntersectionState)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_IntersectionState__handle;
}

#ifdef __cplusplus
}
#endif
