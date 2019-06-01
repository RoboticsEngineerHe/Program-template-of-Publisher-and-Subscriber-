// Generated by gencpp from file test_tutorials/AddTwoInts.msg
// DO NOT EDIT!


#ifndef TEST_TUTORIALS_MESSAGE_ADDTWOINTS_H
#define TEST_TUTORIALS_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <test_tutorials/AddTwoIntsRequest.h>
#include <test_tutorials/AddTwoIntsResponse.h>


namespace test_tutorials
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace test_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test_tutorials::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::test_tutorials::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::test_tutorials::AddTwoInts > {
  static const char* value()
  {
    return "test_tutorials/AddTwoInts";
  }

  static const char* value(const ::test_tutorials::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::test_tutorials::AddTwoIntsRequest> should match 
// service_traits::MD5Sum< ::test_tutorials::AddTwoInts > 
template<>
struct MD5Sum< ::test_tutorials::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::test_tutorials::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_tutorials::AddTwoIntsRequest> should match 
// service_traits::DataType< ::test_tutorials::AddTwoInts > 
template<>
struct DataType< ::test_tutorials::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::test_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::test_tutorials::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test_tutorials::AddTwoIntsResponse> should match 
// service_traits::MD5Sum< ::test_tutorials::AddTwoInts > 
template<>
struct MD5Sum< ::test_tutorials::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::test_tutorials::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_tutorials::AddTwoIntsResponse> should match 
// service_traits::DataType< ::test_tutorials::AddTwoInts > 
template<>
struct DataType< ::test_tutorials::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::test_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::test_tutorials::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_TUTORIALS_MESSAGE_ADDTWOINTS_H
