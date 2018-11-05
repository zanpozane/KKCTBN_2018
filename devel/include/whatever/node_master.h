// Generated by gencpp from file whatever/node_master.msg
// DO NOT EDIT!


#ifndef WHATEVER_MESSAGE_NODE_MASTER_H
#define WHATEVER_MESSAGE_NODE_MASTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace whatever
{
template <class ContainerAllocator>
struct node_master_
{
  typedef node_master_<ContainerAllocator> Type;

  node_master_()
    : override_status(false)
    , pid_status(false)
    , simple_manuver(false)
    , simple_speed(false)
    , recorder(false)
    , player(false)  {
    }
  node_master_(const ContainerAllocator& _alloc)
    : override_status(false)
    , pid_status(false)
    , simple_manuver(false)
    , simple_speed(false)
    , recorder(false)
    , player(false)  {
  (void)_alloc;
    }



   typedef uint8_t _override_status_type;
  _override_status_type override_status;

   typedef uint8_t _pid_status_type;
  _pid_status_type pid_status;

   typedef uint8_t _simple_manuver_type;
  _simple_manuver_type simple_manuver;

   typedef uint8_t _simple_speed_type;
  _simple_speed_type simple_speed;

   typedef uint8_t _recorder_type;
  _recorder_type recorder;

   typedef uint8_t _player_type;
  _player_type player;





  typedef boost::shared_ptr< ::whatever::node_master_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::whatever::node_master_<ContainerAllocator> const> ConstPtr;

}; // struct node_master_

typedef ::whatever::node_master_<std::allocator<void> > node_master;

typedef boost::shared_ptr< ::whatever::node_master > node_masterPtr;
typedef boost::shared_ptr< ::whatever::node_master const> node_masterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::whatever::node_master_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::whatever::node_master_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace whatever

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'whatever': ['/home/mfikih15/Documents/AMV/src/whatever/msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::whatever::node_master_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whatever::node_master_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whatever::node_master_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whatever::node_master_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whatever::node_master_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whatever::node_master_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::whatever::node_master_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8dbc3cc1533c62f04e54d76742a542b";
  }

  static const char* value(const ::whatever::node_master_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8dbc3cc1533c62fULL;
  static const uint64_t static_value2 = 0x04e54d76742a542bULL;
};

template<class ContainerAllocator>
struct DataType< ::whatever::node_master_<ContainerAllocator> >
{
  static const char* value()
  {
    return "whatever/node_master";
  }

  static const char* value(const ::whatever::node_master_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::whatever::node_master_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool override_status\n\
bool pid_status\n\
bool simple_manuver\n\
bool simple_speed\n\
bool recorder\n\
bool player\n\
";
  }

  static const char* value(const ::whatever::node_master_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::whatever::node_master_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.override_status);
      stream.next(m.pid_status);
      stream.next(m.simple_manuver);
      stream.next(m.simple_speed);
      stream.next(m.recorder);
      stream.next(m.player);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_master_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::whatever::node_master_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::whatever::node_master_<ContainerAllocator>& v)
  {
    s << indent << "override_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.override_status);
    s << indent << "pid_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pid_status);
    s << indent << "simple_manuver: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.simple_manuver);
    s << indent << "simple_speed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.simple_speed);
    s << indent << "recorder: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.recorder);
    s << indent << "player: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.player);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHATEVER_MESSAGE_NODE_MASTER_H
