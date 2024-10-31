// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityPath.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'm_header'
#include "carma_v2x_msgs/msg/detail/mobility_header__struct.hpp"
// Member 'trajectory'
#include "carma_v2x_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityPath __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityPath __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityPath_
{
  using Type = MobilityPath_<ContainerAllocator>;

  explicit MobilityPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_init),
    trajectory(_init)
  {
    (void)_init;
  }

  explicit MobilityPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_alloc, _init),
    trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _m_header_type =
    carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>;
  _m_header_type m_header;
  using _trajectory_type =
    carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__m_header(
    const carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> & _arg)
  {
    this->m_header = _arg;
    return *this;
  }
  Type & set__trajectory(
    const carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityPath
    std::shared_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityPath
    std::shared_ptr<carma_v2x_msgs::msg::MobilityPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityPath_ & other) const
  {
    if (this->m_header != other.m_header) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityPath_

// alias to use template instance with default allocator
using MobilityPath =
  carma_v2x_msgs::msg::MobilityPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__STRUCT_HPP_
