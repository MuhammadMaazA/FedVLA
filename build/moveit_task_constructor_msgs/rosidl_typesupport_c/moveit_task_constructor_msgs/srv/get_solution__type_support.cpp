// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_task_constructor_msgs:srv/GetSolution.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_task_constructor_msgs/srv/detail/get_solution__struct.h"
#include "moveit_task_constructor_msgs/srv/detail/get_solution__type_support.h"
#include "moveit_task_constructor_msgs/srv/detail/get_solution__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_task_constructor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetSolution_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSolution_Request_type_support_ids_t;

static const _GetSolution_Request_type_support_ids_t _GetSolution_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSolution_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSolution_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSolution_Request_type_support_symbol_names_t _GetSolution_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, srv, GetSolution_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_task_constructor_msgs, srv, GetSolution_Request)),
  }
};

typedef struct _GetSolution_Request_type_support_data_t
{
  void * data[2];
} _GetSolution_Request_type_support_data_t;

static _GetSolution_Request_type_support_data_t _GetSolution_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSolution_Request_message_typesupport_map = {
  2,
  "moveit_task_constructor_msgs",
  &_GetSolution_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetSolution_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetSolution_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSolution_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSolution_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__srv__GetSolution_Request__get_type_hash,
  &moveit_task_constructor_msgs__srv__GetSolution_Request__get_type_description,
  &moveit_task_constructor_msgs__srv__GetSolution_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_task_constructor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_task_constructor_msgs, srv, GetSolution_Request)() {
  return &::moveit_task_constructor_msgs::srv::rosidl_typesupport_c::GetSolution_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__struct.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__type_support.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_task_constructor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetSolution_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSolution_Response_type_support_ids_t;

static const _GetSolution_Response_type_support_ids_t _GetSolution_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSolution_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSolution_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSolution_Response_type_support_symbol_names_t _GetSolution_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, srv, GetSolution_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_task_constructor_msgs, srv, GetSolution_Response)),
  }
};

typedef struct _GetSolution_Response_type_support_data_t
{
  void * data[2];
} _GetSolution_Response_type_support_data_t;

static _GetSolution_Response_type_support_data_t _GetSolution_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSolution_Response_message_typesupport_map = {
  2,
  "moveit_task_constructor_msgs",
  &_GetSolution_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetSolution_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetSolution_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSolution_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSolution_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__srv__GetSolution_Response__get_type_hash,
  &moveit_task_constructor_msgs__srv__GetSolution_Response__get_type_description,
  &moveit_task_constructor_msgs__srv__GetSolution_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_task_constructor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_task_constructor_msgs, srv, GetSolution_Response)() {
  return &::moveit_task_constructor_msgs::srv::rosidl_typesupport_c::GetSolution_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__struct.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__type_support.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_task_constructor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetSolution_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSolution_Event_type_support_ids_t;

static const _GetSolution_Event_type_support_ids_t _GetSolution_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSolution_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSolution_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSolution_Event_type_support_symbol_names_t _GetSolution_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, srv, GetSolution_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_task_constructor_msgs, srv, GetSolution_Event)),
  }
};

typedef struct _GetSolution_Event_type_support_data_t
{
  void * data[2];
} _GetSolution_Event_type_support_data_t;

static _GetSolution_Event_type_support_data_t _GetSolution_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSolution_Event_message_typesupport_map = {
  2,
  "moveit_task_constructor_msgs",
  &_GetSolution_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetSolution_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetSolution_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSolution_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSolution_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__srv__GetSolution_Event__get_type_hash,
  &moveit_task_constructor_msgs__srv__GetSolution_Event__get_type_description,
  &moveit_task_constructor_msgs__srv__GetSolution_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_task_constructor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_task_constructor_msgs, srv, GetSolution_Event)() {
  return &::moveit_task_constructor_msgs::srv::rosidl_typesupport_c::GetSolution_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_task_constructor_msgs/srv/detail/get_solution__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace moveit_task_constructor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetSolution_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSolution_type_support_ids_t;

static const _GetSolution_type_support_ids_t _GetSolution_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSolution_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSolution_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSolution_type_support_symbol_names_t _GetSolution_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, srv, GetSolution)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_task_constructor_msgs, srv, GetSolution)),
  }
};

typedef struct _GetSolution_type_support_data_t
{
  void * data[2];
} _GetSolution_type_support_data_t;

static _GetSolution_type_support_data_t _GetSolution_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSolution_service_typesupport_map = {
  2,
  "moveit_task_constructor_msgs",
  &_GetSolution_service_typesupport_ids.typesupport_identifier[0],
  &_GetSolution_service_typesupport_symbol_names.symbol_name[0],
  &_GetSolution_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetSolution_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSolution_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetSolution_Request_message_type_support_handle,
  &GetSolution_Response_message_type_support_handle,
  &GetSolution_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_task_constructor_msgs,
    srv,
    GetSolution
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_task_constructor_msgs,
    srv,
    GetSolution
  ),
  &moveit_task_constructor_msgs__srv__GetSolution__get_type_hash,
  &moveit_task_constructor_msgs__srv__GetSolution__get_type_description,
  &moveit_task_constructor_msgs__srv__GetSolution__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace moveit_task_constructor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_task_constructor_msgs, srv, GetSolution)() {
  return &::moveit_task_constructor_msgs::srv::rosidl_typesupport_c::GetSolution_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
