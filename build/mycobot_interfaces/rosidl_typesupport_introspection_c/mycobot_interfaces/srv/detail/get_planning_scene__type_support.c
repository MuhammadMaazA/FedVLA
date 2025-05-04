// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mycobot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mycobot_interfaces/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
#include "mycobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mycobot_interfaces/srv/detail/get_planning_scene__functions.h"
#include "mycobot_interfaces/srv/detail/get_planning_scene__struct.h"


// Include directives for member types
// Member `target_shape`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_dimensions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mycobot_interfaces__srv__GetPlanningScene_Request__init(message_memory);
}

void mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_fini_function(void * message_memory)
{
  mycobot_interfaces__srv__GetPlanningScene_Request__fini(message_memory);
}

size_t mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__size_function__GetPlanningScene_Request__target_dimensions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Request__target_dimensions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Request__target_dimensions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__fetch_function__GetPlanningScene_Request__target_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Request__target_dimensions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__assign_function__GetPlanningScene_Request__target_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Request__target_dimensions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__resize_function__GetPlanningScene_Request__target_dimensions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_member_array[2] = {
  {
    "target_shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Request, target_shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Request, target_dimensions),  // bytes offset in struct
    NULL,  // default value
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__size_function__GetPlanningScene_Request__target_dimensions,  // size() function pointer
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Request__target_dimensions,  // get_const(index) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Request__target_dimensions,  // get(index) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__fetch_function__GetPlanningScene_Request__target_dimensions,  // fetch(index, &value) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__assign_function__GetPlanningScene_Request__target_dimensions,  // assign(index, value) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__resize_function__GetPlanningScene_Request__target_dimensions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_members = {
  "mycobot_interfaces__srv",  // message namespace
  "GetPlanningScene_Request",  // message name
  2,  // number of fields
  sizeof(mycobot_interfaces__srv__GetPlanningScene_Request),
  false,  // has_any_key_member_
  mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_member_array,  // message members
  mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle = {
  0,
  &mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_members,
  get_message_typesupport_handle_function,
  &mycobot_interfaces__srv__GetPlanningScene_Request__get_type_hash,
  &mycobot_interfaces__srv__GetPlanningScene_Request__get_type_description,
  &mycobot_interfaces__srv__GetPlanningScene_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mycobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Request)() {
  if (!mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle.typesupport_identifier) {
    mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mycobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__functions.h"
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__struct.h"


// Include directives for member types
// Member `scene_world`
#include "moveit_msgs/msg/planning_scene_world.h"
// Member `scene_world`
#include "moveit_msgs/msg/detail/planning_scene_world__rosidl_typesupport_introspection_c.h"
// Member `full_cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `full_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `rgb_image`
#include "sensor_msgs/msg/image.h"
// Member `rgb_image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `target_object_id`
// Member `support_surface_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mycobot_interfaces__srv__GetPlanningScene_Response__init(message_memory);
}

void mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_fini_function(void * message_memory)
{
  mycobot_interfaces__srv__GetPlanningScene_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array[6] = {
  {
    "scene_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Response, scene_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "full_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Response, full_cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Response, rgb_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Response, target_object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "support_surface_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Response, support_surface_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_members = {
  "mycobot_interfaces__srv",  // message namespace
  "GetPlanningScene_Response",  // message name
  6,  // number of fields
  sizeof(mycobot_interfaces__srv__GetPlanningScene_Response),
  false,  // has_any_key_member_
  mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array,  // message members
  mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle = {
  0,
  &mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_members,
  get_message_typesupport_handle_function,
  &mycobot_interfaces__srv__GetPlanningScene_Response__get_type_hash,
  &mycobot_interfaces__srv__GetPlanningScene_Response__get_type_description,
  &mycobot_interfaces__srv__GetPlanningScene_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mycobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Response)() {
  mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningSceneWorld)();
  mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle.typesupport_identifier) {
    mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mycobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__functions.h"
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mycobot_interfaces/srv/get_planning_scene.h"
// Member `request`
// Member `response`
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mycobot_interfaces__srv__GetPlanningScene_Event__init(message_memory);
}

void mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_fini_function(void * message_memory)
{
  mycobot_interfaces__srv__GetPlanningScene_Event__fini(message_memory);
}

size_t mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__size_function__GetPlanningScene_Event__request(
  const void * untyped_member)
{
  const mycobot_interfaces__srv__GetPlanningScene_Request__Sequence * member =
    (const mycobot_interfaces__srv__GetPlanningScene_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Event__request(
  const void * untyped_member, size_t index)
{
  const mycobot_interfaces__srv__GetPlanningScene_Request__Sequence * member =
    (const mycobot_interfaces__srv__GetPlanningScene_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Event__request(
  void * untyped_member, size_t index)
{
  mycobot_interfaces__srv__GetPlanningScene_Request__Sequence * member =
    (mycobot_interfaces__srv__GetPlanningScene_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__fetch_function__GetPlanningScene_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mycobot_interfaces__srv__GetPlanningScene_Request * item =
    ((const mycobot_interfaces__srv__GetPlanningScene_Request *)
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Event__request(untyped_member, index));
  mycobot_interfaces__srv__GetPlanningScene_Request * value =
    (mycobot_interfaces__srv__GetPlanningScene_Request *)(untyped_value);
  *value = *item;
}

void mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__assign_function__GetPlanningScene_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mycobot_interfaces__srv__GetPlanningScene_Request * item =
    ((mycobot_interfaces__srv__GetPlanningScene_Request *)
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Event__request(untyped_member, index));
  const mycobot_interfaces__srv__GetPlanningScene_Request * value =
    (const mycobot_interfaces__srv__GetPlanningScene_Request *)(untyped_value);
  *item = *value;
}

bool mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__resize_function__GetPlanningScene_Event__request(
  void * untyped_member, size_t size)
{
  mycobot_interfaces__srv__GetPlanningScene_Request__Sequence * member =
    (mycobot_interfaces__srv__GetPlanningScene_Request__Sequence *)(untyped_member);
  mycobot_interfaces__srv__GetPlanningScene_Request__Sequence__fini(member);
  return mycobot_interfaces__srv__GetPlanningScene_Request__Sequence__init(member, size);
}

size_t mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__size_function__GetPlanningScene_Event__response(
  const void * untyped_member)
{
  const mycobot_interfaces__srv__GetPlanningScene_Response__Sequence * member =
    (const mycobot_interfaces__srv__GetPlanningScene_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Event__response(
  const void * untyped_member, size_t index)
{
  const mycobot_interfaces__srv__GetPlanningScene_Response__Sequence * member =
    (const mycobot_interfaces__srv__GetPlanningScene_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Event__response(
  void * untyped_member, size_t index)
{
  mycobot_interfaces__srv__GetPlanningScene_Response__Sequence * member =
    (mycobot_interfaces__srv__GetPlanningScene_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__fetch_function__GetPlanningScene_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mycobot_interfaces__srv__GetPlanningScene_Response * item =
    ((const mycobot_interfaces__srv__GetPlanningScene_Response *)
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Event__response(untyped_member, index));
  mycobot_interfaces__srv__GetPlanningScene_Response * value =
    (mycobot_interfaces__srv__GetPlanningScene_Response *)(untyped_value);
  *value = *item;
}

void mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__assign_function__GetPlanningScene_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mycobot_interfaces__srv__GetPlanningScene_Response * item =
    ((mycobot_interfaces__srv__GetPlanningScene_Response *)
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Event__response(untyped_member, index));
  const mycobot_interfaces__srv__GetPlanningScene_Response * value =
    (const mycobot_interfaces__srv__GetPlanningScene_Response *)(untyped_value);
  *item = *value;
}

bool mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__resize_function__GetPlanningScene_Event__response(
  void * untyped_member, size_t size)
{
  mycobot_interfaces__srv__GetPlanningScene_Response__Sequence * member =
    (mycobot_interfaces__srv__GetPlanningScene_Response__Sequence *)(untyped_member);
  mycobot_interfaces__srv__GetPlanningScene_Response__Sequence__fini(member);
  return mycobot_interfaces__srv__GetPlanningScene_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Event, request),  // bytes offset in struct
    NULL,  // default value
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__size_function__GetPlanningScene_Event__request,  // size() function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Event__request,  // get_const(index) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Event__request,  // get(index) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__fetch_function__GetPlanningScene_Event__request,  // fetch(index, &value) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__assign_function__GetPlanningScene_Event__request,  // assign(index, value) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__resize_function__GetPlanningScene_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mycobot_interfaces__srv__GetPlanningScene_Event, response),  // bytes offset in struct
    NULL,  // default value
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__size_function__GetPlanningScene_Event__response,  // size() function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_const_function__GetPlanningScene_Event__response,  // get_const(index) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__get_function__GetPlanningScene_Event__response,  // get(index) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__fetch_function__GetPlanningScene_Event__response,  // fetch(index, &value) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__assign_function__GetPlanningScene_Event__response,  // assign(index, value) function pointer
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__resize_function__GetPlanningScene_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_members = {
  "mycobot_interfaces__srv",  // message namespace
  "GetPlanningScene_Event",  // message name
  3,  // number of fields
  sizeof(mycobot_interfaces__srv__GetPlanningScene_Event),
  false,  // has_any_key_member_
  mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_member_array,  // message members
  mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_type_support_handle = {
  0,
  &mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_members,
  get_message_typesupport_handle_function,
  &mycobot_interfaces__srv__GetPlanningScene_Event__get_type_hash,
  &mycobot_interfaces__srv__GetPlanningScene_Event__get_type_description,
  &mycobot_interfaces__srv__GetPlanningScene_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mycobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Event)() {
  mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Request)();
  mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Response)();
  if (!mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_type_support_handle.typesupport_identifier) {
    mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mycobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mycobot_interfaces/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_members = {
  "mycobot_interfaces__srv",  // service namespace
  "GetPlanningScene",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle,
  NULL,  // response message
  // mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle
  NULL  // event_message
  // mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle
};


static rosidl_service_type_support_t mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle = {
  0,
  &mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_members,
  get_service_typesupport_handle_function,
  &mycobot_interfaces__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle,
  &mycobot_interfaces__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle,
  &mycobot_interfaces__srv__GetPlanningScene_Event__rosidl_typesupport_introspection_c__GetPlanningScene_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mycobot_interfaces,
    srv,
    GetPlanningScene
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mycobot_interfaces,
    srv,
    GetPlanningScene
  ),
  &mycobot_interfaces__srv__GetPlanningScene__get_type_hash,
  &mycobot_interfaces__srv__GetPlanningScene__get_type_description,
  &mycobot_interfaces__srv__GetPlanningScene__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mycobot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene)(void) {
  if (!mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle.typesupport_identifier) {
    mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, srv, GetPlanningScene_Event)()->data;
  }

  return &mycobot_interfaces__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle;
}
