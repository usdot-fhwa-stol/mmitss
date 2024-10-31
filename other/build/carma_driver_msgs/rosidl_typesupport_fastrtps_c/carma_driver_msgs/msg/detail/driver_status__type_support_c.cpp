// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/driver_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/msg/detail/driver_status__struct.h"
#include "carma_driver_msgs/msg/detail/driver_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _DriverStatus__ros_msg_type = carma_driver_msgs__msg__DriverStatus;

static bool _DriverStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DriverStatus__ros_msg_type * ros_message = static_cast<const _DriverStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: can
  {
    cdr << (ros_message->can ? true : false);
  }

  // Field name: radar
  {
    cdr << (ros_message->radar ? true : false);
  }

  // Field name: gnss
  {
    cdr << (ros_message->gnss ? true : false);
  }

  // Field name: lidar
  {
    cdr << (ros_message->lidar ? true : false);
  }

  // Field name: roadway_sensor
  {
    cdr << (ros_message->roadway_sensor ? true : false);
  }

  // Field name: comms
  {
    cdr << (ros_message->comms ? true : false);
  }

  // Field name: controller
  {
    cdr << (ros_message->controller ? true : false);
  }

  // Field name: camera
  {
    cdr << (ros_message->camera ? true : false);
  }

  // Field name: imu
  {
    cdr << (ros_message->imu ? true : false);
  }

  // Field name: trailer_angle_sensor
  {
    cdr << (ros_message->trailer_angle_sensor ? true : false);
  }

  // Field name: lightbar
  {
    cdr << (ros_message->lightbar ? true : false);
  }

  return true;
}

static bool _DriverStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DriverStatus__ros_msg_type * ros_message = static_cast<_DriverStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: can
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can = tmp ? true : false;
  }

  // Field name: radar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar = tmp ? true : false;
  }

  // Field name: gnss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gnss = tmp ? true : false;
  }

  // Field name: lidar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lidar = tmp ? true : false;
  }

  // Field name: roadway_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->roadway_sensor = tmp ? true : false;
  }

  // Field name: comms
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->comms = tmp ? true : false;
  }

  // Field name: controller
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->controller = tmp ? true : false;
  }

  // Field name: camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->camera = tmp ? true : false;
  }

  // Field name: imu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->imu = tmp ? true : false;
  }

  // Field name: trailer_angle_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trailer_angle_sensor = tmp ? true : false;
  }

  // Field name: lightbar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lightbar = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__msg__DriverStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverStatus__ros_msg_type * ros_message = static_cast<const _DriverStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can
  {
    size_t item_size = sizeof(ros_message->can);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar
  {
    size_t item_size = sizeof(ros_message->radar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss
  {
    size_t item_size = sizeof(ros_message->gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lidar
  {
    size_t item_size = sizeof(ros_message->lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roadway_sensor
  {
    size_t item_size = sizeof(ros_message->roadway_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name comms
  {
    size_t item_size = sizeof(ros_message->comms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name controller
  {
    size_t item_size = sizeof(ros_message->controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera
  {
    size_t item_size = sizeof(ros_message->camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu
  {
    size_t item_size = sizeof(ros_message->imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trailer_angle_sensor
  {
    size_t item_size = sizeof(ros_message->trailer_angle_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lightbar
  {
    size_t item_size = sizeof(ros_message->lightbar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DriverStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__msg__DriverStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__msg__DriverStatus(
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
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lidar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: roadway_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: comms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: controller
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trailer_angle_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lightbar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DriverStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__msg__DriverStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DriverStatus = {
  "carma_driver_msgs::msg",
  "DriverStatus",
  _DriverStatus__cdr_serialize,
  _DriverStatus__cdr_deserialize,
  _DriverStatus__get_serialized_size,
  _DriverStatus__max_serialized_size
};

static rosidl_message_type_support_t _DriverStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DriverStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, DriverStatus)() {
  return &_DriverStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
