// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityRequest.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__STRUCT_HPP_

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
// Member 'plan_type'
#include "carma_v2x_msgs/msg/detail/plan_type__struct.hpp"
// Member 'location'
#include "carma_v2x_msgs/msg/detail/location_ecef__struct.hpp"
// Member 'trajectory'
#include "carma_v2x_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityRequest __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityRequest __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityRequest_
{
  using Type = MobilityRequest_<ContainerAllocator>;

  explicit MobilityRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_init),
    plan_type(_init),
    location(_init),
    trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strategy = "";
      this->urgency = 0;
      this->strategy_params = "";
      this->expiration = 0ull;
    }
  }

  explicit MobilityRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_alloc, _init),
    strategy(_alloc),
    plan_type(_alloc, _init),
    location(_alloc, _init),
    strategy_params(_alloc),
    trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strategy = "";
      this->urgency = 0;
      this->strategy_params = "";
      this->expiration = 0ull;
    }
  }

  // field types and members
  using _m_header_type =
    carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>;
  _m_header_type m_header;
  using _strategy_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _strategy_type strategy;
  using _plan_type_type =
    carma_v2x_msgs::msg::PlanType_<ContainerAllocator>;
  _plan_type_type plan_type;
  using _urgency_type =
    uint16_t;
  _urgency_type urgency;
  using _location_type =
    carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>;
  _location_type location;
  using _strategy_params_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _strategy_params_type strategy_params;
  using _trajectory_type =
    carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _expiration_type =
    uint64_t;
  _expiration_type expiration;

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
  Type & set__plan_type(
    const carma_v2x_msgs::msg::PlanType_<ContainerAllocator> & _arg)
  {
    this->plan_type = _arg;
    return *this;
  }
  Type & set__urgency(
    const uint16_t & _arg)
  {
    this->urgency = _arg;
    return *this;
  }
  Type & set__location(
    const carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__strategy_params(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->strategy_params = _arg;
    return *this;
  }
  Type & set__trajectory(
    const carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__expiration(
    const uint64_t & _arg)
  {
    this->expiration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityRequest
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityRequest
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityRequest_ & other) const
  {
    if (this->m_header != other.m_header) {
      return false;
    }
    if (this->strategy != other.strategy) {
      return false;
    }
    if (this->plan_type != other.plan_type) {
      return false;
    }
    if (this->urgency != other.urgency) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->strategy_params != other.strategy_params) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->expiration != other.expiration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityRequest_

// alias to use template instance with default allocator
using MobilityRequest =
  carma_v2x_msgs::msg::MobilityRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__STRUCT_HPP_
