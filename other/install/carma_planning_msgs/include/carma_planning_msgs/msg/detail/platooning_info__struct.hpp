// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__PlatooningInfo __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__PlatooningInfo __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlatooningInfo_
{
  using Type = PlatooningInfo_<ContainerAllocator>;

  explicit PlatooningInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->platoon_id = "";
      this->size = 0;
      this->size_limit = 0;
      this->leader_id = "";
      this->leader_downtrack_distance = 0.0f;
      this->leader_cmd_speed = 0.0f;
      this->host_platoon_position = 0;
      this->host_cmd_speed = 0.0f;
      this->desired_gap = 0.0f;
      this->actual_gap = 0.0f;
      this->current_predecessor_time_headway_sum = 0.0f;
      this->predecessor_speed = 0.0f;
      this->predecessor_position = 0.0f;
      this->is_create_gap = false;
      this->create_gap_adjuster = 0.0f;
    }
  }

  explicit PlatooningInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : platoon_id(_alloc),
    leader_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->platoon_id = "";
      this->size = 0;
      this->size_limit = 0;
      this->leader_id = "";
      this->leader_downtrack_distance = 0.0f;
      this->leader_cmd_speed = 0.0f;
      this->host_platoon_position = 0;
      this->host_cmd_speed = 0.0f;
      this->desired_gap = 0.0f;
      this->actual_gap = 0.0f;
      this->current_predecessor_time_headway_sum = 0.0f;
      this->predecessor_speed = 0.0f;
      this->predecessor_position = 0.0f;
      this->is_create_gap = false;
      this->create_gap_adjuster = 0.0f;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;
  using _platoon_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _platoon_id_type platoon_id;
  using _size_type =
    uint8_t;
  _size_type size;
  using _size_limit_type =
    uint8_t;
  _size_limit_type size_limit;
  using _leader_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _leader_id_type leader_id;
  using _leader_downtrack_distance_type =
    float;
  _leader_downtrack_distance_type leader_downtrack_distance;
  using _leader_cmd_speed_type =
    float;
  _leader_cmd_speed_type leader_cmd_speed;
  using _host_platoon_position_type =
    uint8_t;
  _host_platoon_position_type host_platoon_position;
  using _host_cmd_speed_type =
    float;
  _host_cmd_speed_type host_cmd_speed;
  using _desired_gap_type =
    float;
  _desired_gap_type desired_gap;
  using _actual_gap_type =
    float;
  _actual_gap_type actual_gap;
  using _current_predecessor_time_headway_sum_type =
    float;
  _current_predecessor_time_headway_sum_type current_predecessor_time_headway_sum;
  using _predecessor_speed_type =
    float;
  _predecessor_speed_type predecessor_speed;
  using _predecessor_position_type =
    float;
  _predecessor_position_type predecessor_position;
  using _is_create_gap_type =
    bool;
  _is_create_gap_type is_create_gap;
  using _create_gap_adjuster_type =
    float;
  _create_gap_adjuster_type create_gap_adjuster;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__platoon_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->platoon_id = _arg;
    return *this;
  }
  Type & set__size(
    const uint8_t & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__size_limit(
    const uint8_t & _arg)
  {
    this->size_limit = _arg;
    return *this;
  }
  Type & set__leader_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->leader_id = _arg;
    return *this;
  }
  Type & set__leader_downtrack_distance(
    const float & _arg)
  {
    this->leader_downtrack_distance = _arg;
    return *this;
  }
  Type & set__leader_cmd_speed(
    const float & _arg)
  {
    this->leader_cmd_speed = _arg;
    return *this;
  }
  Type & set__host_platoon_position(
    const uint8_t & _arg)
  {
    this->host_platoon_position = _arg;
    return *this;
  }
  Type & set__host_cmd_speed(
    const float & _arg)
  {
    this->host_cmd_speed = _arg;
    return *this;
  }
  Type & set__desired_gap(
    const float & _arg)
  {
    this->desired_gap = _arg;
    return *this;
  }
  Type & set__actual_gap(
    const float & _arg)
  {
    this->actual_gap = _arg;
    return *this;
  }
  Type & set__current_predecessor_time_headway_sum(
    const float & _arg)
  {
    this->current_predecessor_time_headway_sum = _arg;
    return *this;
  }
  Type & set__predecessor_speed(
    const float & _arg)
  {
    this->predecessor_speed = _arg;
    return *this;
  }
  Type & set__predecessor_position(
    const float & _arg)
  {
    this->predecessor_position = _arg;
    return *this;
  }
  Type & set__is_create_gap(
    const bool & _arg)
  {
    this->is_create_gap = _arg;
    return *this;
  }
  Type & set__create_gap_adjuster(
    const float & _arg)
  {
    this->create_gap_adjuster = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DISABLED =
    0u;
  static constexpr uint8_t SEARCHING =
    1u;
  static constexpr uint8_t CONNECTING_TO_NEW_FOLLOWER =
    2u;
  static constexpr uint8_t CONNECTING_TO_NEW_LEADER =
    3u;
  static constexpr uint8_t LEADING =
    4u;
  static constexpr uint8_t FOLLOWING =
    5u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__PlatooningInfo
    std::shared_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__PlatooningInfo
    std::shared_ptr<carma_planning_msgs::msg::PlatooningInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatooningInfo_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->platoon_id != other.platoon_id) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->size_limit != other.size_limit) {
      return false;
    }
    if (this->leader_id != other.leader_id) {
      return false;
    }
    if (this->leader_downtrack_distance != other.leader_downtrack_distance) {
      return false;
    }
    if (this->leader_cmd_speed != other.leader_cmd_speed) {
      return false;
    }
    if (this->host_platoon_position != other.host_platoon_position) {
      return false;
    }
    if (this->host_cmd_speed != other.host_cmd_speed) {
      return false;
    }
    if (this->desired_gap != other.desired_gap) {
      return false;
    }
    if (this->actual_gap != other.actual_gap) {
      return false;
    }
    if (this->current_predecessor_time_headway_sum != other.current_predecessor_time_headway_sum) {
      return false;
    }
    if (this->predecessor_speed != other.predecessor_speed) {
      return false;
    }
    if (this->predecessor_position != other.predecessor_position) {
      return false;
    }
    if (this->is_create_gap != other.is_create_gap) {
      return false;
    }
    if (this->create_gap_adjuster != other.create_gap_adjuster) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatooningInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatooningInfo_

// alias to use template instance with default allocator
using PlatooningInfo =
  carma_planning_msgs::msg::PlatooningInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PlatooningInfo_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr uint8_t PlatooningInfo_<ContainerAllocator>::SEARCHING;
template<typename ContainerAllocator>
constexpr uint8_t PlatooningInfo_<ContainerAllocator>::CONNECTING_TO_NEW_FOLLOWER;
template<typename ContainerAllocator>
constexpr uint8_t PlatooningInfo_<ContainerAllocator>::CONNECTING_TO_NEW_LEADER;
template<typename ContainerAllocator>
constexpr uint8_t PlatooningInfo_<ContainerAllocator>::LEADING;
template<typename ContainerAllocator>
constexpr uint8_t PlatooningInfo_<ContainerAllocator>::FOLLOWING;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__STRUCT_HPP_
