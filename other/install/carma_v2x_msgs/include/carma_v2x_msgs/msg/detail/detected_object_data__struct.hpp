// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'detected_object_common_data'
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__struct.hpp"
// Member 'detected_object_optional_data'
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__DetectedObjectData __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__DetectedObjectData __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectData_
{
  using Type = DetectedObjectData_<ContainerAllocator>;

  explicit DetectedObjectData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detected_object_common_data(_init),
    detected_object_optional_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit DetectedObjectData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detected_object_common_data(_alloc, _init),
    detected_object_optional_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _detected_object_common_data_type =
    carma_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>;
  _detected_object_common_data_type detected_object_common_data;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _detected_object_optional_data_type =
    carma_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>;
  _detected_object_optional_data_type detected_object_optional_data;

  // setters for named parameter idiom
  Type & set__detected_object_common_data(
    const carma_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> & _arg)
  {
    this->detected_object_common_data = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__detected_object_optional_data(
    const carma_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> & _arg)
  {
    this->detected_object_optional_data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_DETECTED_OBJECT_OPTIONAL_DATA =
    1u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedObjectData
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedObjectData
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectData_ & other) const
  {
    if (this->detected_object_common_data != other.detected_object_common_data) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->detected_object_optional_data != other.detected_object_optional_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectData_

// alias to use template instance with default allocator
using DetectedObjectData =
  carma_v2x_msgs::msg::DetectedObjectData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectData_<ContainerAllocator>::HAS_DETECTED_OBJECT_OPTIONAL_DATA;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_HPP_
