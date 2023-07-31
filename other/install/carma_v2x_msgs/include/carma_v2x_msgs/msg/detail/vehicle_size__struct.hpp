// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__VehicleSize __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__VehicleSize __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSize_
{
  using Type = VehicleSize_<ContainerAllocator>;

  explicit VehicleSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->vehicle_width = 0.0f;
      this->vehicle_length = 0.0f;
    }
  }

  explicit VehicleSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->vehicle_width = 0.0f;
      this->vehicle_length = 0.0f;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _vehicle_width_type =
    float;
  _vehicle_width_type vehicle_width;
  using _vehicle_length_type =
    float;
  _vehicle_length_type vehicle_length;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__vehicle_width(
    const float & _arg)
  {
    this->vehicle_width = _arg;
    return *this;
  }
  Type & set__vehicle_length(
    const float & _arg)
  {
    this->vehicle_length = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t VEHICLE_WIDTH_AVAILABLE =
    1u;
  static constexpr uint16_t VEHICLE_LENGTH_AVAILABLE =
    2u;
  static constexpr float VEHICLE_WIDTH_MAX =
    10.23;
  static constexpr float VEHICLE_WIDTH_MIN =
    0.01;
  static constexpr float VEHICLE_LENGTH_MAX =
    40.95;
  static constexpr float VEHICLE_LENGTH_MIN =
    0.01;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleSize
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleSize
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSize_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->vehicle_width != other.vehicle_width) {
      return false;
    }
    if (this->vehicle_length != other.vehicle_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSize_

// alias to use template instance with default allocator
using VehicleSize =
  carma_v2x_msgs::msg::VehicleSize_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t VehicleSize_<ContainerAllocator>::VEHICLE_WIDTH_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t VehicleSize_<ContainerAllocator>::VEHICLE_LENGTH_AVAILABLE;
template<typename ContainerAllocator>
constexpr float VehicleSize_<ContainerAllocator>::VEHICLE_WIDTH_MAX;
template<typename ContainerAllocator>
constexpr float VehicleSize_<ContainerAllocator>::VEHICLE_WIDTH_MIN;
template<typename ContainerAllocator>
constexpr float VehicleSize_<ContainerAllocator>::VEHICLE_LENGTH_MAX;
template<typename ContainerAllocator>
constexpr float VehicleSize_<ContainerAllocator>::VEHICLE_LENGTH_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_HPP_
