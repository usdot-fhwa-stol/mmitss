// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__CheckActiveGeofence __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__CheckActiveGeofence __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CheckActiveGeofence_
{
  using Type = CheckActiveGeofence_<ContainerAllocator>;

  explicit CheckActiveGeofence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_on_active_geofence = false;
      this->type = 0;
      this->reason = "";
      this->value = 0.0;
      this->distance_to_next_geofence = 0.0;
      this->minimum_gap = 0.0;
      this->advisory_speed = 0.0;
    }
  }

  explicit CheckActiveGeofence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_on_active_geofence = false;
      this->type = 0;
      this->reason = "";
      this->value = 0.0;
      this->distance_to_next_geofence = 0.0;
      this->minimum_gap = 0.0;
      this->advisory_speed = 0.0;
    }
  }

  // field types and members
  using _is_on_active_geofence_type =
    bool;
  _is_on_active_geofence_type is_on_active_geofence;
  using _type_type =
    uint8_t;
  _type_type type;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _reason_type reason;
  using _value_type =
    double;
  _value_type value;
  using _distance_to_next_geofence_type =
    double;
  _distance_to_next_geofence_type distance_to_next_geofence;
  using _minimum_gap_type =
    double;
  _minimum_gap_type minimum_gap;
  using _advisory_speed_type =
    double;
  _advisory_speed_type advisory_speed;

  // setters for named parameter idiom
  Type & set__is_on_active_geofence(
    const bool & _arg)
  {
    this->is_on_active_geofence = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__distance_to_next_geofence(
    const double & _arg)
  {
    this->distance_to_next_geofence = _arg;
    return *this;
  }
  Type & set__minimum_gap(
    const double & _arg)
  {
    this->minimum_gap = _arg;
    return *this;
  }
  Type & set__advisory_speed(
    const double & _arg)
  {
    this->advisory_speed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SPEED_LIMIT =
    1u;
  static constexpr uint8_t LANE_CLOSED =
    2u;
  static constexpr uint8_t LANE_OPEN =
    3u;

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__CheckActiveGeofence
    std::shared_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__CheckActiveGeofence
    std::shared_ptr<carma_perception_msgs::msg::CheckActiveGeofence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckActiveGeofence_ & other) const
  {
    if (this->is_on_active_geofence != other.is_on_active_geofence) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->distance_to_next_geofence != other.distance_to_next_geofence) {
      return false;
    }
    if (this->minimum_gap != other.minimum_gap) {
      return false;
    }
    if (this->advisory_speed != other.advisory_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckActiveGeofence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckActiveGeofence_

// alias to use template instance with default allocator
using CheckActiveGeofence =
  carma_perception_msgs::msg::CheckActiveGeofence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CheckActiveGeofence_<ContainerAllocator>::SPEED_LIMIT;
template<typename ContainerAllocator>
constexpr uint8_t CheckActiveGeofence_<ContainerAllocator>::LANE_CLOSED;
template<typename ContainerAllocator>
constexpr uint8_t CheckActiveGeofence_<ContainerAllocator>::LANE_OPEN;

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__STRUCT_HPP_
