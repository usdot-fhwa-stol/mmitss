// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'speed_limits'
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__LaneDataAttribute __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__LaneDataAttribute __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneDataAttribute_
{
  using Type = LaneDataAttribute_<ContainerAllocator>;

  explicit LaneDataAttribute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->path_end_point_angle = 0;
      this->lane_crown_point_center = 0.0f;
      this->lane_crown_point_right = 0.0f;
      this->lane_crown_point_left = 0.0f;
      this->lane_angle = 0.0f;
    }
  }

  explicit LaneDataAttribute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->path_end_point_angle = 0;
      this->lane_crown_point_center = 0.0f;
      this->lane_crown_point_right = 0.0f;
      this->lane_crown_point_left = 0.0f;
      this->lane_angle = 0.0f;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _path_end_point_angle_type =
    int16_t;
  _path_end_point_angle_type path_end_point_angle;
  using _lane_crown_point_center_type =
    float;
  _lane_crown_point_center_type lane_crown_point_center;
  using _lane_crown_point_right_type =
    float;
  _lane_crown_point_right_type lane_crown_point_right;
  using _lane_crown_point_left_type =
    float;
  _lane_crown_point_left_type lane_crown_point_left;
  using _lane_angle_type =
    float;
  _lane_angle_type lane_angle;
  using _speed_limits_type =
    std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>::other>;
  _speed_limits_type speed_limits;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__path_end_point_angle(
    const int16_t & _arg)
  {
    this->path_end_point_angle = _arg;
    return *this;
  }
  Type & set__lane_crown_point_center(
    const float & _arg)
  {
    this->lane_crown_point_center = _arg;
    return *this;
  }
  Type & set__lane_crown_point_right(
    const float & _arg)
  {
    this->lane_crown_point_right = _arg;
    return *this;
  }
  Type & set__lane_crown_point_left(
    const float & _arg)
  {
    this->lane_crown_point_left = _arg;
    return *this;
  }
  Type & set__lane_angle(
    const float & _arg)
  {
    this->lane_angle = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>::other> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PATH_END_POINT_ANGLE =
    0u;
  static constexpr uint8_t LANE_CROWN_POINT_CENTER =
    1u;
  static constexpr uint8_t LANE_CROWN_POINT_LEFT =
    2u;
  static constexpr uint8_t LANE_CROWN_POINT_RIGHT =
    3u;
  static constexpr uint8_t LANE_ANGLE =
    4u;
  static constexpr uint8_t SPEED_LIMITS =
    5u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__LaneDataAttribute
    std::shared_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__LaneDataAttribute
    std::shared_ptr<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneDataAttribute_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->path_end_point_angle != other.path_end_point_angle) {
      return false;
    }
    if (this->lane_crown_point_center != other.lane_crown_point_center) {
      return false;
    }
    if (this->lane_crown_point_right != other.lane_crown_point_right) {
      return false;
    }
    if (this->lane_crown_point_left != other.lane_crown_point_left) {
      return false;
    }
    if (this->lane_angle != other.lane_angle) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneDataAttribute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneDataAttribute_

// alias to use template instance with default allocator
using LaneDataAttribute =
  carma_v2x_msgs::msg::LaneDataAttribute_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::PATH_END_POINT_ANGLE;
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_CROWN_POINT_CENTER;
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_CROWN_POINT_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_CROWN_POINT_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_ANGLE;
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::SPEED_LIMITS;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_
