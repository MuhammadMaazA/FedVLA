// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mycobot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mycobot_interfaces/srv/get_planning_scene.h"


#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__STRUCT_H_
#define MYCOBOT_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_shape'
#include "rosidl_runtime_c/string.h"
// Member 'target_dimensions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetPlanningScene in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__GetPlanningScene_Request
{
  /// e.g., "box", "cylinder"
  rosidl_runtime_c__String target_shape;
  /// Approximate dimensions for identification
  rosidl_runtime_c__double__Sequence target_dimensions;
} mycobot_interfaces__srv__GetPlanningScene_Request;

// Struct for a sequence of mycobot_interfaces__srv__GetPlanningScene_Request.
typedef struct mycobot_interfaces__srv__GetPlanningScene_Request__Sequence
{
  mycobot_interfaces__srv__GetPlanningScene_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__GetPlanningScene_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'scene_world'
#include "moveit_msgs/msg/detail/planning_scene_world__struct.h"
// Member 'full_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'rgb_image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'target_object_id'
// Member 'support_surface_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPlanningScene in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__GetPlanningScene_Response
{
  /// Response
  /// Contains CollisionObjects for all detected objects
  moveit_msgs__msg__PlanningSceneWorld scene_world;
  /// Full scene point cloud
  sensor_msgs__msg__PointCloud2 full_cloud;
  /// RGB image of the scene
  sensor_msgs__msg__Image rgb_image;
  /// ID of the target object in the PlanningSceneWorld
  rosidl_runtime_c__String target_object_id;
  /// ID of the support surface in the PlanningSceneWorld
  rosidl_runtime_c__String support_surface_id;
  /// Indicates if the operation was successful
  bool success;
} mycobot_interfaces__srv__GetPlanningScene_Response;

// Struct for a sequence of mycobot_interfaces__srv__GetPlanningScene_Response.
typedef struct mycobot_interfaces__srv__GetPlanningScene_Response__Sequence
{
  mycobot_interfaces__srv__GetPlanningScene_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__GetPlanningScene_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mycobot_interfaces__srv__GetPlanningScene_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mycobot_interfaces__srv__GetPlanningScene_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPlanningScene in the package mycobot_interfaces.
typedef struct mycobot_interfaces__srv__GetPlanningScene_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mycobot_interfaces__srv__GetPlanningScene_Request__Sequence request;
  mycobot_interfaces__srv__GetPlanningScene_Response__Sequence response;
} mycobot_interfaces__srv__GetPlanningScene_Event;

// Struct for a sequence of mycobot_interfaces__srv__GetPlanningScene_Event.
typedef struct mycobot_interfaces__srv__GetPlanningScene_Event__Sequence
{
  mycobot_interfaces__srv__GetPlanningScene_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_interfaces__srv__GetPlanningScene_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__STRUCT_H_
