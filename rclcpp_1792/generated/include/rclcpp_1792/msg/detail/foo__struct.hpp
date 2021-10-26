// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rclcpp_1792:msg/Foo.idl
// generated code does not contain a copyright notice

#ifndef RCLCPP_1792__MSG__DETAIL__FOO__STRUCT_HPP_
#define RCLCPP_1792__MSG__DETAIL__FOO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rclcpp_1792__msg__Foo __attribute__((deprecated))
#else
# define DEPRECATED__rclcpp_1792__msg__Foo __declspec(deprecated)
#endif

namespace rclcpp_1792
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Foo_
{
  using Type = Foo_<ContainerAllocator>;

  explicit Foo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intnum = 0ll;
      this->floatnum = 0.0;
    }
  }

  explicit Foo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intnum = 0ll;
      this->floatnum = 0.0;
    }
  }

  // field types and members
  using _intnum_type =
    int64_t;
  _intnum_type intnum;
  using _octetseq_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _octetseq_type octetseq;
  using _floatnum_type =
    double;
  _floatnum_type floatnum;

  // setters for named parameter idiom
  Type & set__intnum(
    const int64_t & _arg)
  {
    this->intnum = _arg;
    return *this;
  }
  Type & set__octetseq(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->octetseq = _arg;
    return *this;
  }
  Type & set__floatnum(
    const double & _arg)
  {
    this->floatnum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rclcpp_1792::msg::Foo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rclcpp_1792::msg::Foo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rclcpp_1792::msg::Foo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rclcpp_1792::msg::Foo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rclcpp_1792__msg__Foo
    std::shared_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rclcpp_1792__msg__Foo
    std::shared_ptr<rclcpp_1792::msg::Foo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Foo_ & other) const
  {
    if (this->intnum != other.intnum) {
      return false;
    }
    if (this->octetseq != other.octetseq) {
      return false;
    }
    if (this->floatnum != other.floatnum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Foo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Foo_

// alias to use template instance with default allocator
using Foo =
  rclcpp_1792::msg::Foo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rclcpp_1792

#endif  // RCLCPP_1792__MSG__DETAIL__FOO__STRUCT_HPP_
