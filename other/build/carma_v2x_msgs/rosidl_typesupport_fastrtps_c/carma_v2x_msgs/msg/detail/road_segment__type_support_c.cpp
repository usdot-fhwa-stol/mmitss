// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/road_segment__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/road_segment__struct.h"
#include "carma_v2x_msgs/msg/detail/road_segment__functions.h"
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

#include "carma_v2x_msgs/msg/detail/generic_lane__functions.h"  // road_lane_set_list
#include "carma_v2x_msgs/msg/detail/position3_d__functions.h"  // ref_point
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"  // speed_limits
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__functions.h"  // id
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__GenericLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__GenericLane(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GenericLane)();
size_t get_serialized_size_carma_v2x_msgs__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Position3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D)();
size_t get_serialized_size_carma_v2x_msgs__msg__RegulatorySpeedLimit(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__RegulatorySpeedLimit(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RegulatorySpeedLimit)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__RoadSegmentReferenceID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__RoadSegmentReferenceID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadSegmentReferenceID)();


using _RoadSegment__ros_msg_type = carma_v2x_msgs__msg__RoadSegment;

static bool _RoadSegment__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadSegment__ros_msg_type * ros_message = static_cast<const _RoadSegment__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: name_exists
  {
    cdr << (ros_message->name_exists ? true : false);
  }

  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadSegmentReferenceID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->id, cdr))
    {
      return false;
    }
  }

  // Field name: revision
  {
    cdr << ros_message->revision;
  }

  // Field name: ref_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ref_point, cdr))
    {
      return false;
    }
  }

  // Field name: lane_width
  {
    cdr << ros_message->lane_width;
  }

  // Field name: lane_width_exists
  {
    cdr << (ros_message->lane_width_exists ? true : false);
  }

  // Field name: speed_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RegulatorySpeedLimit
      )()->data);
    size_t size = ros_message->speed_limits.size;
    auto array_ptr = ros_message->speed_limits.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: speed_limits_exists
  {
    cdr << (ros_message->speed_limits_exists ? true : false);
  }

  // Field name: road_lane_set_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GenericLane
      )()->data);
    size_t size = ros_message->road_lane_set_list.size;
    auto array_ptr = ros_message->road_lane_set_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RoadSegment__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadSegment__ros_msg_type * ros_message = static_cast<_RoadSegment__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: name_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->name_exists = tmp ? true : false;
  }

  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadSegmentReferenceID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->id))
    {
      return false;
    }
  }

  // Field name: revision
  {
    cdr >> ros_message->revision;
  }

  // Field name: ref_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ref_point))
    {
      return false;
    }
  }

  // Field name: lane_width
  {
    cdr >> ros_message->lane_width;
  }

  // Field name: lane_width_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lane_width_exists = tmp ? true : false;
  }

  // Field name: speed_limits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RegulatorySpeedLimit
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speed_limits.data) {
      carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__fini(&ros_message->speed_limits);
    }
    if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(&ros_message->speed_limits, size)) {
      return "failed to create array for field 'speed_limits'";
    }
    auto array_ptr = ros_message->speed_limits.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: speed_limits_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed_limits_exists = tmp ? true : false;
  }

  // Field name: road_lane_set_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GenericLane
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->road_lane_set_list.data) {
      carma_v2x_msgs__msg__GenericLane__Sequence__fini(&ros_message->road_lane_set_list);
    }
    if (!carma_v2x_msgs__msg__GenericLane__Sequence__init(&ros_message->road_lane_set_list, size)) {
      return "failed to create array for field 'road_lane_set_list'";
    }
    auto array_ptr = ros_message->road_lane_set_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__RoadSegment(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadSegment__ros_msg_type * ros_message = static_cast<const _RoadSegment__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name name_exists
  {
    size_t item_size = sizeof(ros_message->name_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__RoadSegmentReferenceID(
    &(ros_message->id), current_alignment);
  // field.name revision
  {
    size_t item_size = sizeof(ros_message->revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_point

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Position3D(
    &(ros_message->ref_point), current_alignment);
  // field.name lane_width
  {
    size_t item_size = sizeof(ros_message->lane_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_width_exists
  {
    size_t item_size = sizeof(ros_message->lane_width_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limits
  {
    size_t array_size = ros_message->speed_limits.size;
    auto array_ptr = ros_message->speed_limits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__RegulatorySpeedLimit(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name speed_limits_exists
  {
    size_t item_size = sizeof(ros_message->speed_limits_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_lane_set_list
  {
    size_t array_size = ros_message->road_lane_set_list.size;
    auto array_ptr = ros_message->road_lane_set_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__GenericLane(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadSegment__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__RoadSegment(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__RoadSegment(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__RoadSegmentReferenceID(
        full_bounded, current_alignment);
    }
  }
  // member: revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Position3D(
        full_bounded, current_alignment);
    }
  }
  // member: lane_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_width_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__RegulatorySpeedLimit(
        full_bounded, current_alignment);
    }
  }
  // member: speed_limits_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_lane_set_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__GenericLane(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadSegment__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__RoadSegment(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RoadSegment = {
  "carma_v2x_msgs::msg",
  "RoadSegment",
  _RoadSegment__cdr_serialize,
  _RoadSegment__cdr_deserialize,
  _RoadSegment__get_serialized_size,
  _RoadSegment__max_serialized_size
};

static rosidl_message_type_support_t _RoadSegment__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadSegment,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RoadSegment)() {
  return &_RoadSegment__type_support;
}

#if defined(__cplusplus)
}
#endif
