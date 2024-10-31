// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__RouteState __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__RouteState __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteState_
{
  using Type = RouteState_<ContainerAllocator>;

  explicit RouteState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = "";
      this->state = 0;
      this->cross_track = 0.0;
      this->down_track = 0.0;
      this->lanelet_downtrack = 0.0;
      this->lanelet_id = 0ll;
      this->speed_limit = 0.0;
    }
  }

  explicit RouteState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    route_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = "";
      this->state = 0;
      this->cross_track = 0.0;
      this->down_track = 0.0;
      this->lanelet_downtrack = 0.0;
      this->lanelet_id = 0ll;
      this->speed_limit = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _route_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _route_id_type route_id;
  using _state_type =
    uint8_t;
  _state_type state;
  using _cross_track_type =
    double;
  _cross_track_type cross_track;
  using _down_track_type =
    double;
  _down_track_type down_track;
  using _lanelet_downtrack_type =
    double;
  _lanelet_downtrack_type lanelet_downtrack;
  using _lanelet_id_type =
    int64_t;
  _lanelet_id_type lanelet_id;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__route_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->route_id = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__cross_track(
    const double & _arg)
  {
    this->cross_track = _arg;
    return *this;
  }
  Type & set__down_track(
    const double & _arg)
  {
    this->down_track = _arg;
    return *this;
  }
  Type & set__lanelet_downtrack(
    const double & _arg)
  {
    this->lanelet_downtrack = _arg;
    return *this;
  }
  Type & set__lanelet_id(
    const int64_t & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOADING =
    0u;
  static constexpr uint8_t SELECTION =
    1u;
  static constexpr uint8_t ROUTING =
    2u;
  static constexpr uint8_t FOLLOWING =
    3u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::RouteState_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::RouteState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::RouteState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::RouteState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__RouteState
    std::shared_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__RouteState
    std::shared_ptr<carma_planning_msgs::msg::RouteState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->cross_track != other.cross_track) {
      return false;
    }
    if (this->down_track != other.down_track) {
      return false;
    }
    if (this->lanelet_downtrack != other.lanelet_downtrack) {
      return false;
    }
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteState_

// alias to use template instance with default allocator
using RouteState =
  carma_planning_msgs::msg::RouteState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RouteState_<ContainerAllocator>::LOADING;
template<typename ContainerAllocator>
constexpr uint8_t RouteState_<ContainerAllocator>::SELECTION;
template<typename ContainerAllocator>
constexpr uint8_t RouteState_<ContainerAllocator>::ROUTING;
template<typename ContainerAllocator>
constexpr uint8_t RouteState_<ContainerAllocator>::FOLLOWING;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_HPP_
