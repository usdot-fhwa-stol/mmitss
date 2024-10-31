// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__STRUCT_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'update_list'
// Member 'remove_list'
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_debug_ros2_msgs__msg__MapUpdateReadable __attribute__((deprecated))
#else
# define DEPRECATED__carma_debug_ros2_msgs__msg__MapUpdateReadable __declspec(deprecated)
#endif

namespace carma_debug_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapUpdateReadable_
{
  using Type = MapUpdateReadable_<ContainerAllocator>;

  explicit MapUpdateReadable_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->format_version = "";
      this->map_version = "";
      this->route_id = "";
      this->route_version = 0ul;
      this->invalidates_route = false;
      this->traffic_control_id = "";
    }
  }

  explicit MapUpdateReadable_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    format_version(_alloc),
    map_version(_alloc),
    route_id(_alloc),
    traffic_control_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->format_version = "";
      this->map_version = "";
      this->route_id = "";
      this->route_version = 0ul;
      this->invalidates_route = false;
      this->traffic_control_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _format_version_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _format_version_type format_version;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _map_version_type map_version;
  using _route_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _route_id_type route_id;
  using _route_version_type =
    uint32_t;
  _route_version_type route_version;
  using _invalidates_route_type =
    bool;
  _invalidates_route_type invalidates_route;
  using _traffic_control_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _traffic_control_id_type traffic_control_id;
  using _update_list_type =
    std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>::other>;
  _update_list_type update_list;
  using _remove_list_type =
    std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>::other>;
  _remove_list_type remove_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__format_version(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->format_version = _arg;
    return *this;
  }
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__route_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->route_id = _arg;
    return *this;
  }
  Type & set__route_version(
    const uint32_t & _arg)
  {
    this->route_version = _arg;
    return *this;
  }
  Type & set__invalidates_route(
    const bool & _arg)
  {
    this->invalidates_route = _arg;
    return *this;
  }
  Type & set__traffic_control_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->traffic_control_id = _arg;
    return *this;
  }
  Type & set__update_list(
    const std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>::other> & _arg)
  {
    this->update_list = _arg;
    return *this;
  }
  Type & set__remove_list(
    const std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>::other> & _arg)
  {
    this->remove_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__MapUpdateReadable
    std::shared_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__MapUpdateReadable
    std::shared_ptr<carma_debug_ros2_msgs::msg::MapUpdateReadable_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapUpdateReadable_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->format_version != other.format_version) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->route_version != other.route_version) {
      return false;
    }
    if (this->invalidates_route != other.invalidates_route) {
      return false;
    }
    if (this->traffic_control_id != other.traffic_control_id) {
      return false;
    }
    if (this->update_list != other.update_list) {
      return false;
    }
    if (this->remove_list != other.remove_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapUpdateReadable_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapUpdateReadable_

// alias to use template instance with default allocator
using MapUpdateReadable =
  carma_debug_ros2_msgs::msg::MapUpdateReadable_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__STRUCT_HPP_
