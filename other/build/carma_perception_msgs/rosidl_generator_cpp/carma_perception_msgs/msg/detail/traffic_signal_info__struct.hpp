// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfo __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfo __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignalInfo_
{
  using Type = TrafficSignalInfo_<ContainerAllocator>;

  explicit TrafficSignalInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intersection_id = 0;
      this->state = 0;
      this->remaining_time = 0;
      this->lane_id = 0;
      this->remaining_distance = 0.0f;
    }
  }

  explicit TrafficSignalInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intersection_id = 0;
      this->state = 0;
      this->remaining_time = 0;
      this->lane_id = 0;
      this->remaining_distance = 0.0f;
    }
  }

  // field types and members
  using _intersection_id_type =
    uint16_t;
  _intersection_id_type intersection_id;
  using _state_type =
    uint8_t;
  _state_type state;
  using _remaining_time_type =
    uint16_t;
  _remaining_time_type remaining_time;
  using _lane_id_type =
    uint16_t;
  _lane_id_type lane_id;
  using _remaining_distance_type =
    float;
  _remaining_distance_type remaining_distance;

  // setters for named parameter idiom
  Type & set__intersection_id(
    const uint16_t & _arg)
  {
    this->intersection_id = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const uint16_t & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }
  Type & set__lane_id(
    const uint16_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__remaining_distance(
    const float & _arg)
  {
    this->remaining_distance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNLIT =
    0u;
  static constexpr uint8_t GREEN =
    1u;
  static constexpr uint8_t YELLOW =
    2u;
  static constexpr uint8_t RED =
    3u;
  static constexpr uint8_t FLASHING_GREEN =
    4u;
  static constexpr uint8_t FLASHING_YELLOW =
    5u;
  static constexpr uint8_t FLASHING_RED =
    6u;

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfo
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfo
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignalInfo_ & other) const
  {
    if (this->intersection_id != other.intersection_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->remaining_distance != other.remaining_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignalInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignalInfo_

// alias to use template instance with default allocator
using TrafficSignalInfo =
  carma_perception_msgs::msg::TrafficSignalInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::UNLIT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::GREEN;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::YELLOW;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::RED;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::FLASHING_GREEN;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::FLASHING_YELLOW;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalInfo_<ContainerAllocator>::FLASHING_RED;

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__STRUCT_HPP_
