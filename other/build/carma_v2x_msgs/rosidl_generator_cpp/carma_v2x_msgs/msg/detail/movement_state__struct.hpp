// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'movement_event_list'
#include "carma_v2x_msgs/msg/detail/movement_event__struct.hpp"
// Member 'connection_maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MovementState __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MovementState __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementState_
{
  using Type = MovementState_<ContainerAllocator>;

  explicit MovementState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement_name = "";
      this->movement_name_exists = false;
      this->signal_group = 0;
      this->maneuver_assist_list_exists = false;
    }
  }

  explicit MovementState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : movement_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement_name = "";
      this->movement_name_exists = false;
      this->signal_group = 0;
      this->maneuver_assist_list_exists = false;
    }
  }

  // field types and members
  using _movement_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _movement_name_type movement_name;
  using _movement_name_exists_type =
    bool;
  _movement_name_exists_type movement_name_exists;
  using _signal_group_type =
    uint8_t;
  _signal_group_type signal_group;
  using _movement_event_list_type =
    std::vector<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>::other>;
  _movement_event_list_type movement_event_list;
  using _connection_maneuver_assist_list_type =
    std::vector<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>::other>;
  _connection_maneuver_assist_list_type connection_maneuver_assist_list;
  using _maneuver_assist_list_exists_type =
    bool;
  _maneuver_assist_list_exists_type maneuver_assist_list_exists;

  // setters for named parameter idiom
  Type & set__movement_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->movement_name = _arg;
    return *this;
  }
  Type & set__movement_name_exists(
    const bool & _arg)
  {
    this->movement_name_exists = _arg;
    return *this;
  }
  Type & set__signal_group(
    const uint8_t & _arg)
  {
    this->signal_group = _arg;
    return *this;
  }
  Type & set__movement_event_list(
    const std::vector<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::MovementEvent_<ContainerAllocator>>::other> & _arg)
  {
    this->movement_event_list = _arg;
    return *this;
  }
  Type & set__connection_maneuver_assist_list(
    const std::vector<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>::other> & _arg)
  {
    this->connection_maneuver_assist_list = _arg;
    return *this;
  }
  Type & set__maneuver_assist_list_exists(
    const bool & _arg)
  {
    this->maneuver_assist_list_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MovementState_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MovementState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MovementState
    std::shared_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MovementState
    std::shared_ptr<carma_v2x_msgs::msg::MovementState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementState_ & other) const
  {
    if (this->movement_name != other.movement_name) {
      return false;
    }
    if (this->movement_name_exists != other.movement_name_exists) {
      return false;
    }
    if (this->signal_group != other.signal_group) {
      return false;
    }
    if (this->movement_event_list != other.movement_event_list) {
      return false;
    }
    if (this->connection_maneuver_assist_list != other.connection_maneuver_assist_list) {
      return false;
    }
    if (this->maneuver_assist_list_exists != other.maneuver_assist_list_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementState_

// alias to use template instance with default allocator
using MovementState =
  carma_v2x_msgs::msg::MovementState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_
