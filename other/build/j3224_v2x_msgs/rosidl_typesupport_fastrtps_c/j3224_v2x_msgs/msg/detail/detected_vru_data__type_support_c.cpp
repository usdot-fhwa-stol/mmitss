// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/detected_vru_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/detected_vru_data__struct.h"
#include "j3224_v2x_msgs/msg/detail/detected_vru_data__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/attachment__functions.h"  // attachment
#include "j2735_v2x_msgs/msg/detail/attachment_radius__functions.h"  // radius
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__functions.h"  // basic_type
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"  // propulsion

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Attachment(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Attachment(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Attachment)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__AttachmentRadius(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__AttachmentRadius(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AttachmentRadius)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUserType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation)();


using _DetectedVRUData__ros_msg_type = j3224_v2x_msgs__msg__DetectedVRUData;

static bool _DetectedVRUData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectedVRUData__ros_msg_type * ros_message = static_cast<const _DetectedVRUData__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: basic_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUserType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->basic_type, cdr))
    {
      return false;
    }
  }

  // Field name: propulsion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->propulsion, cdr))
    {
      return false;
    }
  }

  // Field name: attachment
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Attachment
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attachment, cdr))
    {
      return false;
    }
  }

  // Field name: radius
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AttachmentRadius
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->radius, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DetectedVRUData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectedVRUData__ros_msg_type * ros_message = static_cast<_DetectedVRUData__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: basic_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUserType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->basic_type))
    {
      return false;
    }
  }

  // Field name: propulsion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->propulsion))
    {
      return false;
    }
  }

  // Field name: attachment
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Attachment
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attachment))
    {
      return false;
    }
  }

  // Field name: radius
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AttachmentRadius
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->radius))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__DetectedVRUData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectedVRUData__ros_msg_type * ros_message = static_cast<const _DetectedVRUData__ros_msg_type *>(untyped_ros_message);
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
  // field.name basic_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
    &(ros_message->basic_type), current_alignment);
  // field.name propulsion

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
    &(ros_message->propulsion), current_alignment);
  // field.name attachment

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Attachment(
    &(ros_message->attachment), current_alignment);
  // field.name radius

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AttachmentRadius(
    &(ros_message->radius), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DetectedVRUData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__DetectedVRUData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__DetectedVRUData(
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

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: basic_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
        full_bounded, current_alignment);
    }
  }
  // member: propulsion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
        full_bounded, current_alignment);
    }
  }
  // member: attachment
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Attachment(
        full_bounded, current_alignment);
    }
  }
  // member: radius
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AttachmentRadius(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectedVRUData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__DetectedVRUData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectedVRUData = {
  "j3224_v2x_msgs::msg",
  "DetectedVRUData",
  _DetectedVRUData__cdr_serialize,
  _DetectedVRUData__cdr_deserialize,
  _DetectedVRUData__get_serialized_size,
  _DetectedVRUData__max_serialized_size
};

static rosidl_message_type_support_t _DetectedVRUData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectedVRUData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, DetectedVRUData)() {
  return &_DetectedVRUData__type_support;
}

#if defined(__cplusplus)
}
#endif
