// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mycobot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mycobot_interfaces/srv/get_planning_scene.hpp"


#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__BUILDER_HPP_
#define MYCOBOT_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mycobot_interfaces/srv/detail/get_planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mycobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPlanningScene_Request_target_dimensions
{
public:
  explicit Init_GetPlanningScene_Request_target_dimensions(::mycobot_interfaces::srv::GetPlanningScene_Request & msg)
  : msg_(msg)
  {}
  ::mycobot_interfaces::srv::GetPlanningScene_Request target_dimensions(::mycobot_interfaces::srv::GetPlanningScene_Request::_target_dimensions_type arg)
  {
    msg_.target_dimensions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Request msg_;
};

class Init_GetPlanningScene_Request_target_shape
{
public:
  Init_GetPlanningScene_Request_target_shape()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlanningScene_Request_target_dimensions target_shape(::mycobot_interfaces::srv::GetPlanningScene_Request::_target_shape_type arg)
  {
    msg_.target_shape = std::move(arg);
    return Init_GetPlanningScene_Request_target_dimensions(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_interfaces::srv::GetPlanningScene_Request>()
{
  return mycobot_interfaces::srv::builder::Init_GetPlanningScene_Request_target_shape();
}

}  // namespace mycobot_interfaces


namespace mycobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPlanningScene_Response_success
{
public:
  explicit Init_GetPlanningScene_Response_success(::mycobot_interfaces::srv::GetPlanningScene_Response & msg)
  : msg_(msg)
  {}
  ::mycobot_interfaces::srv::GetPlanningScene_Response success(::mycobot_interfaces::srv::GetPlanningScene_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Response msg_;
};

class Init_GetPlanningScene_Response_support_surface_id
{
public:
  explicit Init_GetPlanningScene_Response_support_surface_id(::mycobot_interfaces::srv::GetPlanningScene_Response & msg)
  : msg_(msg)
  {}
  Init_GetPlanningScene_Response_success support_surface_id(::mycobot_interfaces::srv::GetPlanningScene_Response::_support_surface_id_type arg)
  {
    msg_.support_surface_id = std::move(arg);
    return Init_GetPlanningScene_Response_success(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Response msg_;
};

class Init_GetPlanningScene_Response_target_object_id
{
public:
  explicit Init_GetPlanningScene_Response_target_object_id(::mycobot_interfaces::srv::GetPlanningScene_Response & msg)
  : msg_(msg)
  {}
  Init_GetPlanningScene_Response_support_surface_id target_object_id(::mycobot_interfaces::srv::GetPlanningScene_Response::_target_object_id_type arg)
  {
    msg_.target_object_id = std::move(arg);
    return Init_GetPlanningScene_Response_support_surface_id(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Response msg_;
};

class Init_GetPlanningScene_Response_rgb_image
{
public:
  explicit Init_GetPlanningScene_Response_rgb_image(::mycobot_interfaces::srv::GetPlanningScene_Response & msg)
  : msg_(msg)
  {}
  Init_GetPlanningScene_Response_target_object_id rgb_image(::mycobot_interfaces::srv::GetPlanningScene_Response::_rgb_image_type arg)
  {
    msg_.rgb_image = std::move(arg);
    return Init_GetPlanningScene_Response_target_object_id(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Response msg_;
};

class Init_GetPlanningScene_Response_full_cloud
{
public:
  explicit Init_GetPlanningScene_Response_full_cloud(::mycobot_interfaces::srv::GetPlanningScene_Response & msg)
  : msg_(msg)
  {}
  Init_GetPlanningScene_Response_rgb_image full_cloud(::mycobot_interfaces::srv::GetPlanningScene_Response::_full_cloud_type arg)
  {
    msg_.full_cloud = std::move(arg);
    return Init_GetPlanningScene_Response_rgb_image(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Response msg_;
};

class Init_GetPlanningScene_Response_scene_world
{
public:
  Init_GetPlanningScene_Response_scene_world()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlanningScene_Response_full_cloud scene_world(::mycobot_interfaces::srv::GetPlanningScene_Response::_scene_world_type arg)
  {
    msg_.scene_world = std::move(arg);
    return Init_GetPlanningScene_Response_full_cloud(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_interfaces::srv::GetPlanningScene_Response>()
{
  return mycobot_interfaces::srv::builder::Init_GetPlanningScene_Response_scene_world();
}

}  // namespace mycobot_interfaces


namespace mycobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPlanningScene_Event_response
{
public:
  explicit Init_GetPlanningScene_Event_response(::mycobot_interfaces::srv::GetPlanningScene_Event & msg)
  : msg_(msg)
  {}
  ::mycobot_interfaces::srv::GetPlanningScene_Event response(::mycobot_interfaces::srv::GetPlanningScene_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Event msg_;
};

class Init_GetPlanningScene_Event_request
{
public:
  explicit Init_GetPlanningScene_Event_request(::mycobot_interfaces::srv::GetPlanningScene_Event & msg)
  : msg_(msg)
  {}
  Init_GetPlanningScene_Event_response request(::mycobot_interfaces::srv::GetPlanningScene_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPlanningScene_Event_response(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Event msg_;
};

class Init_GetPlanningScene_Event_info
{
public:
  Init_GetPlanningScene_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlanningScene_Event_request info(::mycobot_interfaces::srv::GetPlanningScene_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPlanningScene_Event_request(msg_);
  }

private:
  ::mycobot_interfaces::srv::GetPlanningScene_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_interfaces::srv::GetPlanningScene_Event>()
{
  return mycobot_interfaces::srv::builder::Init_GetPlanningScene_Event_info();
}

}  // namespace mycobot_interfaces

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__BUILDER_HPP_
