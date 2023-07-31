// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__AccelerationSet4Way __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__AccelerationSet4Way __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationSet4Way_
{
  using Type = AccelerationSet4Way_<ContainerAllocator>;

  explicit AccelerationSet4Way_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->longitudinal = 0.0f;
      this->lateral = 0.0f;
      this->vert = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  explicit AccelerationSet4Way_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->longitudinal = 0.0f;
      this->lateral = 0.0f;
      this->vert = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _longitudinal_type =
    float;
  _longitudinal_type longitudinal;
  using _lateral_type =
    float;
  _lateral_type lateral;
  using _vert_type =
    float;
  _vert_type vert;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__longitudinal(
    const float & _arg)
  {
    this->longitudinal = _arg;
    return *this;
  }
  Type & set__lateral(
    const float & _arg)
  {
    this->lateral = _arg;
    return *this;
  }
  Type & set__vert(
    const float & _arg)
  {
    this->vert = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ACCELERATION_AVAILABLE =
    1u;
  static constexpr uint16_t ACCELERATION_VERTICAL_AVAILABLE =
    2u;
  static constexpr uint16_t YAWRATE_AVAILABLE =
    4u;
  static constexpr float ACCELERATION_MAX =
    20.0;
  static constexpr float ACCELERATION_MIN =
    -20.0;
  static constexpr float ACCELERATION_VERTICAL_MAX =
    24.892;
  static constexpr float ACCELERATION_VERTICAL_MIN =
    -24.696;
  static constexpr float YAWRATE_MAX =
    327.67;
  static constexpr float YAWRATE_MIN =
    -327.67;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__AccelerationSet4Way
    std::shared_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__AccelerationSet4Way
    std::shared_ptr<carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationSet4Way_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->longitudinal != other.longitudinal) {
      return false;
    }
    if (this->lateral != other.lateral) {
      return false;
    }
    if (this->vert != other.vert) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationSet4Way_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationSet4Way_

// alias to use template instance with default allocator
using AccelerationSet4Way =
  carma_v2x_msgs::msg::AccelerationSet4Way_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_VERTICAL_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t AccelerationSet4Way_<ContainerAllocator>::YAWRATE_AVAILABLE;
template<typename ContainerAllocator>
constexpr float AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_MAX;
template<typename ContainerAllocator>
constexpr float AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_MIN;
template<typename ContainerAllocator>
constexpr float AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_VERTICAL_MAX;
template<typename ContainerAllocator>
constexpr float AccelerationSet4Way_<ContainerAllocator>::ACCELERATION_VERTICAL_MIN;
template<typename ContainerAllocator>
constexpr float AccelerationSet4Way_<ContainerAllocator>::YAWRATE_MAX;
template<typename ContainerAllocator>
constexpr float AccelerationSet4Way_<ContainerAllocator>::YAWRATE_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_
