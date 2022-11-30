// Generated by gencpp from file uuv_world_ros_plugins_msgs/SetCurrentModelResponse.msg
// DO NOT EDIT!


#ifndef UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_SETCURRENTMODELRESPONSE_H
#define UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_SETCURRENTMODELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_world_ros_plugins_msgs
{
template <class ContainerAllocator>
struct SetCurrentModelResponse_
{
  typedef SetCurrentModelResponse_<ContainerAllocator> Type;

  SetCurrentModelResponse_()
    : success(false)  {
    }
  SetCurrentModelResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetCurrentModelResponse_

typedef ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<std::allocator<void> > SetCurrentModelResponse;

typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse > SetCurrentModelResponsePtr;
typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse const> SetCurrentModelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator1> & lhs, const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator1> & lhs, const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_world_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_world_ros_plugins_msgs/SetCurrentModelResponse";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCurrentModelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_world_ros_plugins_msgs::SetCurrentModelResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_SETCURRENTMODELRESPONSE_H
