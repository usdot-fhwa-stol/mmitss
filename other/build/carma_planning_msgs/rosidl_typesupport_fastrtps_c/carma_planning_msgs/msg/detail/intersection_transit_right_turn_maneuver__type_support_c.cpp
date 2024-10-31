// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/IntersectionTransitRightTurnManeuver.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__struct.h"
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // end_time, start_time
#include "carma_planning_msgs/msg/detail/maneuver_parameters__functions.h"  // parameters
#include "rosidl_runtime_c/string.h"  // ending_lane_id, starting_lane_id
#include "rosidl_runtime_c/string_functions.h"  // ending_lane_id, starting_lane_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverParameters)();


using _IntersectionTransitRightTurnManeuver__ros_msg_type = carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver;

static bool _IntersectionTransitRightTurnManeuver__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntersectionTransitRightTurnManeuver__ros_msg_type * ros_message = static_cast<const _IntersectionTransitRightTurnManeuver__ros_msg_type *>(untyped_ros_message);
  // Field name: parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverParameters
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->parameters, cdr))
    {
      return false;
    }
  }

  // Field name: start_dist
  {
    cdr << ros_message->start_dist;
  }

  // Field name: start_speed
  {
    cdr << ros_message->start_speed;
  }

  // Field name: start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_time, cdr))
    {
      return false;
    }
  }

  // Field name: end_dist
  {
    cdr << ros_message->end_dist;
  }

  // Field name: end_speed
  {
    cdr << ros_message->end_speed;
  }

  // Field name: end_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end_time, cdr))
    {
      return false;
    }
  }

  // Field name: starting_lane_id
  {
    const rosidl_runtime_c__String * str = &ros_message->starting_lane_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ending_lane_id
  {
    const rosidl_runtime_c__String * str = &ros_message->ending_lane_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _IntersectionTransitRightTurnManeuver__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntersectionTransitRightTurnManeuver__ros_msg_type * ros_message = static_cast<_IntersectionTransitRightTurnManeuver__ros_msg_type *>(untyped_ros_message);
  // Field name: parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverParameters
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->parameters))
    {
      return false;
    }
  }

  // Field name: start_dist
  {
    cdr >> ros_message->start_dist;
  }

  // Field name: start_speed
  {
    cdr >> ros_message->start_speed;
  }

  // Field name: start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_time))
    {
      return false;
    }
  }

  // Field name: end_dist
  {
    cdr >> ros_message->end_dist;
  }

  // Field name: end_speed
  {
    cdr >> ros_message->end_speed;
  }

  // Field name: end_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end_time))
    {
      return false;
    }
  }

  // Field name: starting_lane_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->starting_lane_id.data) {
      rosidl_runtime_c__String__init(&ros_message->starting_lane_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->starting_lane_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'starting_lane_id'\n");
      return false;
    }
  }

  // Field name: ending_lane_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ending_lane_id.data) {
      rosidl_runtime_c__String__init(&ros_message->ending_lane_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ending_lane_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ending_lane_id'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntersectionTransitRightTurnManeuver__ros_msg_type * ros_message = static_cast<const _IntersectionTransitRightTurnManeuver__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name parameters

  current_alignment += get_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
    &(ros_message->parameters), current_alignment);
  // field.name start_dist
  {
    size_t item_size = sizeof(ros_message->start_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_speed
  {
    size_t item_size = sizeof(ros_message->start_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->start_time), current_alignment);
  // field.name end_dist
  {
    size_t item_size = sizeof(ros_message->end_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_speed
  {
    size_t item_size = sizeof(ros_message->end_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->end_time), current_alignment);
  // field.name starting_lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->starting_lane_id.size + 1);
  // field.name ending_lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ending_lane_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _IntersectionTransitRightTurnManeuver__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: parameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
        full_bounded, current_alignment);
    }
  }
  // member: start_dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: start_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: start_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: end_dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: starting_lane_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ending_lane_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _IntersectionTransitRightTurnManeuver__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IntersectionTransitRightTurnManeuver = {
  "carma_planning_msgs::msg",
  "IntersectionTransitRightTurnManeuver",
  _IntersectionTransitRightTurnManeuver__cdr_serialize,
  _IntersectionTransitRightTurnManeuver__cdr_deserialize,
  _IntersectionTransitRightTurnManeuver__get_serialized_size,
  _IntersectionTransitRightTurnManeuver__max_serialized_size
};

static rosidl_message_type_support_t _IntersectionTransitRightTurnManeuver__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntersectionTransitRightTurnManeuver,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, IntersectionTransitRightTurnManeuver)() {
  return &_IntersectionTransitRightTurnManeuver__type_support;
}

#if defined(__cplusplus)
}
#endif
