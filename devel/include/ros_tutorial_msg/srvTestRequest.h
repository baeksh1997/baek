// Generated by gencpp from file ros_tutorial_msg/srvTestRequest.msg
// DO NOT EDIT!


#ifndef ROS_TUTORIAL_MSG_MESSAGE_SRVTESTREQUEST_H
#define ROS_TUTORIAL_MSG_MESSAGE_SRVTESTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_tutorial_msg
{
template <class ContainerAllocator>
struct srvTestRequest_
{
  typedef srvTestRequest_<ContainerAllocator> Type;

  srvTestRequest_()
    : a(0)
    , b(0)  {
    }
  srvTestRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int32_t _a_type;
  _a_type a;

   typedef int32_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct srvTestRequest_

typedef ::ros_tutorial_msg::srvTestRequest_<std::allocator<void> > srvTestRequest;

typedef boost::shared_ptr< ::ros_tutorial_msg::srvTestRequest > srvTestRequestPtr;
typedef boost::shared_ptr< ::ros_tutorial_msg::srvTestRequest const> srvTestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_tutorial_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ros_tutorial_msg': ['/home/baek/catkin_ws2/src/ros_tutorial_msg/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef8322123148e475e3e93a1f609b2f70";
  }

  static const char* value(const ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef8322123148e475ULL;
  static const uint64_t static_value2 = 0xe3e93a1f609b2f70ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_tutorial_msg/srvTestRequest";
  }

  static const char* value(const ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 a\n\
int32 b\n\
";
  }

  static const char* value(const ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct srvTestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_tutorial_msg::srvTestRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_TUTORIAL_MSG_MESSAGE_SRVTESTREQUEST_H
