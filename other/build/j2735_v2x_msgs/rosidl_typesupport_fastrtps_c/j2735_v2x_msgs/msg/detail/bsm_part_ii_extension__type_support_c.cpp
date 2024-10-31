// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.h"
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"  // special_vehicle_extensions
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"  // supplemental_vehicle_extensions
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"  // vehicle_safety_extensions

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpecialVehicleExtensions)();
size_t get_serialized_size_j2735_v2x_msgs__msg__SupplementalVehicleExtensions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SupplementalVehicleExtensions(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SupplementalVehicleExtensions)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleSafetyExtensions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleSafetyExtensions(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSafetyExtensions)();


using _BSMPartIIExtension__ros_msg_type = j2735_v2x_msgs__msg__BSMPartIIExtension;

static bool _BSMPartIIExtension__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BSMPartIIExtension__ros_msg_type * ros_message = static_cast<const _BSMPartIIExtension__ros_msg_type *>(untyped_ros_message);
  // Field name: part_ii_id
  {
    cdr << ros_message->part_ii_id;
  }

  // Field name: vehicle_safety_extensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSafetyExtensions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_safety_extensions, cdr))
    {
      return false;
    }
  }

  // Field name: special_vehicle_extensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpecialVehicleExtensions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->special_vehicle_extensions, cdr))
    {
      return false;
    }
  }

  // Field name: supplemental_vehicle_extensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SupplementalVehicleExtensions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->supplemental_vehicle_extensions, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BSMPartIIExtension__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BSMPartIIExtension__ros_msg_type * ros_message = static_cast<_BSMPartIIExtension__ros_msg_type *>(untyped_ros_message);
  // Field name: part_ii_id
  {
    cdr >> ros_message->part_ii_id;
  }

  // Field name: vehicle_safety_extensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSafetyExtensions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_safety_extensions))
    {
      return false;
    }
  }

  // Field name: special_vehicle_extensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpecialVehicleExtensions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->special_vehicle_extensions))
    {
      return false;
    }
  }

  // Field name: supplemental_vehicle_extensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SupplementalVehicleExtensions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->supplemental_vehicle_extensions))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__BSMPartIIExtension(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BSMPartIIExtension__ros_msg_type * ros_message = static_cast<const _BSMPartIIExtension__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name part_ii_id
  {
    size_t item_size = sizeof(ros_message->part_ii_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_safety_extensions

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleSafetyExtensions(
    &(ros_message->vehicle_safety_extensions), current_alignment);
  // field.name special_vehicle_extensions

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
    &(ros_message->special_vehicle_extensions), current_alignment);
  // field.name supplemental_vehicle_extensions

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SupplementalVehicleExtensions(
    &(ros_message->supplemental_vehicle_extensions), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BSMPartIIExtension__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__BSMPartIIExtension(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__BSMPartIIExtension(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: part_ii_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_safety_extensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleSafetyExtensions(
        full_bounded, current_alignment);
    }
  }
  // member: special_vehicle_extensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
        full_bounded, current_alignment);
    }
  }
  // member: supplemental_vehicle_extensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SupplementalVehicleExtensions(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BSMPartIIExtension__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__BSMPartIIExtension(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BSMPartIIExtension = {
  "j2735_v2x_msgs::msg",
  "BSMPartIIExtension",
  _BSMPartIIExtension__cdr_serialize,
  _BSMPartIIExtension__cdr_deserialize,
  _BSMPartIIExtension__get_serialized_size,
  _BSMPartIIExtension__max_serialized_size
};

static rosidl_message_type_support_t _BSMPartIIExtension__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BSMPartIIExtension,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BSMPartIIExtension)() {
  return &_BSMPartIIExtension__type_support;
}

#if defined(__cplusplus)
}
#endif
