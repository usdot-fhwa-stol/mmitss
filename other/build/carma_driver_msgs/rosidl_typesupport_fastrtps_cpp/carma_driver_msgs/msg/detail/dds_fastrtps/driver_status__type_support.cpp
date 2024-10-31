// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/driver_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_driver_msgs/msg/detail/driver_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carma_driver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
cdr_serialize(
  const carma_driver_msgs::msg::DriverStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: status
  cdr << ros_message.status;
  // Member: can
  cdr << (ros_message.can ? true : false);
  // Member: radar
  cdr << (ros_message.radar ? true : false);
  // Member: gnss
  cdr << (ros_message.gnss ? true : false);
  // Member: lidar
  cdr << (ros_message.lidar ? true : false);
  // Member: roadway_sensor
  cdr << (ros_message.roadway_sensor ? true : false);
  // Member: comms
  cdr << (ros_message.comms ? true : false);
  // Member: controller
  cdr << (ros_message.controller ? true : false);
  // Member: camera
  cdr << (ros_message.camera ? true : false);
  // Member: imu
  cdr << (ros_message.imu ? true : false);
  // Member: trailer_angle_sensor
  cdr << (ros_message.trailer_angle_sensor ? true : false);
  // Member: lightbar
  cdr << (ros_message.lightbar ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_driver_msgs::msg::DriverStatus & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: status
  cdr >> ros_message.status;

  // Member: can
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can = tmp ? true : false;
  }

  // Member: radar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.radar = tmp ? true : false;
  }

  // Member: gnss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gnss = tmp ? true : false;
  }

  // Member: lidar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lidar = tmp ? true : false;
  }

  // Member: roadway_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.roadway_sensor = tmp ? true : false;
  }

  // Member: comms
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.comms = tmp ? true : false;
  }

  // Member: controller
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.controller = tmp ? true : false;
  }

  // Member: camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.camera = tmp ? true : false;
  }

  // Member: imu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.imu = tmp ? true : false;
  }

  // Member: trailer_angle_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.trailer_angle_sensor = tmp ? true : false;
  }

  // Member: lightbar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lightbar = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
get_serialized_size(
  const carma_driver_msgs::msg::DriverStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can
  {
    size_t item_size = sizeof(ros_message.can);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar
  {
    size_t item_size = sizeof(ros_message.radar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss
  {
    size_t item_size = sizeof(ros_message.gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lidar
  {
    size_t item_size = sizeof(ros_message.lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roadway_sensor
  {
    size_t item_size = sizeof(ros_message.roadway_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: comms
  {
    size_t item_size = sizeof(ros_message.comms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: controller
  {
    size_t item_size = sizeof(ros_message.controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera
  {
    size_t item_size = sizeof(ros_message.camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu
  {
    size_t item_size = sizeof(ros_message.imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trailer_angle_sensor
  {
    size_t item_size = sizeof(ros_message.trailer_angle_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lightbar
  {
    size_t item_size = sizeof(ros_message.lightbar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
max_serialized_size_DriverStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lidar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: roadway_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: comms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: controller
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: imu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trailer_angle_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lightbar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _DriverStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_driver_msgs::msg::DriverStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DriverStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_driver_msgs::msg::DriverStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DriverStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_driver_msgs::msg::DriverStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DriverStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DriverStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _DriverStatus__callbacks = {
  "carma_driver_msgs::msg",
  "DriverStatus",
  _DriverStatus__cdr_serialize,
  _DriverStatus__cdr_deserialize,
  _DriverStatus__get_serialized_size,
  _DriverStatus__max_serialized_size
};

static rosidl_message_type_support_t _DriverStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DriverStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_driver_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::msg::DriverStatus>()
{
  return &carma_driver_msgs::msg::typesupport_fastrtps_cpp::_DriverStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_driver_msgs, msg, DriverStatus)() {
  return &carma_driver_msgs::msg::typesupport_fastrtps_cpp::_DriverStatus__handle;
}

#ifdef __cplusplus
}
#endif
