// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MeasurementTimeOffset.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MeasurementTimeOffset __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MeasurementTimeOffset __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeasurementTimeOffset_
{
  using Type = MeasurementTimeOffset_<ContainerAllocator>;

  explicit MeasurementTimeOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measurement_time_offset = 0.0f;
    }
  }

  explicit MeasurementTimeOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measurement_time_offset = 0.0f;
    }
  }

  // field types and members
  using _measurement_time_offset_type =
    float;
  _measurement_time_offset_type measurement_time_offset;

  // setters for named parameter idiom
  Type & set__measurement_time_offset(
    const float & _arg)
  {
    this->measurement_time_offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float MIN_MEASUREMENT_TIME_OFFSET =
    -1.5;
  static constexpr float MAX_MEASUREMENT_TIME_OFFSET =
    1.5;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MeasurementTimeOffset
    std::shared_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MeasurementTimeOffset
    std::shared_ptr<carma_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeasurementTimeOffset_ & other) const
  {
    if (this->measurement_time_offset != other.measurement_time_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeasurementTimeOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeasurementTimeOffset_

// alias to use template instance with default allocator
using MeasurementTimeOffset =
  carma_v2x_msgs::msg::MeasurementTimeOffset_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float MeasurementTimeOffset_<ContainerAllocator>::MIN_MEASUREMENT_TIME_OFFSET;
template<typename ContainerAllocator>
constexpr float MeasurementTimeOffset_<ContainerAllocator>::MAX_MEASUREMENT_TIME_OFFSET;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_HPP_
