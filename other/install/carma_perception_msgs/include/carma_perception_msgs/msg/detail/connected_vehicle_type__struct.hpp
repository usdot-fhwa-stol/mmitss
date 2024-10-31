// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/ConnectedVehicleType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__ConnectedVehicleType __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__ConnectedVehicleType __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectedVehicleType_
{
  using Type = ConnectedVehicleType_<ContainerAllocator>;

  explicit ConnectedVehicleType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit ConnectedVehicleType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOT_CONNECTED =
    0u;
  static constexpr uint8_t CONNECTED =
    1u;
  static constexpr uint8_t CONNECTED_AND_AUTOMATED =
    2u;

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__ConnectedVehicleType
    std::shared_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__ConnectedVehicleType
    std::shared_ptr<carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectedVehicleType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectedVehicleType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectedVehicleType_

// alias to use template instance with default allocator
using ConnectedVehicleType =
  carma_perception_msgs::msg::ConnectedVehicleType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ConnectedVehicleType_<ContainerAllocator>::NOT_CONNECTED;
template<typename ContainerAllocator>
constexpr uint8_t ConnectedVehicleType_<ContainerAllocator>::CONNECTED;
template<typename ContainerAllocator>
constexpr uint8_t ConnectedVehicleType_<ContainerAllocator>::CONNECTED_AND_AUTOMATED;

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__STRUCT_HPP_
