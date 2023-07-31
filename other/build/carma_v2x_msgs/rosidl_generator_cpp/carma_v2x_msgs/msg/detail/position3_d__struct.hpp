// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__Position3D __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__Position3D __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position3D_
{
  using Type = Position3D_<ContainerAllocator>;

  explicit Position3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->elevation = 0.0f;
      this->elevation_exists = false;
    }
  }

  explicit Position3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->elevation = 0.0f;
      this->elevation_exists = false;
    }
  }

  // field types and members
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _elevation_exists_type =
    bool;
  _elevation_exists_type elevation_exists;

  // setters for named parameter idiom
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__elevation_exists(
    const bool & _arg)
  {
    this->elevation_exists = _arg;
    return *this;
  }

  // constant declarations
  static constexpr double LATITUDE_UNAVAILABLE =
    90.0000001;
  static constexpr double LATITUDE_MAX =
    90.0;
  static constexpr double LATITUDE_MIN =
    -90.0;
  static constexpr double LONGITUDE_UNAVAILABLE =
    180.0000001;
  static constexpr double LONGITUDE_MAX =
    180.0;
  static constexpr double LONGITUDE_MIN =
    -179.9999999;
  static constexpr float ELEVATION_UNAVAILABLE =
    -409.6;
  static constexpr float ELEVATION_MAX =
    6143.9;
  static constexpr float ELEVATION_MIN =
    -409.5;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::Position3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::Position3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__Position3D
    std::shared_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__Position3D
    std::shared_ptr<carma_v2x_msgs::msg::Position3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position3D_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->elevation_exists != other.elevation_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position3D_

// alias to use template instance with default allocator
using Position3D =
  carma_v2x_msgs::msg::Position3D_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr double Position3D_<ContainerAllocator>::LATITUDE_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr double Position3D_<ContainerAllocator>::LATITUDE_MAX;
template<typename ContainerAllocator>
constexpr double Position3D_<ContainerAllocator>::LATITUDE_MIN;
template<typename ContainerAllocator>
constexpr double Position3D_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr double Position3D_<ContainerAllocator>::LONGITUDE_MAX;
template<typename ContainerAllocator>
constexpr double Position3D_<ContainerAllocator>::LONGITUDE_MIN;
template<typename ContainerAllocator>
constexpr float Position3D_<ContainerAllocator>::ELEVATION_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr float Position3D_<ContainerAllocator>::ELEVATION_MAX;
template<typename ContainerAllocator>
constexpr float Position3D_<ContainerAllocator>::ELEVATION_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_HPP_
