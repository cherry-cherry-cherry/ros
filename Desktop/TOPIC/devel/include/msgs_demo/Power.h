// Generated by gencpp from file msgs_demo/Power.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_POWER_H
#define MSGS_DEMO_MESSAGE_POWER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace msgs_demo
{
template <class ContainerAllocator>
struct Power_
{
  typedef Power_<ContainerAllocator> Type;

  Power_()
    : header()
    , power(false)  {
    }
  Power_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , power(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _power_type;
  _power_type power;




  static const uint8_t ON;
  static const uint8_t OFF;

  typedef boost::shared_ptr< ::msgs_demo::Power_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::Power_<ContainerAllocator> const> ConstPtr;

}; // struct Power_

typedef ::msgs_demo::Power_<std::allocator<void> > Power;

typedef boost::shared_ptr< ::msgs_demo::Power > PowerPtr;
typedef boost::shared_ptr< ::msgs_demo::Power const> PowerConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const uint8_t
      Power_<ContainerAllocator>::ON =
        
           1
        
        ;
   

   
   template<typename ContainerAllocator> const uint8_t
      Power_<ContainerAllocator>::OFF =
        
           0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::Power_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::Power_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgs_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msgs_demo': ['/home/ros/Desktop/TOPIC/src/catkin_ws/src/ROS-Academy-for-Beginners/msgs_demo/msg', '/home/ros/Desktop/TOPIC/devel/share/msgs_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::Power_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::Power_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::Power_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::Power_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::Power_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::Power_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::Power_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c1df04c080f2d0a63612b2aeb670955";
  }

  static const char* value(const ::msgs_demo::Power_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c1df04c080f2d0aULL;
  static const uint64_t static_value2 = 0x63612b2aeb670955ULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::Power_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/Power";
  }

  static const char* value(const ::msgs_demo::Power_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::Power_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool power\n\
\n\
\n\
######################\n\
bool ON  = 1\n\
bool OFF = 0\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::msgs_demo::Power_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::Power_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.power);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Power_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::Power_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgs_demo::Power_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.power);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_POWER_H