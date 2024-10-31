// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_

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
// Member 'end_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__Route __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__Route __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Route_
{
  using Type = Route_<ContainerAllocator>;

  explicit Route_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    end_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = "";
      this->route_version = 0ul;
      this->map_version = 0ul;
      this->route_name = "";
      this->is_rerouted = false;
    }
  }

  explicit Route_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    route_id(_alloc),
    route_name(_alloc),
    end_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = "";
      this->route_version = 0ul;
      this->map_version = 0ul;
      this->route_name = "";
      this->is_rerouted = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _route_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _route_id_type route_id;
  using _route_version_type =
    uint32_t;
  _route_version_type route_version;
  using _map_version_type =
    uint32_t;
  _map_version_type map_version;
  using _route_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _route_name_type route_name;
  using _is_rerouted_type =
    bool;
  _is_rerouted_type is_rerouted;
  using _shortest_path_lanelet_ids_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _shortest_path_lanelet_ids_type shortest_path_lanelet_ids;
  using _route_path_lanelet_ids_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _route_path_lanelet_ids_type route_path_lanelet_ids;
  using _end_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _end_point_type end_point;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__map_version(
    const uint32_t & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__route_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->route_name = _arg;
    return *this;
  }
  Type & set__is_rerouted(
    const bool & _arg)
  {
    this->is_rerouted = _arg;
    return *this;
  }
  Type & set__shortest_path_lanelet_ids(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->shortest_path_lanelet_ids = _arg;
    return *this;
  }
  Type & set__route_path_lanelet_ids(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->route_path_lanelet_ids = _arg;
    return *this;
  }
  Type & set__end_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->end_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::Route_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::Route_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::Route_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::Route_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__Route
    std::shared_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__Route
    std::shared_ptr<carma_planning_msgs::msg::Route_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Route_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->route_version != other.route_version) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->route_name != other.route_name) {
      return false;
    }
    if (this->is_rerouted != other.is_rerouted) {
      return false;
    }
    if (this->shortest_path_lanelet_ids != other.shortest_path_lanelet_ids) {
      return false;
    }
    if (this->route_path_lanelet_ids != other.route_path_lanelet_ids) {
      return false;
    }
    if (this->end_point != other.end_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Route_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Route_

// alias to use template instance with default allocator
using Route =
  carma_planning_msgs::msg::Route_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
