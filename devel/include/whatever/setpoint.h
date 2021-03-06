// Generated by gencpp from file whatever/setpoint.msg
// DO NOT EDIT!


#ifndef WHATEVER_MESSAGE_SETPOINT_H
#define WHATEVER_MESSAGE_SETPOINT_H


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
struct setpoint_
{
  typedef setpoint_<ContainerAllocator> Type;

  setpoint_()
    : setpoint(0)
    , state(0)  {
    }
  setpoint_(const ContainerAllocator& _alloc)
    : setpoint(0)
    , state(0)  {
  (void)_alloc;
    }



   typedef int16_t _setpoint_type;
  _setpoint_type setpoint;

   typedef int16_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::whatever::setpoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::whatever::setpoint_<ContainerAllocator> const> ConstPtr;

}; // struct setpoint_

typedef ::whatever::setpoint_<std::allocator<void> > setpoint;

typedef boost::shared_ptr< ::whatever::setpoint > setpointPtr;
typedef boost::shared_ptr< ::whatever::setpoint const> setpointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::whatever::setpoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::whatever::setpoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::whatever::setpoint_<ContainerAllocator1> & lhs, const ::whatever::setpoint_<ContainerAllocator2> & rhs)
{
  return lhs.setpoint == rhs.setpoint &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::whatever::setpoint_<ContainerAllocator1> & lhs, const ::whatever::setpoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace whatever

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::whatever::setpoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whatever::setpoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whatever::setpoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whatever::setpoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whatever::setpoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whatever::setpoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::whatever::setpoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c823094da4abe0627d8c08c6c9da751e";
  }

  static const char* value(const ::whatever::setpoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc823094da4abe062ULL;
  static const uint64_t static_value2 = 0x7d8c08c6c9da751eULL;
};

template<class ContainerAllocator>
struct DataType< ::whatever::setpoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "whatever/setpoint";
  }

  static const char* value(const ::whatever::setpoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::whatever::setpoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 setpoint\n"
"int16 state\n"
;
  }

  static const char* value(const ::whatever::setpoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::whatever::setpoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.setpoint);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct setpoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::whatever::setpoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::whatever::setpoint_<ContainerAllocator>& v)
  {
    s << indent << "setpoint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.setpoint);
    s << indent << "state: ";
    Printer<int16_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHATEVER_MESSAGE_SETPOINT_H
