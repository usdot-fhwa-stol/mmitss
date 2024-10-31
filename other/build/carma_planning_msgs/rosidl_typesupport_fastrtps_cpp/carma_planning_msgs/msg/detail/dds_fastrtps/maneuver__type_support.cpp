// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/msg/detail/maneuver__struct.hpp"

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
namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::LaneFollowingManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::LaneFollowingManeuver &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::LaneFollowingManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_LaneFollowingManeuver(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::LaneChangeManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::LaneChangeManeuver &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::LaneChangeManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_LaneChangeManeuver(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::IntersectionTransitStraightManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::IntersectionTransitStraightManeuver &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::IntersectionTransitStraightManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionTransitStraightManeuver(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionTransitLeftTurnManeuver(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionTransitRightTurnManeuver(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::StopAndWaitManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::StopAndWaitManeuver &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::StopAndWaitManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_StopAndWaitManeuver(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::msg::Maneuver & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: lane_following_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lane_following_maneuver,
    cdr);
  // Member: lane_change_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lane_change_maneuver,
    cdr);
  // Member: intersection_transit_straight_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.intersection_transit_straight_maneuver,
    cdr);
  // Member: intersection_transit_left_turn_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.intersection_transit_left_turn_maneuver,
    cdr);
  // Member: intersection_transit_right_turn_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.intersection_transit_right_turn_maneuver,
    cdr);
  // Member: stop_and_wait_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stop_and_wait_maneuver,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::msg::Maneuver & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: lane_following_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lane_following_maneuver);

  // Member: lane_change_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lane_change_maneuver);

  // Member: intersection_transit_straight_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.intersection_transit_straight_maneuver);

  // Member: intersection_transit_left_turn_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.intersection_transit_left_turn_maneuver);

  // Member: intersection_transit_right_turn_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.intersection_transit_right_turn_maneuver);

  // Member: stop_and_wait_maneuver
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stop_and_wait_maneuver);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::msg::Maneuver & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_following_maneuver

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lane_following_maneuver, current_alignment);
  // Member: lane_change_maneuver

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lane_change_maneuver, current_alignment);
  // Member: intersection_transit_straight_maneuver

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.intersection_transit_straight_maneuver, current_alignment);
  // Member: intersection_transit_left_turn_maneuver

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.intersection_transit_left_turn_maneuver, current_alignment);
  // Member: intersection_transit_right_turn_maneuver

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.intersection_transit_right_turn_maneuver, current_alignment);
  // Member: stop_and_wait_maneuver

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stop_and_wait_maneuver, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_Maneuver(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_following_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneFollowingManeuver(
        full_bounded, current_alignment);
    }
  }

  // Member: lane_change_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneChangeManeuver(
        full_bounded, current_alignment);
    }
  }

  // Member: intersection_transit_straight_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionTransitStraightManeuver(
        full_bounded, current_alignment);
    }
  }

  // Member: intersection_transit_left_turn_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionTransitLeftTurnManeuver(
        full_bounded, current_alignment);
    }
  }

  // Member: intersection_transit_right_turn_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionTransitRightTurnManeuver(
        full_bounded, current_alignment);
    }
  }

  // Member: stop_and_wait_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_StopAndWaitManeuver(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Maneuver__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::Maneuver *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Maneuver__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::msg::Maneuver *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Maneuver__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::Maneuver *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Maneuver__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Maneuver(full_bounded, 0);
}

static message_type_support_callbacks_t _Maneuver__callbacks = {
  "carma_planning_msgs::msg",
  "Maneuver",
  _Maneuver__cdr_serialize,
  _Maneuver__cdr_deserialize,
  _Maneuver__get_serialized_size,
  _Maneuver__max_serialized_size
};

static rosidl_message_type_support_t _Maneuver__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Maneuver__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::Maneuver>()
{
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_Maneuver__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, msg, Maneuver)() {
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_Maneuver__handle;
}

#ifdef __cplusplus
}
#endif
