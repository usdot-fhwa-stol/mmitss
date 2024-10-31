// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/roadway_obstacle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle__functions.h"
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

#include "carma_perception_msgs/msg/detail/connected_vehicle_type__functions.h"  // connected_vehicle_type
#include "carma_perception_msgs/msg/detail/external_object__functions.h"  // object
#include "rosidl_runtime_c/primitives_sequence.h"  // predicted_cross_track_confidences, predicted_cross_tracks, predicted_down_track_confidences, predicted_down_tracks, predicted_lanelet_id_confidences, predicted_lanelet_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // predicted_cross_track_confidences, predicted_cross_tracks, predicted_down_track_confidences, predicted_down_tracks, predicted_lanelet_id_confidences, predicted_lanelet_ids

// forward declare type support functions
size_t get_serialized_size_carma_perception_msgs__msg__ConnectedVehicleType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_perception_msgs__msg__ConnectedVehicleType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, ConnectedVehicleType)();
size_t get_serialized_size_carma_perception_msgs__msg__ExternalObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_perception_msgs__msg__ExternalObject(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, ExternalObject)();


using _RoadwayObstacle__ros_msg_type = carma_perception_msgs__msg__RoadwayObstacle;

static bool _RoadwayObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadwayObstacle__ros_msg_type * ros_message = static_cast<const _RoadwayObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, ExternalObject
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object, cdr))
    {
      return false;
    }
  }

  // Field name: connected_vehicle_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, ConnectedVehicleType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->connected_vehicle_type, cdr))
    {
      return false;
    }
  }

  // Field name: lanelet_id
  {
    cdr << ros_message->lanelet_id;
  }

  // Field name: cross_track
  {
    cdr << ros_message->cross_track;
  }

  // Field name: down_track
  {
    cdr << ros_message->down_track;
  }

  // Field name: predicted_lanelet_ids
  {
    size_t size = ros_message->predicted_lanelet_ids.size;
    auto array_ptr = ros_message->predicted_lanelet_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predicted_lanelet_id_confidences
  {
    size_t size = ros_message->predicted_lanelet_id_confidences.size;
    auto array_ptr = ros_message->predicted_lanelet_id_confidences.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predicted_cross_tracks
  {
    size_t size = ros_message->predicted_cross_tracks.size;
    auto array_ptr = ros_message->predicted_cross_tracks.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predicted_cross_track_confidences
  {
    size_t size = ros_message->predicted_cross_track_confidences.size;
    auto array_ptr = ros_message->predicted_cross_track_confidences.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predicted_down_tracks
  {
    size_t size = ros_message->predicted_down_tracks.size;
    auto array_ptr = ros_message->predicted_down_tracks.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predicted_down_track_confidences
  {
    size_t size = ros_message->predicted_down_track_confidences.size;
    auto array_ptr = ros_message->predicted_down_track_confidences.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RoadwayObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadwayObstacle__ros_msg_type * ros_message = static_cast<_RoadwayObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, ExternalObject
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object))
    {
      return false;
    }
  }

  // Field name: connected_vehicle_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, ConnectedVehicleType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->connected_vehicle_type))
    {
      return false;
    }
  }

  // Field name: lanelet_id
  {
    cdr >> ros_message->lanelet_id;
  }

  // Field name: cross_track
  {
    cdr >> ros_message->cross_track;
  }

  // Field name: down_track
  {
    cdr >> ros_message->down_track;
  }

  // Field name: predicted_lanelet_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_lanelet_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->predicted_lanelet_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->predicted_lanelet_ids, size)) {
      return "failed to create array for field 'predicted_lanelet_ids'";
    }
    auto array_ptr = ros_message->predicted_lanelet_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predicted_lanelet_id_confidences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_lanelet_id_confidences.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predicted_lanelet_id_confidences);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predicted_lanelet_id_confidences, size)) {
      return "failed to create array for field 'predicted_lanelet_id_confidences'";
    }
    auto array_ptr = ros_message->predicted_lanelet_id_confidences.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predicted_cross_tracks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_cross_tracks.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predicted_cross_tracks);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predicted_cross_tracks, size)) {
      return "failed to create array for field 'predicted_cross_tracks'";
    }
    auto array_ptr = ros_message->predicted_cross_tracks.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predicted_cross_track_confidences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_cross_track_confidences.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predicted_cross_track_confidences);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predicted_cross_track_confidences, size)) {
      return "failed to create array for field 'predicted_cross_track_confidences'";
    }
    auto array_ptr = ros_message->predicted_cross_track_confidences.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predicted_down_tracks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_down_tracks.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predicted_down_tracks);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predicted_down_tracks, size)) {
      return "failed to create array for field 'predicted_down_tracks'";
    }
    auto array_ptr = ros_message->predicted_down_tracks.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predicted_down_track_confidences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_down_track_confidences.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predicted_down_track_confidences);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predicted_down_track_confidences, size)) {
      return "failed to create array for field 'predicted_down_track_confidences'";
    }
    auto array_ptr = ros_message->predicted_down_track_confidences.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t get_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadwayObstacle__ros_msg_type * ros_message = static_cast<const _RoadwayObstacle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object

  current_alignment += get_serialized_size_carma_perception_msgs__msg__ExternalObject(
    &(ros_message->object), current_alignment);
  // field.name connected_vehicle_type

  current_alignment += get_serialized_size_carma_perception_msgs__msg__ConnectedVehicleType(
    &(ros_message->connected_vehicle_type), current_alignment);
  // field.name lanelet_id
  {
    size_t item_size = sizeof(ros_message->lanelet_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cross_track
  {
    size_t item_size = sizeof(ros_message->cross_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name down_track
  {
    size_t item_size = sizeof(ros_message->down_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_lanelet_ids
  {
    size_t array_size = ros_message->predicted_lanelet_ids.size;
    auto array_ptr = ros_message->predicted_lanelet_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_lanelet_id_confidences
  {
    size_t array_size = ros_message->predicted_lanelet_id_confidences.size;
    auto array_ptr = ros_message->predicted_lanelet_id_confidences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_cross_tracks
  {
    size_t array_size = ros_message->predicted_cross_tracks.size;
    auto array_ptr = ros_message->predicted_cross_tracks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_cross_track_confidences
  {
    size_t array_size = ros_message->predicted_cross_track_confidences.size;
    auto array_ptr = ros_message->predicted_cross_track_confidences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_down_tracks
  {
    size_t array_size = ros_message->predicted_down_tracks.size;
    auto array_ptr = ros_message->predicted_down_tracks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predicted_down_track_confidences
  {
    size_t array_size = ros_message->predicted_down_track_confidences.size;
    auto array_ptr = ros_message->predicted_down_track_confidences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadwayObstacle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t max_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_perception_msgs__msg__ExternalObject(
        full_bounded, current_alignment);
    }
  }
  // member: connected_vehicle_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_perception_msgs__msg__ConnectedVehicleType(
        full_bounded, current_alignment);
    }
  }
  // member: lanelet_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cross_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: down_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predicted_lanelet_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predicted_lanelet_id_confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predicted_cross_tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predicted_cross_track_confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predicted_down_tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predicted_down_track_confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadwayObstacle__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RoadwayObstacle = {
  "carma_perception_msgs::msg",
  "RoadwayObstacle",
  _RoadwayObstacle__cdr_serialize,
  _RoadwayObstacle__cdr_deserialize,
  _RoadwayObstacle__get_serialized_size,
  _RoadwayObstacle__max_serialized_size
};

static rosidl_message_type_support_t _RoadwayObstacle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadwayObstacle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, RoadwayObstacle)() {
  return &_RoadwayObstacle__type_support;
}

#if defined(__cplusplus)
}
#endif
