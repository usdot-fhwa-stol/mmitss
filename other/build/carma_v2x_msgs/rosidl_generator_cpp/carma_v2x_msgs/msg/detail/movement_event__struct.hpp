// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'event_state'
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__struct.hpp"
// Member 'timing'
#include "carma_v2x_msgs/msg/detail/time_change_details__struct.hpp"
// Member 'advisory_speed_list'
#include "carma_v2x_msgs/msg/detail/advisory_speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MovementEvent __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MovementEvent __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementEvent_
{
  using Type = MovementEvent_<ContainerAllocator>;

  explicit MovementEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_state(_init),
    timing(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timing_exists = false;
      this->speeds_exists = false;
    }
  }

  explicit MovementEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_state(_alloc, _init),
    timing(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timing_exists = false;
      this->speeds_exists = false;
    }
  }

  // field types and members
  using _event_state_type =
    j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>;
  _event_state_type event_state;
  using _timing_type =
    carma_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>;
  _timing_type timing;
  using _timing_exists_type =
    bool;
  _timing_exists_type timing_exists;
  using _advisory_speed_list_type =
    std::vector<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>::other>;
  _advisory_speed_list_type advisory_speed_list;
  using _speeds_exists_type =
    bool;
  _speeds_exists_type speeds_exists;

  // setters for named parameter idiom
  Type & set__event_state(
    const j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> & _arg)
  {
    this->event_state = _arg;
    return *this;
  }
  Type & set__timing(
    const carma_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> & _arg)
  {
    this->timing = _arg;
    return *this;
  }
  Type & set__timing_exists(
    const bool & _arg)
  {
    this->timing_exists = _arg;
    return *this;
  }
  Type & set__advisory_speed_list(
    const std::vector<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>::other> & _arg)
  {
    this->advisory_speed_list = _arg;
    return *this;
  }
  Type & set__speeds_exists(
    const bool & _arg)
  {
    this->speeds_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MovementEvent
    std::shared_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MovementEvent
    std::shared_ptr<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementEvent_ & other) const
  {
    if (this->event_state != other.event_state) {
      return false;
    }
    if (this->timing != other.timing) {
      return false;
    }
    if (this->timing_exists != other.timing_exists) {
      return false;
    }
    if (this->advisory_speed_list != other.advisory_speed_list) {
      return false;
    }
    if (this->speeds_exists != other.speeds_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementEvent_

// alias to use template instance with default allocator
using MovementEvent =
  carma_v2x_msgs::msg::MovementEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_
