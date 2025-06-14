// Generated by gencpp from file cav_msgs/ByteArray.msg
// DO NOT EDIT!


#ifndef CAV_MSGS_MESSAGE_BYTEARRAY_H
#define CAV_MSGS_MESSAGE_BYTEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cav_msgs
{
template <class ContainerAllocator>
struct ByteArray_
{
  typedef ByteArray_<ContainerAllocator> Type;

  ByteArray_()
    : header()
    , messageType()
    , content()  {
    }
  ByteArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , messageType(_alloc)
    , content(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _messageType_type;
  _messageType_type messageType;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _content_type;
  _content_type content;





  typedef boost::shared_ptr< ::cav_msgs::ByteArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cav_msgs::ByteArray_<ContainerAllocator> const> ConstPtr;

}; // struct ByteArray_

typedef ::cav_msgs::ByteArray_<std::allocator<void> > ByteArray;

typedef boost::shared_ptr< ::cav_msgs::ByteArray > ByteArrayPtr;
typedef boost::shared_ptr< ::cav_msgs::ByteArray const> ByteArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cav_msgs::ByteArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cav_msgs::ByteArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cav_msgs::ByteArray_<ContainerAllocator1> & lhs, const ::cav_msgs::ByteArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.messageType == rhs.messageType &&
    lhs.content == rhs.content;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cav_msgs::ByteArray_<ContainerAllocator1> & lhs, const ::cav_msgs::ByteArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cav_msgs::ByteArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cav_msgs::ByteArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cav_msgs::ByteArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cav_msgs::ByteArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cav_msgs::ByteArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cav_msgs::ByteArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cav_msgs::ByteArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6b87f87806cca414ef2cd41baf1a8ce0";
  }

  static const char* value(const ::cav_msgs::ByteArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6b87f87806cca414ULL;
  static const uint64_t static_value2 = 0xef2cd41baf1a8ce0ULL;
};

template<class ContainerAllocator>
struct DataType< ::cav_msgs::ByteArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cav_msgs/ByteArray";
  }

  static const char* value(const ::cav_msgs::ByteArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cav_msgs::ByteArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# ByteArray.msg\n"
"#\n"
"# J2735 2016 message format.\n"
"#\n"
"# @author Mae Fromm\n"
"# @version 0.1\n"
"#\n"
"# Raw binary blobs from Drivers.Comms package and then parse the raw data according to the header. \n"
"# Currently all messages are DSRC message. \n"
"# \n"
"# NOTE: Initial version only considers Part I. Part II will be defined for later use. \n"
"\n"
"std_msgs/Header header\n"
"\n"
"# Need to know the type before parsing. MessageTypes are MAP, SPAT, TIM, BSM, Mobility.\n"
"string messageType\n"
"\n"
"# The DSRC message content\n"
"uint8[] content\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::cav_msgs::ByteArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cav_msgs::ByteArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.messageType);
      stream.next(m.content);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ByteArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cav_msgs::ByteArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cav_msgs::ByteArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "messageType: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.messageType);
    s << indent << "content[]" << std::endl;
    for (size_t i = 0; i < v.content.size(); ++i)
    {
      s << indent << "  content[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.content[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAV_MSGS_MESSAGE_BYTEARRAY_H
