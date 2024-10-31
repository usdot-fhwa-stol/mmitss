// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.h"
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__functions.h"  // median
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__functions.h"  // bike_lane
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__functions.h"  // crosswalk
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__functions.h"  // parking
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__functions.h"  // sidewalk
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__functions.h"  // striping
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__functions.h"  // tracked_vehicle
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__functions.h"  // vehicle

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBarrier(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBarrier(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesBarrier)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBike(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBike(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesBike)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesCrosswalk(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesCrosswalk(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesCrosswalk)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesParking(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesParking(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesParking)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesSidewalk(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesSidewalk(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesSidewalk)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesStriping(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesStriping(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesStriping)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesTrackedVehicle)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesVehicle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesVehicle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesVehicle)();


using _LaneTypeAttributes__ros_msg_type = j2735_v2x_msgs__msg__LaneTypeAttributes;

static bool _LaneTypeAttributes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneTypeAttributes__ros_msg_type * ros_message = static_cast<const _LaneTypeAttributes__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: vehicle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesVehicle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle, cdr))
    {
      return false;
    }
  }

  // Field name: crosswalk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesCrosswalk
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->crosswalk, cdr))
    {
      return false;
    }
  }

  // Field name: bike_lane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesBike
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bike_lane, cdr))
    {
      return false;
    }
  }

  // Field name: sidewalk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesSidewalk
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sidewalk, cdr))
    {
      return false;
    }
  }

  // Field name: median
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesBarrier
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->median, cdr))
    {
      return false;
    }
  }

  // Field name: striping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesStriping
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->striping, cdr))
    {
      return false;
    }
  }

  // Field name: tracked_vehicle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesTrackedVehicle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tracked_vehicle, cdr))
    {
      return false;
    }
  }

  // Field name: parking
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesParking
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->parking, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LaneTypeAttributes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneTypeAttributes__ros_msg_type * ros_message = static_cast<_LaneTypeAttributes__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: vehicle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesVehicle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle))
    {
      return false;
    }
  }

  // Field name: crosswalk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesCrosswalk
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->crosswalk))
    {
      return false;
    }
  }

  // Field name: bike_lane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesBike
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bike_lane))
    {
      return false;
    }
  }

  // Field name: sidewalk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesSidewalk
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sidewalk))
    {
      return false;
    }
  }

  // Field name: median
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesBarrier
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->median))
    {
      return false;
    }
  }

  // Field name: striping
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesStriping
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->striping))
    {
      return false;
    }
  }

  // Field name: tracked_vehicle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesTrackedVehicle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tracked_vehicle))
    {
      return false;
    }
  }

  // Field name: parking
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributesParking
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->parking))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneTypeAttributes__ros_msg_type * ros_message = static_cast<const _LaneTypeAttributes__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name choice
  {
    size_t item_size = sizeof(ros_message->choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesVehicle(
    &(ros_message->vehicle), current_alignment);
  // field.name crosswalk

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesCrosswalk(
    &(ros_message->crosswalk), current_alignment);
  // field.name bike_lane

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBike(
    &(ros_message->bike_lane), current_alignment);
  // field.name sidewalk

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesSidewalk(
    &(ros_message->sidewalk), current_alignment);
  // field.name median

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBarrier(
    &(ros_message->median), current_alignment);
  // field.name striping

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesStriping(
    &(ros_message->striping), current_alignment);
  // field.name tracked_vehicle

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle(
    &(ros_message->tracked_vehicle), current_alignment);
  // field.name parking

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributesParking(
    &(ros_message->parking), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LaneTypeAttributes__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesVehicle(
        full_bounded, current_alignment);
    }
  }
  // member: crosswalk
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesCrosswalk(
        full_bounded, current_alignment);
    }
  }
  // member: bike_lane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBike(
        full_bounded, current_alignment);
    }
  }
  // member: sidewalk
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesSidewalk(
        full_bounded, current_alignment);
    }
  }
  // member: median
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesBarrier(
        full_bounded, current_alignment);
    }
  }
  // member: striping
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesStriping(
        full_bounded, current_alignment);
    }
  }
  // member: tracked_vehicle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle(
        full_bounded, current_alignment);
    }
  }
  // member: parking
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributesParking(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneTypeAttributes__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneTypeAttributes = {
  "j2735_v2x_msgs::msg",
  "LaneTypeAttributes",
  _LaneTypeAttributes__cdr_serialize,
  _LaneTypeAttributes__cdr_deserialize,
  _LaneTypeAttributes__get_serialized_size,
  _LaneTypeAttributes__max_serialized_size
};

static rosidl_message_type_support_t _LaneTypeAttributes__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneTypeAttributes,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneTypeAttributes)() {
  return &_LaneTypeAttributes__type_support;
}

#if defined(__cplusplus)
}
#endif
