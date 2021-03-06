// Generated by gencpp from file hrwros_gazebo/VacuumGripperControl.msg
// DO NOT EDIT!


#ifndef HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERCONTROL_H
#define HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERCONTROL_H

#include <ros/service_traits.h>


#include <hrwros_gazebo/VacuumGripperControlRequest.h>
#include <hrwros_gazebo/VacuumGripperControlResponse.h>


namespace hrwros_gazebo
{

struct VacuumGripperControl
{

typedef VacuumGripperControlRequest Request;
typedef VacuumGripperControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct VacuumGripperControl
} // namespace hrwros_gazebo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hrwros_gazebo::VacuumGripperControl > {
  static const char* value()
  {
    return "6a0b406242562fc416b2c9c8a3efb051";
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperControl&) { return value(); }
};

template<>
struct DataType< ::hrwros_gazebo::VacuumGripperControl > {
  static const char* value()
  {
    return "hrwros_gazebo/VacuumGripperControl";
  }

  static const char* value(const ::hrwros_gazebo::VacuumGripperControl&) { return value(); }
};


// service_traits::MD5Sum< ::hrwros_gazebo::VacuumGripperControlRequest> should match 
// service_traits::MD5Sum< ::hrwros_gazebo::VacuumGripperControl > 
template<>
struct MD5Sum< ::hrwros_gazebo::VacuumGripperControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hrwros_gazebo::VacuumGripperControl >::value();
  }
  static const char* value(const ::hrwros_gazebo::VacuumGripperControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hrwros_gazebo::VacuumGripperControlRequest> should match 
// service_traits::DataType< ::hrwros_gazebo::VacuumGripperControl > 
template<>
struct DataType< ::hrwros_gazebo::VacuumGripperControlRequest>
{
  static const char* value()
  {
    return DataType< ::hrwros_gazebo::VacuumGripperControl >::value();
  }
  static const char* value(const ::hrwros_gazebo::VacuumGripperControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hrwros_gazebo::VacuumGripperControlResponse> should match 
// service_traits::MD5Sum< ::hrwros_gazebo::VacuumGripperControl > 
template<>
struct MD5Sum< ::hrwros_gazebo::VacuumGripperControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hrwros_gazebo::VacuumGripperControl >::value();
  }
  static const char* value(const ::hrwros_gazebo::VacuumGripperControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hrwros_gazebo::VacuumGripperControlResponse> should match 
// service_traits::DataType< ::hrwros_gazebo::VacuumGripperControl > 
template<>
struct DataType< ::hrwros_gazebo::VacuumGripperControlResponse>
{
  static const char* value()
  {
    return DataType< ::hrwros_gazebo::VacuumGripperControl >::value();
  }
  static const char* value(const ::hrwros_gazebo::VacuumGripperControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HRWROS_GAZEBO_MESSAGE_VACUUMGRIPPERCONTROL_H
