// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"  // bumper_heights
#include "j2735_v2x_msgs/msg/detail/is_dolly__functions.h"  // is_dolly
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"  // position_offset
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"  // rear_wheel_offset
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"  // front_pivot, rear_pivot
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__functions.h"  // crumb_data
#include "j2735_v2x_msgs/msg/detail/trailer_mass__functions.h"  // mass
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"  // center_of_gravity, height
#include "j2735_v2x_msgs/msg/detail/vehicle_length__functions.h"  // length
#include "j2735_v2x_msgs/msg/detail/vehicle_width__functions.h"  // width
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"  // elevation_offset

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BumperHeights)();
size_t get_serialized_size_j2735_v2x_msgs__msg__IsDolly(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__IsDolly(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IsDolly)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY24b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB12)();
size_t get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerHistoryPointList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerHistoryPointList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerHistoryPointList)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerMass(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerMass(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerMass)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleLength(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleLength(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleLength)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleWidth(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleWidth(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleWidth)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VertOffsetB07(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VertOffsetB07(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VertOffsetB07)();


using _TrailerUnitDescription__ros_msg_type = j2735_v2x_msgs__msg__TrailerUnitDescription;

static bool _TrailerUnitDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrailerUnitDescription__ros_msg_type * ros_message = static_cast<const _TrailerUnitDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: is_dolly
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IsDolly
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->is_dolly, cdr))
    {
      return false;
    }
  }

  // Field name: width
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleWidth
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->width, cdr))
    {
      return false;
    }
  }

  // Field name: length
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleLength
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->length, cdr))
    {
      return false;
    }
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->height, cdr))
    {
      return false;
    }
  }

  // Field name: mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerMass
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mass, cdr))
    {
      return false;
    }
  }

  // Field name: bumper_heights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BumperHeights
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bumper_heights, cdr))
    {
      return false;
    }
  }

  // Field name: center_of_gravity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->center_of_gravity, cdr))
    {
      return false;
    }
  }

  // Field name: front_pivot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front_pivot, cdr))
    {
      return false;
    }
  }

  // Field name: rear_pivot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_pivot, cdr))
    {
      return false;
    }
  }

  // Field name: rear_wheel_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_wheel_offset, cdr))
    {
      return false;
    }
  }

  // Field name: position_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY24b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position_offset, cdr))
    {
      return false;
    }
  }

  // Field name: elevation_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VertOffsetB07
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elevation_offset, cdr))
    {
      return false;
    }
  }

  // Field name: crumb_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerHistoryPointList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->crumb_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrailerUnitDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrailerUnitDescription__ros_msg_type * ros_message = static_cast<_TrailerUnitDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: is_dolly
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IsDolly
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->is_dolly))
    {
      return false;
    }
  }

  // Field name: width
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleWidth
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->width))
    {
      return false;
    }
  }

  // Field name: length
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleLength
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->length))
    {
      return false;
    }
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->height))
    {
      return false;
    }
  }

  // Field name: mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerMass
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mass))
    {
      return false;
    }
  }

  // Field name: bumper_heights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BumperHeights
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bumper_heights))
    {
      return false;
    }
  }

  // Field name: center_of_gravity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->center_of_gravity))
    {
      return false;
    }
  }

  // Field name: front_pivot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front_pivot))
    {
      return false;
    }
  }

  // Field name: rear_pivot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_pivot))
    {
      return false;
    }
  }

  // Field name: rear_wheel_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_wheel_offset))
    {
      return false;
    }
  }

  // Field name: position_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY24b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position_offset))
    {
      return false;
    }
  }

  // Field name: elevation_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VertOffsetB07
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elevation_offset))
    {
      return false;
    }
  }

  // Field name: crumb_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerHistoryPointList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->crumb_data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrailerUnitDescription__ros_msg_type * ros_message = static_cast<const _TrailerUnitDescription__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_dolly

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__IsDolly(
    &(ros_message->is_dolly), current_alignment);
  // field.name width

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleWidth(
    &(ros_message->width), current_alignment);
  // field.name length

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleLength(
    &(ros_message->length), current_alignment);
  // field.name height

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
    &(ros_message->height), current_alignment);
  // field.name mass

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrailerMass(
    &(ros_message->mass), current_alignment);
  // field.name bumper_heights

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
    &(ros_message->bumper_heights), current_alignment);
  // field.name center_of_gravity

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
    &(ros_message->center_of_gravity), current_alignment);
  // field.name front_pivot

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
    &(ros_message->front_pivot), current_alignment);
  // field.name rear_pivot

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
    &(ros_message->rear_pivot), current_alignment);
  // field.name rear_wheel_offset

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
    &(ros_message->rear_wheel_offset), current_alignment);
  // field.name position_offset

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
    &(ros_message->position_offset), current_alignment);
  // field.name elevation_offset

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VertOffsetB07(
    &(ros_message->elevation_offset), current_alignment);
  // field.name crumb_data

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrailerHistoryPointList(
    &(ros_message->crumb_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrailerUnitDescription__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescription(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_dolly
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__IsDolly(
        full_bounded, current_alignment);
    }
  }
  // member: width
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleWidth(
        full_bounded, current_alignment);
    }
  }
  // member: length
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleLength(
        full_bounded, current_alignment);
    }
  }
  // member: height
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
        full_bounded, current_alignment);
    }
  }
  // member: mass
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrailerMass(
        full_bounded, current_alignment);
    }
  }
  // member: bumper_heights
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
        full_bounded, current_alignment);
    }
  }
  // member: center_of_gravity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
        full_bounded, current_alignment);
    }
  }
  // member: front_pivot
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
        full_bounded, current_alignment);
    }
  }
  // member: rear_pivot
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
        full_bounded, current_alignment);
    }
  }
  // member: rear_wheel_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__OffsetB12(
        full_bounded, current_alignment);
    }
  }
  // member: position_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
        full_bounded, current_alignment);
    }
  }
  // member: elevation_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VertOffsetB07(
        full_bounded, current_alignment);
    }
  }
  // member: crumb_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrailerHistoryPointList(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrailerUnitDescription__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__TrailerUnitDescription(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrailerUnitDescription = {
  "j2735_v2x_msgs::msg",
  "TrailerUnitDescription",
  _TrailerUnitDescription__cdr_serialize,
  _TrailerUnitDescription__cdr_deserialize,
  _TrailerUnitDescription__get_serialized_size,
  _TrailerUnitDescription__max_serialized_size
};

static rosidl_message_type_support_t _TrailerUnitDescription__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrailerUnitDescription,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerUnitDescription)() {
  return &_TrailerUnitDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
