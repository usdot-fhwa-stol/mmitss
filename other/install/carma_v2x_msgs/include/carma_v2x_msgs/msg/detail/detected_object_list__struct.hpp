// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'detected_object_data'
#include "carma_v2x_msgs/msg/detail/detected_object_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__DetectedObjectList __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__DetectedObjectList __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectList_
{
  using Type = DetectedObjectList_<ContainerAllocator>;

  explicit DetectedObjectList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectedObjectList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _detected_object_data_type =
    std::vector<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>::other>;
  _detected_object_data_type detected_object_data;

  // setters for named parameter idiom
  Type & set__detected_object_data(
    const std::vector<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::DetectedObjectData_<ContainerAllocator>>::other> & _arg)
  {
    this->detected_object_data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t DETECTED_OBJECT_DATA_MIN_SIZE =
    1u;
  static constexpr uint16_t DETECTED_OBJECT_DATA_MAX_SIZE =
    256u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedObjectList
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedObjectList
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectList_ & other) const
  {
    if (this->detected_object_data != other.detected_object_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectList_

// alias to use template instance with default allocator
using DetectedObjectList =
  carma_v2x_msgs::msg::DetectedObjectList_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t DetectedObjectList_<ContainerAllocator>::DETECTED_OBJECT_DATA_MIN_SIZE;
template<typename ContainerAllocator>
constexpr uint16_t DetectedObjectList_<ContainerAllocator>::DETECTED_OBJECT_DATA_MAX_SIZE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__STRUCT_HPP_
