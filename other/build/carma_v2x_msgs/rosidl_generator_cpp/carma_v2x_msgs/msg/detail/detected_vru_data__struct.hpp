// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__struct.hpp"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.hpp"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__struct.hpp"
// Member 'radius'
#include "carma_v2x_msgs/msg/detail/attachment_radius__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__DetectedVRUData __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__DetectedVRUData __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedVRUData_
{
  using Type = DetectedVRUData_<ContainerAllocator>;

  explicit DetectedVRUData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_type(_init),
    propulsion(_init),
    attachment(_init),
    radius(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit DetectedVRUData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_type(_alloc, _init),
    propulsion(_alloc, _init),
    attachment(_alloc, _init),
    radius(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _basic_type_type =
    j2735_v2x_msgs::msg::PersonalDeviceUserType_<ContainerAllocator>;
  _basic_type_type basic_type;
  using _propulsion_type =
    j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator>;
  _propulsion_type propulsion;
  using _attachment_type =
    j2735_v2x_msgs::msg::Attachment_<ContainerAllocator>;
  _attachment_type attachment;
  using _radius_type =
    carma_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__basic_type(
    const j2735_v2x_msgs::msg::PersonalDeviceUserType_<ContainerAllocator> & _arg)
  {
    this->basic_type = _arg;
    return *this;
  }
  Type & set__propulsion(
    const j2735_v2x_msgs::msg::PropelledInformation_<ContainerAllocator> & _arg)
  {
    this->propulsion = _arg;
    return *this;
  }
  Type & set__attachment(
    const j2735_v2x_msgs::msg::Attachment_<ContainerAllocator> & _arg)
  {
    this->attachment = _arg;
    return *this;
  }
  Type & set__radius(
    const carma_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_BASIC_TYPE =
    1u;
  static constexpr uint8_t HAS_PROPULSION =
    2u;
  static constexpr uint8_t HAS_ATTACHMENT =
    4u;
  static constexpr uint8_t HAS_RADIUS =
    8u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedVRUData
    std::shared_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedVRUData
    std::shared_ptr<carma_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedVRUData_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->basic_type != other.basic_type) {
      return false;
    }
    if (this->propulsion != other.propulsion) {
      return false;
    }
    if (this->attachment != other.attachment) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedVRUData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedVRUData_

// alias to use template instance with default allocator
using DetectedVRUData =
  carma_v2x_msgs::msg::DetectedVRUData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DetectedVRUData_<ContainerAllocator>::HAS_BASIC_TYPE;
template<typename ContainerAllocator>
constexpr uint8_t DetectedVRUData_<ContainerAllocator>::HAS_PROPULSION;
template<typename ContainerAllocator>
constexpr uint8_t DetectedVRUData_<ContainerAllocator>::HAS_ATTACHMENT;
template<typename ContainerAllocator>
constexpr uint8_t DetectedVRUData_<ContainerAllocator>::HAS_RADIUS;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__STRUCT_HPP_
