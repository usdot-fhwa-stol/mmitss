// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/GuidanceState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__GuidanceState __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__GuidanceState __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GuidanceState_
{
  using Type = GuidanceState_<ContainerAllocator>;

  explicit GuidanceState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit GuidanceState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STARTUP =
    1u;
  static constexpr uint8_t DRIVERS_READY =
    2u;
  static constexpr uint8_t ACTIVE =
    3u;
  static constexpr uint8_t ENGAGED =
    4u;
  static constexpr uint8_t INACTIVE =
    5u;
  static constexpr uint8_t ENTER_PARK =
    6u;
  static constexpr uint8_t SHUTDOWN =
    0u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::GuidanceState_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::GuidanceState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::GuidanceState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::GuidanceState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__GuidanceState
    std::shared_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__GuidanceState
    std::shared_ptr<carma_planning_msgs::msg::GuidanceState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GuidanceState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GuidanceState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GuidanceState_

// alias to use template instance with default allocator
using GuidanceState =
  carma_planning_msgs::msg::GuidanceState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::STARTUP;
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::DRIVERS_READY;
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::ACTIVE;
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::ENGAGED;
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::INACTIVE;
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::ENTER_PARK;
template<typename ContainerAllocator>
constexpr uint8_t GuidanceState_<ContainerAllocator>::SHUTDOWN;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__STRUCT_HPP_
