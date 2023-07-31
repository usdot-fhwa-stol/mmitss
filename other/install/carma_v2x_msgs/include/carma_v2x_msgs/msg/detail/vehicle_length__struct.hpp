// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__VehicleLength __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__VehicleLength __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleLength_
{
  using Type = VehicleLength_<ContainerAllocator>;

  explicit VehicleLength_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_length = 0;
      this->unavailable = false;
    }
  }

  explicit VehicleLength_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_length = 0;
      this->unavailable = false;
    }
  }

  // field types and members
  using _vehicle_length_type =
    uint16_t;
  _vehicle_length_type vehicle_length;
  using _unavailable_type =
    bool;
  _unavailable_type unavailable;

  // setters for named parameter idiom
  Type & set__vehicle_length(
    const uint16_t & _arg)
  {
    this->vehicle_length = _arg;
    return *this;
  }
  Type & set__unavailable(
    const bool & _arg)
  {
    this->unavailable = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float VEHICLE_WIDTH_MAX =
    40.95;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleLength
    std::shared_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleLength
    std::shared_ptr<carma_v2x_msgs::msg::VehicleLength_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleLength_ & other) const
  {
    if (this->vehicle_length != other.vehicle_length) {
      return false;
    }
    if (this->unavailable != other.unavailable) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleLength_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleLength_

// alias to use template instance with default allocator
using VehicleLength =
  carma_v2x_msgs::msg::VehicleLength_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float VehicleLength_<ContainerAllocator>::VEHICLE_WIDTH_MAX;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_HPP_
