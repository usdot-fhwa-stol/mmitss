// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/map_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/map_data__struct.h"
#include "j2735_v2x_msgs/msg/detail/map_data__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"  // data_parameters
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__functions.h"  // intersections
#include "j2735_v2x_msgs/msg/detail/layer_type__functions.h"  // layer_type
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__functions.h"  // restriction_list
#include "j2735_v2x_msgs/msg/detail/road_segment_list__functions.h"  // road_segments
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__DataParameters(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__DataParameters(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DataParameters)();
size_t get_serialized_size_j2735_v2x_msgs__msg__IntersectionGeometry(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__IntersectionGeometry(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IntersectionGeometry)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LayerType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LayerType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LayerType)();
size_t get_serialized_size_j2735_v2x_msgs__msg__RestrictionClassList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__RestrictionClassList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RestrictionClassList)();
size_t get_serialized_size_j2735_v2x_msgs__msg__RoadSegmentList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__RoadSegmentList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadSegmentList)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j2735_v2x_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j2735_v2x_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MapData__ros_msg_type = j2735_v2x_msgs__msg__MapData;

static bool _MapData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapData__ros_msg_type * ros_message = static_cast<const _MapData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: time_stamp
  {
    cdr << ros_message->time_stamp;
  }

  // Field name: time_stamp_exists
  {
    cdr << (ros_message->time_stamp_exists ? true : false);
  }

  // Field name: msg_issue_revision
  {
    cdr << ros_message->msg_issue_revision;
  }

  // Field name: layer_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LayerType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->layer_type, cdr))
    {
      return false;
    }
  }

  // Field name: layer_id
  {
    cdr << ros_message->layer_id;
  }

  // Field name: layer_id_exists
  {
    cdr << (ros_message->layer_id_exists ? true : false);
  }

  // Field name: intersections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IntersectionGeometry
      )()->data);
    size_t size = ros_message->intersections.size;
    auto array_ptr = ros_message->intersections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: intersections_exists
  {
    cdr << (ros_message->intersections_exists ? true : false);
  }

  // Field name: road_segments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadSegmentList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->road_segments, cdr))
    {
      return false;
    }
  }

  // Field name: road_segments_exists
  {
    cdr << (ros_message->road_segments_exists ? true : false);
  }

  // Field name: data_parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DataParameters
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->data_parameters, cdr))
    {
      return false;
    }
  }

  // Field name: data_parameters_exists
  {
    cdr << (ros_message->data_parameters_exists ? true : false);
  }

  // Field name: restriction_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RestrictionClassList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->restriction_list, cdr))
    {
      return false;
    }
  }

  // Field name: restriction_list_exists
  {
    cdr << (ros_message->restriction_list_exists ? true : false);
  }

  return true;
}

static bool _MapData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapData__ros_msg_type * ros_message = static_cast<_MapData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: time_stamp
  {
    cdr >> ros_message->time_stamp;
  }

  // Field name: time_stamp_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->time_stamp_exists = tmp ? true : false;
  }

  // Field name: msg_issue_revision
  {
    cdr >> ros_message->msg_issue_revision;
  }

  // Field name: layer_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LayerType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->layer_type))
    {
      return false;
    }
  }

  // Field name: layer_id
  {
    cdr >> ros_message->layer_id;
  }

  // Field name: layer_id_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->layer_id_exists = tmp ? true : false;
  }

  // Field name: intersections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IntersectionGeometry
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->intersections.data) {
      j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(&ros_message->intersections);
    }
    if (!j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__init(&ros_message->intersections, size)) {
      return "failed to create array for field 'intersections'";
    }
    auto array_ptr = ros_message->intersections.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: intersections_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->intersections_exists = tmp ? true : false;
  }

  // Field name: road_segments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadSegmentList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->road_segments))
    {
      return false;
    }
  }

  // Field name: road_segments_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->road_segments_exists = tmp ? true : false;
  }

  // Field name: data_parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DataParameters
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->data_parameters))
    {
      return false;
    }
  }

  // Field name: data_parameters_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data_parameters_exists = tmp ? true : false;
  }

  // Field name: restriction_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RestrictionClassList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->restriction_list))
    {
      return false;
    }
  }

  // Field name: restriction_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->restriction_list_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__MapData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapData__ros_msg_type * ros_message = static_cast<const _MapData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name time_stamp
  {
    size_t item_size = sizeof(ros_message->time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_stamp_exists
  {
    size_t item_size = sizeof(ros_message->time_stamp_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg_issue_revision
  {
    size_t item_size = sizeof(ros_message->msg_issue_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name layer_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LayerType(
    &(ros_message->layer_type), current_alignment);
  // field.name layer_id
  {
    size_t item_size = sizeof(ros_message->layer_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name layer_id_exists
  {
    size_t item_size = sizeof(ros_message->layer_id_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intersections
  {
    size_t array_size = ros_message->intersections.size;
    auto array_ptr = ros_message->intersections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__IntersectionGeometry(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name intersections_exists
  {
    size_t item_size = sizeof(ros_message->intersections_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_segments

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__RoadSegmentList(
    &(ros_message->road_segments), current_alignment);
  // field.name road_segments_exists
  {
    size_t item_size = sizeof(ros_message->road_segments_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_parameters

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DataParameters(
    &(ros_message->data_parameters), current_alignment);
  // field.name data_parameters_exists
  {
    size_t item_size = sizeof(ros_message->data_parameters_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name restriction_list

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__RestrictionClassList(
    &(ros_message->restriction_list), current_alignment);
  // field.name restriction_list_exists
  {
    size_t item_size = sizeof(ros_message->restriction_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__MapData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__MapData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: time_stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_stamp_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: msg_issue_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: layer_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LayerType(
        full_bounded, current_alignment);
    }
  }
  // member: layer_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: layer_id_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__IntersectionGeometry(
        full_bounded, current_alignment);
    }
  }
  // member: intersections_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_segments
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__RoadSegmentList(
        full_bounded, current_alignment);
    }
  }
  // member: road_segments_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data_parameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DataParameters(
        full_bounded, current_alignment);
    }
  }
  // member: data_parameters_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: restriction_list
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__RestrictionClassList(
        full_bounded, current_alignment);
    }
  }
  // member: restriction_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MapData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__MapData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MapData = {
  "j2735_v2x_msgs::msg",
  "MapData",
  _MapData__cdr_serialize,
  _MapData__cdr_deserialize,
  _MapData__get_serialized_size,
  _MapData__max_serialized_size
};

static rosidl_message_type_support_t _MapData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MapData)() {
  return &_MapData__type_support;
}

#if defined(__cplusplus)
}
#endif
