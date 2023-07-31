// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'width'
// Member 'length'
// Member 'height'
#include "carma_v2x_msgs/msg/detail/size_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__ObstacleSize __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__ObstacleSize __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleSize_
{
  using Type = ObstacleSize_<ContainerAllocator>;

  explicit ObstacleSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : width(_init),
    length(_init),
    height(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit ObstacleSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : width(_alloc, _init),
    length(_alloc, _init),
    height(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _width_type =
    carma_v2x_msgs::msg::SizeValue_<ContainerAllocator>;
  _width_type width;
  using _length_type =
    carma_v2x_msgs::msg::SizeValue_<ContainerAllocator>;
  _length_type length;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _height_type =
    carma_v2x_msgs::msg::SizeValue_<ContainerAllocator>;
  _height_type height;

  // setters for named parameter idiom
  Type & set__width(
    const carma_v2x_msgs::msg::SizeValue_<ContainerAllocator> & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const carma_v2x_msgs::msg::SizeValue_<ContainerAllocator> & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__height(
    const carma_v2x_msgs::msg::SizeValue_<ContainerAllocator> & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_HEIGHT =
    1u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__ObstacleSize
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__ObstacleSize
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleSize_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleSize_

// alias to use template instance with default allocator
using ObstacleSize =
  carma_v2x_msgs::msg::ObstacleSize_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObstacleSize_<ContainerAllocator>::HAS_HEIGHT;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__STRUCT_HPP_
