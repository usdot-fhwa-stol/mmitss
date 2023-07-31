// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__struct.h"
#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"  // sdsm_time_stamp
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__functions.h"  // ref_pos_el_conf
#include "j2735_v2x_msgs/msg/detail/msg_count__functions.h"  // msg_cnt
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"  // ref_pos
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"  // ref_pos_xy_conf
#include "j2735_v2x_msgs/msg/detail/temporary_id__functions.h"  // source_id
#include "j3224_v2x_msgs/msg/detail/detected_object_list__functions.h"  // objects
#include "j3224_v2x_msgs/msg/detail/equipment_type__functions.h"  // equipment_type

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ElevationConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ElevationConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ElevationConfidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__MsgCount(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__MsgCount(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MsgCount)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Position3D(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Position3D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionalAccuracy)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TemporaryID)();
size_t get_serialized_size_j3224_v2x_msgs__msg__DetectedObjectList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__DetectedObjectList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, DetectedObjectList)();
size_t get_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, EquipmentType)();


using _SensorDataSharingMessage__ros_msg_type = j3224_v2x_msgs__msg__SensorDataSharingMessage;

static bool _SensorDataSharingMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorDataSharingMessage__ros_msg_type * ros_message = static_cast<const _SensorDataSharingMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_cnt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MsgCount
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->msg_cnt, cdr))
    {
      return false;
    }
  }

  // Field name: source_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TemporaryID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->source_id, cdr))
    {
      return false;
    }
  }

  // Field name: equipment_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, EquipmentType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->equipment_type, cdr))
    {
      return false;
    }
  }

  // Field name: sdsm_time_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sdsm_time_stamp, cdr))
    {
      return false;
    }
  }

  // Field name: ref_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Position3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ref_pos, cdr))
    {
      return false;
    }
  }

  // Field name: ref_pos_xy_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ref_pos_xy_conf, cdr))
    {
      return false;
    }
  }

  // Field name: objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, DetectedObjectList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->objects, cdr))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: ref_pos_el_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ElevationConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ref_pos_el_conf, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SensorDataSharingMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorDataSharingMessage__ros_msg_type * ros_message = static_cast<_SensorDataSharingMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_cnt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MsgCount
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->msg_cnt))
    {
      return false;
    }
  }

  // Field name: source_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TemporaryID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->source_id))
    {
      return false;
    }
  }

  // Field name: equipment_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, EquipmentType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->equipment_type))
    {
      return false;
    }
  }

  // Field name: sdsm_time_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sdsm_time_stamp))
    {
      return false;
    }
  }

  // Field name: ref_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Position3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ref_pos))
    {
      return false;
    }
  }

  // Field name: ref_pos_xy_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ref_pos_xy_conf))
    {
      return false;
    }
  }

  // Field name: objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, DetectedObjectList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->objects))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: ref_pos_el_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ElevationConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ref_pos_el_conf))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__SensorDataSharingMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorDataSharingMessage__ros_msg_type * ros_message = static_cast<const _SensorDataSharingMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg_cnt

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__MsgCount(
    &(ros_message->msg_cnt), current_alignment);
  // field.name source_id

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
    &(ros_message->source_id), current_alignment);
  // field.name equipment_type

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
    &(ros_message->equipment_type), current_alignment);
  // field.name sdsm_time_stamp

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
    &(ros_message->sdsm_time_stamp), current_alignment);
  // field.name ref_pos

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Position3D(
    &(ros_message->ref_pos), current_alignment);
  // field.name ref_pos_xy_conf

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
    &(ros_message->ref_pos_xy_conf), current_alignment);
  // field.name objects

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__DetectedObjectList(
    &(ros_message->objects), current_alignment);
  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_pos_el_conf

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ElevationConfidence(
    &(ros_message->ref_pos_el_conf), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SensorDataSharingMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__SensorDataSharingMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__SensorDataSharingMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msg_cnt
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__MsgCount(
        full_bounded, current_alignment);
    }
  }
  // member: source_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
        full_bounded, current_alignment);
    }
  }
  // member: equipment_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
        full_bounded, current_alignment);
    }
  }
  // member: sdsm_time_stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
        full_bounded, current_alignment);
    }
  }
  // member: ref_pos
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Position3D(
        full_bounded, current_alignment);
    }
  }
  // member: ref_pos_xy_conf
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }
  // member: objects
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__DetectedObjectList(
        full_bounded, current_alignment);
    }
  }
  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_pos_el_conf
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ElevationConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SensorDataSharingMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__SensorDataSharingMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SensorDataSharingMessage = {
  "j3224_v2x_msgs::msg",
  "SensorDataSharingMessage",
  _SensorDataSharingMessage__cdr_serialize,
  _SensorDataSharingMessage__cdr_deserialize,
  _SensorDataSharingMessage__get_serialized_size,
  _SensorDataSharingMessage__max_serialized_size
};

static rosidl_message_type_support_t _SensorDataSharingMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorDataSharingMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SensorDataSharingMessage)() {
  return &_SensorDataSharingMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
