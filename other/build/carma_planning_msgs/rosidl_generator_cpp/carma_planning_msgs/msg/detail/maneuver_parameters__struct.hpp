// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'time_valued_meta_data'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__ManeuverParameters __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__ManeuverParameters __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManeuverParameters_
{
  using Type = ManeuverParameters_<ContainerAllocator>;

  explicit ManeuverParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_id = "";
      this->negotiation_type = 0;
      this->planning_strategic_plugin = "";
      this->presence_vector = 0;
      this->planning_tactical_plugin = "";
    }
  }

  explicit ManeuverParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver_id(_alloc),
    planning_strategic_plugin(_alloc),
    planning_tactical_plugin(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_id = "";
      this->negotiation_type = 0;
      this->planning_strategic_plugin = "";
      this->presence_vector = 0;
      this->planning_tactical_plugin = "";
    }
  }

  // field types and members
  using _maneuver_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _maneuver_id_type maneuver_id;
  using _negotiation_type_type =
    uint8_t;
  _negotiation_type_type negotiation_type;
  using _planning_strategic_plugin_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _planning_strategic_plugin_type planning_strategic_plugin;
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _planning_tactical_plugin_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _planning_tactical_plugin_type planning_tactical_plugin;
  using _bool_valued_meta_data_type =
    std::vector<bool, typename ContainerAllocator::template rebind<bool>::other>;
  _bool_valued_meta_data_type bool_valued_meta_data;
  using _int_valued_meta_data_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _int_valued_meta_data_type int_valued_meta_data;
  using _float_valued_meta_data_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _float_valued_meta_data_type float_valued_meta_data;
  using _string_valued_meta_data_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _string_valued_meta_data_type string_valued_meta_data;
  using _time_valued_meta_data_type =
    std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename ContainerAllocator::template rebind<builtin_interfaces::msg::Time_<ContainerAllocator>>::other>;
  _time_valued_meta_data_type time_valued_meta_data;

  // setters for named parameter idiom
  Type & set__maneuver_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->maneuver_id = _arg;
    return *this;
  }
  Type & set__negotiation_type(
    const uint8_t & _arg)
  {
    this->negotiation_type = _arg;
    return *this;
  }
  Type & set__planning_strategic_plugin(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->planning_strategic_plugin = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__planning_tactical_plugin(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->planning_tactical_plugin = _arg;
    return *this;
  }
  Type & set__bool_valued_meta_data(
    const std::vector<bool, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->bool_valued_meta_data = _arg;
    return *this;
  }
  Type & set__int_valued_meta_data(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->int_valued_meta_data = _arg;
    return *this;
  }
  Type & set__float_valued_meta_data(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->float_valued_meta_data = _arg;
    return *this;
  }
  Type & set__string_valued_meta_data(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->string_valued_meta_data = _arg;
    return *this;
  }
  Type & set__time_valued_meta_data(
    const std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename ContainerAllocator::template rebind<builtin_interfaces::msg::Time_<ContainerAllocator>>::other> & _arg)
  {
    this->time_valued_meta_data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_NEGOTIATION =
    0u;
  static constexpr uint8_t GENERAL_NEGOTIATION =
    1u;
  static constexpr uint8_t PLATOONING =
    2u;
  static constexpr uint16_t HAS_TACTICAL_PLUGIN =
    1u;
  static constexpr uint16_t HAS_BOOL_META_DATA =
    2u;
  static constexpr uint16_t HAS_INT_META_DATA =
    4u;
  static constexpr uint16_t HAS_FLOAT_META_DATA =
    8u;
  static constexpr uint16_t HAS_STRING_META_DATA =
    16u;
  static constexpr uint16_t HAS_TIME_META_DATA =
    32u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__ManeuverParameters
    std::shared_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__ManeuverParameters
    std::shared_ptr<carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManeuverParameters_ & other) const
  {
    if (this->maneuver_id != other.maneuver_id) {
      return false;
    }
    if (this->negotiation_type != other.negotiation_type) {
      return false;
    }
    if (this->planning_strategic_plugin != other.planning_strategic_plugin) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->planning_tactical_plugin != other.planning_tactical_plugin) {
      return false;
    }
    if (this->bool_valued_meta_data != other.bool_valued_meta_data) {
      return false;
    }
    if (this->int_valued_meta_data != other.int_valued_meta_data) {
      return false;
    }
    if (this->float_valued_meta_data != other.float_valued_meta_data) {
      return false;
    }
    if (this->string_valued_meta_data != other.string_valued_meta_data) {
      return false;
    }
    if (this->time_valued_meta_data != other.time_valued_meta_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManeuverParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManeuverParameters_

// alias to use template instance with default allocator
using ManeuverParameters =
  carma_planning_msgs::msg::ManeuverParameters_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ManeuverParameters_<ContainerAllocator>::NO_NEGOTIATION;
template<typename ContainerAllocator>
constexpr uint8_t ManeuverParameters_<ContainerAllocator>::GENERAL_NEGOTIATION;
template<typename ContainerAllocator>
constexpr uint8_t ManeuverParameters_<ContainerAllocator>::PLATOONING;
template<typename ContainerAllocator>
constexpr uint16_t ManeuverParameters_<ContainerAllocator>::HAS_TACTICAL_PLUGIN;
template<typename ContainerAllocator>
constexpr uint16_t ManeuverParameters_<ContainerAllocator>::HAS_BOOL_META_DATA;
template<typename ContainerAllocator>
constexpr uint16_t ManeuverParameters_<ContainerAllocator>::HAS_INT_META_DATA;
template<typename ContainerAllocator>
constexpr uint16_t ManeuverParameters_<ContainerAllocator>::HAS_FLOAT_META_DATA;
template<typename ContainerAllocator>
constexpr uint16_t ManeuverParameters_<ContainerAllocator>::HAS_STRING_META_DATA;
template<typename ContainerAllocator>
constexpr uint16_t ManeuverParameters_<ContainerAllocator>::HAS_TIME_META_DATA;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__STRUCT_HPP_
