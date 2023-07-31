// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__struct.h"
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"  // accel_set
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"  // brakes
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"  // accuracy
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"  // transmission
#include "j2735_v2x_msgs/msg/detail/vehicle_size__functions.h"  // size
#include "rosidl_runtime_c/primitives_sequence.h"  // id
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // id

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationSet4Way)();
size_t get_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeSystemStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionalAccuracy)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TransmissionState)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSize)();


using _BSMCoreData__ros_msg_type = j2735_v2x_msgs__msg__BSMCoreData;

static bool _BSMCoreData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BSMCoreData__ros_msg_type * ros_message = static_cast<const _BSMCoreData__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_count
  {
    cdr << ros_message->msg_count;
  }

  // Field name: id
  {
    size_t size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sec_mark
  {
    cdr << ros_message->sec_mark;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: elev
  {
    cdr << ros_message->elev;
  }

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accuracy, cdr))
    {
      return false;
    }
  }

  // Field name: transmission
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TransmissionState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transmission, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: accel_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accel_set, cdr))
    {
      return false;
    }
  }

  // Field name: brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeSystemStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brakes, cdr))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSize
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->size, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BSMCoreData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BSMCoreData__ros_msg_type * ros_message = static_cast<_BSMCoreData__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_count
  {
    cdr >> ros_message->msg_count;
  }

  // Field name: id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->id.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->id);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->id, size)) {
      return "failed to create array for field 'id'";
    }
    auto array_ptr = ros_message->id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sec_mark
  {
    cdr >> ros_message->sec_mark;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: elev
  {
    cdr >> ros_message->elev;
  }

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accuracy))
    {
      return false;
    }
  }

  // Field name: transmission
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TransmissionState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transmission))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: accel_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accel_set))
    {
      return false;
    }
  }

  // Field name: brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeSystemStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brakes))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSize
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->size))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__BSMCoreData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BSMCoreData__ros_msg_type * ros_message = static_cast<const _BSMCoreData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg_count
  {
    size_t item_size = sizeof(ros_message->msg_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  {
    size_t array_size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sec_mark
  {
    size_t item_size = sizeof(ros_message->sec_mark);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elev
  {
    size_t item_size = sizeof(ros_message->elev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accuracy

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
    &(ros_message->accuracy), current_alignment);
  // field.name transmission

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
    &(ros_message->transmission), current_alignment);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_set

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
    &(ros_message->accel_set), current_alignment);
  // field.name brakes

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
    &(ros_message->brakes), current_alignment);
  // field.name size

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
    &(ros_message->size), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BSMCoreData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__BSMCoreData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__BSMCoreData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msg_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sec_mark
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }
  // member: transmission
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_set
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
        full_bounded, current_alignment);
    }
  }
  // member: brakes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
        full_bounded, current_alignment);
    }
  }
  // member: size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BSMCoreData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__BSMCoreData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BSMCoreData = {
  "j2735_v2x_msgs::msg",
  "BSMCoreData",
  _BSMCoreData__cdr_serialize,
  _BSMCoreData__cdr_deserialize,
  _BSMCoreData__get_serialized_size,
  _BSMCoreData__max_serialized_size
};

static rosidl_message_type_support_t _BSMCoreData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BSMCoreData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BSMCoreData)() {
  return &_BSMCoreData__type_support;
}

#if defined(__cplusplus)
}
#endif
