// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__STRUCT_HPP_
#define CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ind_list'
#include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
// Member 'cda_list'
#include "carma_msgs/msg/detail/light_bar_cda_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Request __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestIndicatorControl_Request_
{
  using Type = RequestIndicatorControl_Request_<ContainerAllocator>;

  explicit RequestIndicatorControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester_name = "";
    }
  }

  explicit RequestIndicatorControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester_name = "";
    }
  }

  // field types and members
  using _ind_list_type =
    std::vector<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>::other>;
  _ind_list_type ind_list;
  using _cda_list_type =
    std::vector<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>::other>;
  _cda_list_type cda_list;
  using _requester_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _requester_name_type requester_name;

  // setters for named parameter idiom
  Type & set__ind_list(
    const std::vector<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>::other> & _arg)
  {
    this->ind_list = _arg;
    return *this;
  }
  Type & set__cda_list(
    const std::vector<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>::other> & _arg)
  {
    this->cda_list = _arg;
    return *this;
  }
  Type & set__requester_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->requester_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Request
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Request
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestIndicatorControl_Request_ & other) const
  {
    if (this->ind_list != other.ind_list) {
      return false;
    }
    if (this->cda_list != other.cda_list) {
      return false;
    }
    if (this->requester_name != other.requester_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestIndicatorControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestIndicatorControl_Request_

// alias to use template instance with default allocator
using RequestIndicatorControl_Request =
  carma_msgs::srv::RequestIndicatorControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_msgs


// Include directives for member types
// Member 'ind_list'
// already included above
// #include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
// Member 'cda_list'
// already included above
// #include "carma_msgs/msg/detail/light_bar_cda_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Response __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestIndicatorControl_Response_
{
  using Type = RequestIndicatorControl_Response_<ContainerAllocator>;

  explicit RequestIndicatorControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RequestIndicatorControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ind_list_type =
    std::vector<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>::other>;
  _ind_list_type ind_list;
  using _cda_list_type =
    std::vector<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>::other>;
  _cda_list_type cda_list;

  // setters for named parameter idiom
  Type & set__ind_list(
    const std::vector<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>::other> & _arg)
  {
    this->ind_list = _arg;
    return *this;
  }
  Type & set__cda_list(
    const std::vector<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>::other> & _arg)
  {
    this->cda_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Response
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__srv__RequestIndicatorControl_Response
    std::shared_ptr<carma_msgs::srv::RequestIndicatorControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestIndicatorControl_Response_ & other) const
  {
    if (this->ind_list != other.ind_list) {
      return false;
    }
    if (this->cda_list != other.cda_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestIndicatorControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestIndicatorControl_Response_

// alias to use template instance with default allocator
using RequestIndicatorControl_Response =
  carma_msgs::srv::RequestIndicatorControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_msgs

namespace carma_msgs
{

namespace srv
{

struct RequestIndicatorControl
{
  using Request = carma_msgs::srv::RequestIndicatorControl_Request;
  using Response = carma_msgs::srv::RequestIndicatorControl_Response;
};

}  // namespace srv

}  // namespace carma_msgs

#endif  // CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__STRUCT_HPP_
