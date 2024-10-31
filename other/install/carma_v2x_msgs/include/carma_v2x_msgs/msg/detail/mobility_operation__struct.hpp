// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityOperation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityOperation __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityOperation __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityOperation_
{
  using Type = MobilityOperation_<ContainerAllocator>;

  explicit MobilityOperation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strategy = "";
      this->strategy_params = "";
    }
  }

  explicit MobilityOperation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_alloc, _init),
    strategy(_alloc),
    strategy_params(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strategy = "";
      this->strategy_params = "";
    }
  }

  // field types and members
  using _m_header_type =
    carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>;
  _m_header_type m_header;
  using _strategy_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _strategy_type strategy;
  using _strategy_params_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _strategy_params_type strategy_params;

  // setters for named parameter idiom
  Type & set__m_header(
    const carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> & _arg)
  {
    this->m_header = _arg;
    return *this;
  }
  Type & set__strategy(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->strategy = _arg;
    return *this;
  }
  Type & set__strategy_params(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->strategy_params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityOperation
    std::shared_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityOperation
    std::shared_ptr<carma_v2x_msgs::msg::MobilityOperation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityOperation_ & other) const
  {
    if (this->m_header != other.m_header) {
      return false;
    }
    if (this->strategy != other.strategy) {
      return false;
    }
    if (this->strategy_params != other.strategy_params) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityOperation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityOperation_

// alias to use template instance with default allocator
using MobilityOperation =
  carma_v2x_msgs::msg::MobilityOperation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__STRUCT_HPP_
