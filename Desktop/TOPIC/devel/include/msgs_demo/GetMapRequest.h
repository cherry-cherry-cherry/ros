// Generated by gencpp from file msgs_demo/GetMapRequest.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_GETMAPREQUEST_H
#define MSGS_DEMO_MESSAGE_GETMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace msgs_demo
{
template <class ContainerAllocator>
struct GetMapRequest_
{
  typedef GetMapRequest_<ContainerAllocator> Type;

  GetMapRequest_()
    {
    }
  GetMapRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::msgs_demo::GetMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::GetMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapRequest_

typedef ::msgs_demo::GetMapRequest_<std::allocator<void> > GetMapRequest;

typedef boost::shared_ptr< ::msgs_demo::GetMapRequest > GetMapRequestPtr;
typedef boost::shared_ptr< ::msgs_demo::GetMapRequest const> GetMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::GetMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::GetMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgs_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msgs_demo': ['/home/ros/Desktop/TOPIC/src/catkin_ws/src/ROS-Academy-for-Beginners/msgs_demo/msg', '/home/ros/Desktop/TOPIC/devel/share/msgs_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::GetMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::GetMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::GetMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::msgs_demo::GetMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/GetMapRequest";
  }

  static const char* value(const ::msgs_demo::GetMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::msgs_demo::GetMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::GetMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::msgs_demo::GetMapRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_GETMAPREQUEST_H
