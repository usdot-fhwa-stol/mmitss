// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ob_dist'
#include "carma_v2x_msgs/msg/detail/obstacle_distance__struct.hpp"
// Member 'ob_direct'
#include "carma_v2x_msgs/msg/detail/obstacle_direction__struct.hpp"
// Member 'date_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.hpp"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.hpp"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.hpp"
// Member 'vert_event'
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__ObstacleDetection __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__ObstacleDetection __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleDetection_
{
  using Type = ObstacleDetection_<ContainerAllocator>;

  explicit ObstacleDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ob_dist(_init),
    ob_direct(_init),
    date_time(_init),
    description(_init),
    location_details(_init),
    vert_event(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit ObstacleDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ob_dist(_alloc, _init),
    ob_direct(_alloc, _init),
    date_time(_alloc, _init),
    description(_alloc, _init),
    location_details(_alloc, _init),
    vert_event(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _ob_dist_type =
    carma_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>;
  _ob_dist_type ob_dist;
  using _ob_direct_type =
    carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>;
  _ob_direct_type ob_direct;
  using _date_time_type =
    j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>;
  _date_time_type date_time;
  using _description_type =
    j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>;
  _description_type description;
  using _location_details_type =
    j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator>;
  _location_details_type location_details;
  using _vert_event_type =
    j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator>;
  _vert_event_type vert_event;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__ob_dist(
    const carma_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> & _arg)
  {
    this->ob_dist = _arg;
    return *this;
  }
  Type & set__ob_direct(
    const carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> & _arg)
  {
    this->ob_direct = _arg;
    return *this;
  }
  Type & set__date_time(
    const j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> & _arg)
  {
    this->date_time = _arg;
    return *this;
  }
  Type & set__description(
    const j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__location_details(
    const j2735_v2x_msgs::msg::ITISGenericLocations_<ContainerAllocator> & _arg)
  {
    this->location_details = _arg;
    return *this;
  }
  Type & set__vert_event(
    const j2735_v2x_msgs::msg::VerticalAccelerationThreshold_<ContainerAllocator> & _arg)
  {
    this->vert_event = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_DESCRIPTION =
    1u;
  static constexpr uint16_t HAS_LOCATION_DETAILS =
    2u;
  static constexpr uint16_t HAS_VERT_EVENT =
    4u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__ObstacleDetection
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__ObstacleDetection
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleDetection_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->ob_dist != other.ob_dist) {
      return false;
    }
    if (this->ob_direct != other.ob_direct) {
      return false;
    }
    if (this->date_time != other.date_time) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->location_details != other.location_details) {
      return false;
    }
    if (this->vert_event != other.vert_event) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleDetection_

// alias to use template instance with default allocator
using ObstacleDetection =
  carma_v2x_msgs::msg::ObstacleDetection_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t ObstacleDetection_<ContainerAllocator>::HAS_DESCRIPTION;
template<typename ContainerAllocator>
constexpr uint16_t ObstacleDetection_<ContainerAllocator>::HAS_LOCATION_DETAILS;
template<typename ContainerAllocator>
constexpr uint16_t ObstacleDetection_<ContainerAllocator>::HAS_VERT_EVENT;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_HPP_
