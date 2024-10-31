// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__NodeOffsetPointXY __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__NodeOffsetPointXY __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeOffsetPointXY_
{
  using Type = NodeOffsetPointXY_<ContainerAllocator>;

  explicit NodeOffsetPointXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->longitude = 0.0;
      this->latitude = 0.0;
    }
  }

  explicit NodeOffsetPointXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->longitude = 0.0;
      this->latitude = 0.0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _latitude_type =
    double;
  _latitude_type latitude;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NODE_XY1 =
    0u;
  static constexpr uint8_t NODE_XY2 =
    1u;
  static constexpr uint8_t NODE_XY3 =
    2u;
  static constexpr uint8_t NODE_XY4 =
    3u;
  static constexpr uint8_t NODE_XY5 =
    4u;
  static constexpr uint8_t NODE_XY6 =
    5u;
  static constexpr uint8_t NODE_LATLON =
    6u;
  static constexpr double LONGITUDE_UNAVAILABLE =
    180.0000001;
  static constexpr double LONGITUDE_MAX =
    180.0;
  static constexpr double LONGITUDE_MIN =
    -179.9999999;
  static constexpr double LATITUDE_UNAVAILABLE =
    90.0000001;
  static constexpr double LATITUDE_MAX =
    90.0;
  static constexpr double LATITUDE_MIN =
    -90.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeOffsetPointXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeOffsetPointXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeOffsetPointXY_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeOffsetPointXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeOffsetPointXY_

// alias to use template instance with default allocator
using NodeOffsetPointXY =
  carma_v2x_msgs::msg::NodeOffsetPointXY_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY1;
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY2;
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY3;
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY4;
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY5;
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY6;
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_LATLON;
template<typename ContainerAllocator>
constexpr double NodeOffsetPointXY_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr double NodeOffsetPointXY_<ContainerAllocator>::LONGITUDE_MAX;
template<typename ContainerAllocator>
constexpr double NodeOffsetPointXY_<ContainerAllocator>::LONGITUDE_MIN;
template<typename ContainerAllocator>
constexpr double NodeOffsetPointXY_<ContainerAllocator>::LATITUDE_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr double NodeOffsetPointXY_<ContainerAllocator>::LATITUDE_MAX;
template<typename ContainerAllocator>
constexpr double NodeOffsetPointXY_<ContainerAllocator>::LATITUDE_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_
