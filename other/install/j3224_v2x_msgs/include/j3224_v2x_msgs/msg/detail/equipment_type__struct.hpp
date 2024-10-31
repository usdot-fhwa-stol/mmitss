// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/EquipmentType.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__EquipmentType __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__EquipmentType __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EquipmentType_
{
  using Type = EquipmentType_<ContainerAllocator>;

  explicit EquipmentType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->equipment_type = 0;
    }
  }

  explicit EquipmentType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->equipment_type = 0;
    }
  }

  // field types and members
  using _equipment_type_type =
    uint8_t;
  _equipment_type_type equipment_type;

  // setters for named parameter idiom
  Type & set__equipment_type(
    const uint8_t & _arg)
  {
    this->equipment_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t RSU =
    1u;
  static constexpr uint8_t OBU =
    2u;
  static constexpr uint8_t VRU =
    3u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__EquipmentType
    std::shared_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__EquipmentType
    std::shared_ptr<j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EquipmentType_ & other) const
  {
    if (this->equipment_type != other.equipment_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EquipmentType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EquipmentType_

// alias to use template instance with default allocator
using EquipmentType =
  j3224_v2x_msgs::msg::EquipmentType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EquipmentType_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t EquipmentType_<ContainerAllocator>::RSU;
template<typename ContainerAllocator>
constexpr uint8_t EquipmentType_<ContainerAllocator>::OBU;
template<typename ContainerAllocator>
constexpr uint8_t EquipmentType_<ContainerAllocator>::VRU;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__STRUCT_HPP_
