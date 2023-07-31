// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/VehicleHeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__VehicleHeight __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__VehicleHeight __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleHeight_
{
  using Type = VehicleHeight_<ContainerAllocator>;

  explicit VehicleHeight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_height = 0.0f;
      this->unavailable = false;
    }
  }

  explicit VehicleHeight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_height = 0.0f;
      this->unavailable = false;
    }
  }

  // field types and members
  using _vehicle_height_type =
    float;
  _vehicle_height_type vehicle_height;
  using _unavailable_type =
    bool;
  _unavailable_type unavailable;

  // setters for named parameter idiom
  Type & set__vehicle_height(
    const float & _arg)
  {
    this->vehicle_height = _arg;
    return *this;
  }
  Type & set__unavailable(
    const bool & _arg)
  {
    this->unavailable = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float VEHICLE_HEIGHT_MAX =
    6.35;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleHeight
    std::shared_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleHeight
    std::shared_ptr<carma_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleHeight_ & other) const
  {
    if (this->vehicle_height != other.vehicle_height) {
      return false;
    }
    if (this->unavailable != other.unavailable) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleHeight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleHeight_

// alias to use template instance with default allocator
using VehicleHeight =
  carma_v2x_msgs::msg::VehicleHeight_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float VehicleHeight_<ContainerAllocator>::VEHICLE_HEIGHT_MAX;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_HPP_
