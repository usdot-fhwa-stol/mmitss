// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/PositionOffsetXYZ.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'offset_x'
// Member 'offset_y'
// Member 'offset_z'
#include "carma_v2x_msgs/msg/detail/object_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__PositionOffsetXYZ __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__PositionOffsetXYZ __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionOffsetXYZ_
{
  using Type = PositionOffsetXYZ_<ContainerAllocator>;

  explicit PositionOffsetXYZ_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset_x(_init),
    offset_y(_init),
    offset_z(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit PositionOffsetXYZ_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset_x(_alloc, _init),
    offset_y(_alloc, _init),
    offset_z(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _offset_x_type =
    carma_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>;
  _offset_x_type offset_x;
  using _offset_y_type =
    carma_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>;
  _offset_y_type offset_y;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _offset_z_type =
    carma_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>;
  _offset_z_type offset_z;

  // setters for named parameter idiom
  Type & set__offset_x(
    const carma_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const carma_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__offset_z(
    const carma_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> & _arg)
  {
    this->offset_z = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_OFFSET_Z =
    1u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__PositionOffsetXYZ
    std::shared_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__PositionOffsetXYZ
    std::shared_ptr<carma_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionOffsetXYZ_ & other) const
  {
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->offset_z != other.offset_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionOffsetXYZ_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionOffsetXYZ_

// alias to use template instance with default allocator
using PositionOffsetXYZ =
  carma_v2x_msgs::msg::PositionOffsetXYZ_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PositionOffsetXYZ_<ContainerAllocator>::HAS_OFFSET_Z;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__STRUCT_HPP_
