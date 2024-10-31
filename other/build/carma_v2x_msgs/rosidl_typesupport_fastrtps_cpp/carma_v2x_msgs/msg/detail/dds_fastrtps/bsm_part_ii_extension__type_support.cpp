// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/bsm_part_ii_extension__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.hpp"

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
namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::VehicleSafetyExtensions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::VehicleSafetyExtensions &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::VehicleSafetyExtensions &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleSafetyExtensions(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::SpecialVehicleExtensions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::SpecialVehicleExtensions &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::SpecialVehicleExtensions &,
  size_t current_alignment);
size_t
max_serialized_size_SpecialVehicleExtensions(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::SupplementalVehicleExtensions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::SupplementalVehicleExtensions &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::SupplementalVehicleExtensions &,
  size_t current_alignment);
size_t
max_serialized_size_SupplementalVehicleExtensions(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs


namespace carma_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::BSMPartIIExtension & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: part_ii_id
  cdr << ros_message.part_ii_id;
  // Member: vehicle_safety_extensions
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehicle_safety_extensions,
    cdr);
  // Member: special_vehicle_extensions
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.special_vehicle_extensions,
    cdr);
  // Member: supplemental_vehicle_extensions
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.supplemental_vehicle_extensions,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::BSMPartIIExtension & ros_message)
{
  // Member: part_ii_id
  cdr >> ros_message.part_ii_id;

  // Member: vehicle_safety_extensions
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehicle_safety_extensions);

  // Member: special_vehicle_extensions
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.special_vehicle_extensions);

  // Member: supplemental_vehicle_extensions
  carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.supplemental_vehicle_extensions);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::BSMPartIIExtension & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: part_ii_id
  {
    size_t item_size = sizeof(ros_message.part_ii_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_safety_extensions

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehicle_safety_extensions, current_alignment);
  // Member: special_vehicle_extensions

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.special_vehicle_extensions, current_alignment);
  // Member: supplemental_vehicle_extensions

  current_alignment +=
    carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.supplemental_vehicle_extensions, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_BSMPartIIExtension(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: part_ii_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_safety_extensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleSafetyExtensions(
        full_bounded, current_alignment);
    }
  }

  // Member: special_vehicle_extensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SpecialVehicleExtensions(
        full_bounded, current_alignment);
    }
  }

  // Member: supplemental_vehicle_extensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SupplementalVehicleExtensions(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _BSMPartIIExtension__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::BSMPartIIExtension *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BSMPartIIExtension__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::BSMPartIIExtension *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BSMPartIIExtension__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::BSMPartIIExtension *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BSMPartIIExtension__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BSMPartIIExtension(full_bounded, 0);
}

static message_type_support_callbacks_t _BSMPartIIExtension__callbacks = {
  "carma_v2x_msgs::msg",
  "BSMPartIIExtension",
  _BSMPartIIExtension__cdr_serialize,
  _BSMPartIIExtension__cdr_deserialize,
  _BSMPartIIExtension__get_serialized_size,
  _BSMPartIIExtension__max_serialized_size
};

static rosidl_message_type_support_t _BSMPartIIExtension__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BSMPartIIExtension__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::BSMPartIIExtension>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_BSMPartIIExtension__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, BSMPartIIExtension)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_BSMPartIIExtension__handle;
}

#ifdef __cplusplus
}
#endif
