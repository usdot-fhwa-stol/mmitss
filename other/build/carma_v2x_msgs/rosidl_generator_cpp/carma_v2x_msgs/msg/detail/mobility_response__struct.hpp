// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__STRUCT_HPP_

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
// Member 'reason'
#include "carma_v2x_msgs/msg/detail/mobility_reason__struct.hpp"
// Member 'repeat'
#include "carma_v2x_msgs/msg/detail/mobility_repeat__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityResponse __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityResponse __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityResponse_
{
  using Type = MobilityResponse_<ContainerAllocator>;

  explicit MobilityResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_init),
    plan_type(_init),
    reason(_init),
    repeat(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->urgency = 0;
      this->is_accepted = false;
    }
  }

  explicit MobilityResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_alloc, _init),
    plan_type(_alloc, _init),
    reason(_alloc, _init),
    repeat(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->urgency = 0;
      this->is_accepted = false;
    }
  }

  // field types and members
  using _m_header_type =
    carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>;
  _m_header_type m_header;
  using _urgency_type =
    uint16_t;
  _urgency_type urgency;
  using _is_accepted_type =
    bool;
  _is_accepted_type is_accepted;
  using _plan_type_type =
    carma_v2x_msgs::msg::PlanType_<ContainerAllocator>;
  _plan_type_type plan_type;
  using _reason_type =
    carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>;
  _reason_type reason;
  using _repeat_type =
    carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>;
  _repeat_type repeat;

  // setters for named parameter idiom
  Type & set__m_header(
    const carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> & _arg)
  {
    this->m_header = _arg;
    return *this;
  }
  Type & set__urgency(
    const uint16_t & _arg)
  {
    this->urgency = _arg;
    return *this;
  }
  Type & set__is_accepted(
    const bool & _arg)
  {
    this->is_accepted = _arg;
    return *this;
  }
  Type & set__plan_type(
    const carma_v2x_msgs::msg::PlanType_<ContainerAllocator> & _arg)
  {
    this->plan_type = _arg;
    return *this;
  }
  Type & set__reason(
    const carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__repeat(
    const carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> & _arg)
  {
    this->repeat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityResponse
    std::shared_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityResponse
    std::shared_ptr<carma_v2x_msgs::msg::MobilityResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityResponse_ & other) const
  {
    if (this->m_header != other.m_header) {
      return false;
    }
    if (this->urgency != other.urgency) {
      return false;
    }
    if (this->is_accepted != other.is_accepted) {
      return false;
    }
    if (this->plan_type != other.plan_type) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->repeat != other.repeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityResponse_

// alias to use template instance with default allocator
using MobilityResponse =
  carma_v2x_msgs::msg::MobilityResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__STRUCT_HPP_
