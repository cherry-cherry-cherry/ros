// Generated by gencpp from file msgs_demo/GetMap.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_GETMAP_H
#define MSGS_DEMO_MESSAGE_GETMAP_H

#include <ros/service_traits.h>


#include <msgs_demo/GetMapRequest.h>
#include <msgs_demo/GetMapResponse.h>


namespace msgs_demo
{

struct GetMap
{

typedef GetMapRequest Request;
typedef GetMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetMap
} // namespace msgs_demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::msgs_demo::GetMap > {
  static const char* value()
  {
    return "6cdd0a18e0aff5b0a3ca2326a89b54ff";
  }

  static const char* value(const ::msgs_demo::GetMap&) { return value(); }
};

template<>
struct DataType< ::msgs_demo::GetMap > {
  static const char* value()
  {
    return "msgs_demo/GetMap";
  }

  static const char* value(const ::msgs_demo::GetMap&) { return value(); }
};


// service_traits::MD5Sum< ::msgs_demo::GetMapRequest> should match 
// service_traits::MD5Sum< ::msgs_demo::GetMap > 
template<>
struct MD5Sum< ::msgs_demo::GetMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::msgs_demo::GetMap >::value();
  }
  static const char* value(const ::msgs_demo::GetMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::msgs_demo::GetMapRequest> should match 
// service_traits::DataType< ::msgs_demo::GetMap > 
template<>
struct DataType< ::msgs_demo::GetMapRequest>
{
  static const char* value()
  {
    return DataType< ::msgs_demo::GetMap >::value();
  }
  static const char* value(const ::msgs_demo::GetMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::msgs_demo::GetMapResponse> should match 
// service_traits::MD5Sum< ::msgs_demo::GetMap > 
template<>
struct MD5Sum< ::msgs_demo::GetMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::msgs_demo::GetMap >::value();
  }
  static const char* value(const ::msgs_demo::GetMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::msgs_demo::GetMapResponse> should match 
// service_traits::DataType< ::msgs_demo::GetMap > 
template<>
struct DataType< ::msgs_demo::GetMapResponse>
{
  static const char* value()
  {
    return DataType< ::msgs_demo::GetMap >::value();
  }
  static const char* value(const ::msgs_demo::GetMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_GETMAP_H