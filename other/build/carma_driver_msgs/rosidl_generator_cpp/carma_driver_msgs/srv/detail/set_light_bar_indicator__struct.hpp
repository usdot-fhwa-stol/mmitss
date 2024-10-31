// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'indicator'
#include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
// Member 'cda_type'
#include "carma_msgs/msg/detail/light_bar_cda_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Request __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLightBarIndicator_Request_
{
  using Type = SetLightBarIndicator_Request_<ContainerAllocator>;

  explicit SetLightBarIndicator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : indicator(_init),
    cda_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->requester_name = "";
    }
  }

  explicit SetLightBarIndicator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester_name(_alloc),
    indicator(_alloc, _init),
    cda_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->requester_name = "";
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;
  using _requester_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _requester_name_type requester_name;
  using _indicator_type =
    carma_msgs::msg::LightBarIndicator_<ContainerAllocator>;
  _indicator_type indicator;
  using _cda_type_type =
    carma_msgs::msg::LightBarCDAType_<ContainerAllocator>;
  _cda_type_type cda_type;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__requester_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->requester_name = _arg;
    return *this;
  }
  Type & set__indicator(
    const carma_msgs::msg::LightBarIndicator_<ContainerAllocator> & _arg)
  {
    this->indicator = _arg;
    return *this;
  }
  Type & set__cda_type(
    const carma_msgs::msg::LightBarCDAType_<ContainerAllocator> & _arg)
  {
    this->cda_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t ON =
    1u;

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Request
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Request
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLightBarIndicator_Request_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->requester_name != other.requester_name) {
      return false;
    }
    if (this->indicator != other.indicator) {
      return false;
    }
    if (this->cda_type != other.cda_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLightBarIndicator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLightBarIndicator_Request_

// alias to use template instance with default allocator
using SetLightBarIndicator_Request =
  carma_driver_msgs::srv::SetLightBarIndicator_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SetLightBarIndicator_Request_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t SetLightBarIndicator_Request_<ContainerAllocator>::ON;

}  // namespace srv

}  // namespace carma_driver_msgs


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Response __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLightBarIndicator_Response_
{
  using Type = SetLightBarIndicator_Response_<ContainerAllocator>;

  explicit SetLightBarIndicator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_code = 0;
    }
  }

  explicit SetLightBarIndicator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_code = 0;
    }
  }

  // field types and members
  using _status_code_type =
    uint8_t;
  _status_code_type status_code;

  // setters for named parameter idiom
  Type & set__status_code(
    const uint8_t & _arg)
  {
    this->status_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUCCESS =
    0u;
  static constexpr uint8_t PERMISSION_DENIED =
    1u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    2u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Response
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__SetLightBarIndicator_Response
    std::shared_ptr<carma_driver_msgs::srv::SetLightBarIndicator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLightBarIndicator_Response_ & other) const
  {
    if (this->status_code != other.status_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLightBarIndicator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLightBarIndicator_Response_

// alias to use template instance with default allocator
using SetLightBarIndicator_Response =
  carma_driver_msgs::srv::SetLightBarIndicator_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SetLightBarIndicator_Response_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t SetLightBarIndicator_Response_<ContainerAllocator>::PERMISSION_DENIED;
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t SetLightBarIndicator_Response_<ContainerAllocator>::ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace srv

}  // namespace carma_driver_msgs

namespace carma_driver_msgs
{

namespace srv
{

struct SetLightBarIndicator
{
  using Request = carma_driver_msgs::srv::SetLightBarIndicator_Request;
  using Response = carma_driver_msgs::srv::SetLightBarIndicator_Response;
};

}  // namespace srv

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__STRUCT_HPP_
