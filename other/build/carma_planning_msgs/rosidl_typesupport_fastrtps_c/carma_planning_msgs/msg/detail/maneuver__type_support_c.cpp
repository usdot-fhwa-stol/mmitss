// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/maneuver__struct.h"
#include "carma_planning_msgs/msg/detail/maneuver__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__functions.h"  // intersection_transit_left_turn_maneuver
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__functions.h"  // intersection_transit_right_turn_maneuver
#include "carma_planning_msgs/msg/detail/intersection_transit_straight_maneuver__functions.h"  // intersection_transit_straight_maneuver
#include "carma_planning_msgs/msg/detail/lane_change_maneuver__functions.h"  // lane_change_maneuver
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__functions.h"  // lane_following_maneuver
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__functions.h"  // stop_and_wait_maneuver

// forward declare type support functions
size_t get_serialized_size_carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitLeftTurnManeuver)();
size_t get_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitRightTurnManeuver)();
size_t get_serialized_size_carma_planning_msgs__msg__IntersectionTransitStraightManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__IntersectionTransitStraightManeuver(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitStraightManeuver)();
size_t get_serialized_size_carma_planning_msgs__msg__LaneChangeManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__LaneChangeManeuver(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneChangeManeuver)();
size_t get_serialized_size_carma_planning_msgs__msg__LaneFollowingManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__LaneFollowingManeuver(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneFollowingManeuver)();
size_t get_serialized_size_carma_planning_msgs__msg__StopAndWaitManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__StopAndWaitManeuver(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, StopAndWaitManeuver)();


using _Maneuver__ros_msg_type = carma_planning_msgs__msg__Maneuver;

static bool _Maneuver__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Maneuver__ros_msg_type * ros_message = static_cast<const _Maneuver__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: lane_following_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneFollowingManeuver
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_following_maneuver, cdr))
    {
      return false;
    }
  }

  // Field name: lane_change_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneChangeManeuver
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_change_maneuver, cdr))
    {
      return false;
    }
  }

  // Field name: intersection_transit_straight_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitStraightManeuver
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->intersection_transit_straight_maneuver, cdr))
    {
      return false;
    }
  }

  // Field name: intersection_transit_left_turn_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitLeftTurnManeuver
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->intersection_transit_left_turn_maneuver, cdr))
    {
      return false;
    }
  }

  // Field name: intersection_transit_right_turn_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitRightTurnManeuver
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->intersection_transit_right_turn_maneuver, cdr))
    {
      return false;
    }
  }

  // Field name: stop_and_wait_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, StopAndWaitManeuver
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stop_and_wait_maneuver, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Maneuver__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Maneuver__ros_msg_type * ros_message = static_cast<_Maneuver__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: lane_following_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneFollowingManeuver
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_following_maneuver))
    {
      return false;
    }
  }

  // Field name: lane_change_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneChangeManeuver
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_change_maneuver))
    {
      return false;
    }
  }

  // Field name: intersection_transit_straight_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitStraightManeuver
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->intersection_transit_straight_maneuver))
    {
      return false;
    }
  }

  // Field name: intersection_transit_left_turn_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitLeftTurnManeuver
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->intersection_transit_left_turn_maneuver))
    {
      return false;
    }
  }

  // Field name: intersection_transit_right_turn_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitRightTurnManeuver
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->intersection_transit_right_turn_maneuver))
    {
      return false;
    }
  }

  // Field name: stop_and_wait_maneuver
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, StopAndWaitManeuver
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stop_and_wait_maneuver))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__Maneuver(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Maneuver__ros_msg_type * ros_message = static_cast<const _Maneuver__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_following_maneuver

  current_alignment += get_serialized_size_carma_planning_msgs__msg__LaneFollowingManeuver(
    &(ros_message->lane_following_maneuver), current_alignment);
  // field.name lane_change_maneuver

  current_alignment += get_serialized_size_carma_planning_msgs__msg__LaneChangeManeuver(
    &(ros_message->lane_change_maneuver), current_alignment);
  // field.name intersection_transit_straight_maneuver

  current_alignment += get_serialized_size_carma_planning_msgs__msg__IntersectionTransitStraightManeuver(
    &(ros_message->intersection_transit_straight_maneuver), current_alignment);
  // field.name intersection_transit_left_turn_maneuver

  current_alignment += get_serialized_size_carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver(
    &(ros_message->intersection_transit_left_turn_maneuver), current_alignment);
  // field.name intersection_transit_right_turn_maneuver

  current_alignment += get_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
    &(ros_message->intersection_transit_right_turn_maneuver), current_alignment);
  // field.name stop_and_wait_maneuver

  current_alignment += get_serialized_size_carma_planning_msgs__msg__StopAndWaitManeuver(
    &(ros_message->stop_and_wait_maneuver), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Maneuver__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__Maneuver(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__Maneuver(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_following_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__LaneFollowingManeuver(
        full_bounded, current_alignment);
    }
  }
  // member: lane_change_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__LaneChangeManeuver(
        full_bounded, current_alignment);
    }
  }
  // member: intersection_transit_straight_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__IntersectionTransitStraightManeuver(
        full_bounded, current_alignment);
    }
  }
  // member: intersection_transit_left_turn_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver(
        full_bounded, current_alignment);
    }
  }
  // member: intersection_transit_right_turn_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
        full_bounded, current_alignment);
    }
  }
  // member: stop_and_wait_maneuver
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__StopAndWaitManeuver(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Maneuver__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__Maneuver(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Maneuver = {
  "carma_planning_msgs::msg",
  "Maneuver",
  _Maneuver__cdr_serialize,
  _Maneuver__cdr_deserialize,
  _Maneuver__get_serialized_size,
  _Maneuver__max_serialized_size
};

static rosidl_message_type_support_t _Maneuver__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Maneuver,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, Maneuver)() {
  return &_Maneuver__type_support;
}

#if defined(__cplusplus)
}
#endif
