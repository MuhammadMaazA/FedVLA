// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_task_constructor_msgs:msg/SubTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_task_constructor_msgs/msg/detail/sub_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_task_constructor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_task_constructor_msgs/msg/detail/sub_trajectory__struct.h"
#include "moveit_task_constructor_msgs/msg/detail/sub_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/planning_scene__functions.h"  // scene_diff
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"  // trajectory
#include "moveit_task_constructor_msgs/msg/detail/solution_info__functions.h"  // info
#include "moveit_task_constructor_msgs/msg/detail/trajectory_execution_info__functions.h"  // execution_info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_serialize_moveit_msgs__msg__PlanningScene(
  const moveit_msgs__msg__PlanningScene * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_deserialize_moveit_msgs__msg__PlanningScene(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs__msg__PlanningScene * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t get_serialized_size_moveit_msgs__msg__PlanningScene(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t max_serialized_size_moveit_msgs__msg__PlanningScene(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_serialize_key_moveit_msgs__msg__PlanningScene(
  const moveit_msgs__msg__PlanningScene * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t get_serialized_size_key_moveit_msgs__msg__PlanningScene(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t max_serialized_size_key_moveit_msgs__msg__PlanningScene(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_serialize_moveit_msgs__msg__RobotTrajectory(
  const moveit_msgs__msg__RobotTrajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_deserialize_moveit_msgs__msg__RobotTrajectory(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs__msg__RobotTrajectory * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t get_serialized_size_moveit_msgs__msg__RobotTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t max_serialized_size_moveit_msgs__msg__RobotTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_serialize_key_moveit_msgs__msg__RobotTrajectory(
  const moveit_msgs__msg__RobotTrajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t get_serialized_size_key_moveit_msgs__msg__RobotTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t max_serialized_size_key_moveit_msgs__msg__RobotTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotTrajectory)();

bool cdr_serialize_moveit_task_constructor_msgs__msg__SolutionInfo(
  const moveit_task_constructor_msgs__msg__SolutionInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_moveit_task_constructor_msgs__msg__SolutionInfo(
  eprosima::fastcdr::Cdr & cdr,
  moveit_task_constructor_msgs__msg__SolutionInfo * ros_message);

size_t get_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_moveit_task_constructor_msgs__msg__SolutionInfo(
  const moveit_task_constructor_msgs__msg__SolutionInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_moveit_task_constructor_msgs__msg__SolutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_moveit_task_constructor_msgs__msg__SolutionInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, msg, SolutionInfo)();

bool cdr_serialize_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  const moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  eprosima::fastcdr::Cdr & cdr,
  moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo * ros_message);

size_t get_serialized_size_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  const moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, msg, TrajectoryExecutionInfo)();


using _SubTrajectory__ros_msg_type = moveit_task_constructor_msgs__msg__SubTrajectory;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_serialize_moveit_task_constructor_msgs__msg__SubTrajectory(
  const moveit_task_constructor_msgs__msg__SubTrajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_moveit_task_constructor_msgs__msg__SolutionInfo(
      &ros_message->info, cdr);
  }

  // Field name: execution_info
  {
    cdr_serialize_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
      &ros_message->execution_info, cdr);
  }

  // Field name: trajectory
  {
    cdr_serialize_moveit_msgs__msg__RobotTrajectory(
      &ros_message->trajectory, cdr);
  }

  // Field name: scene_diff
  {
    cdr_serialize_moveit_msgs__msg__PlanningScene(
      &ros_message->scene_diff, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_deserialize_moveit_task_constructor_msgs__msg__SubTrajectory(
  eprosima::fastcdr::Cdr & cdr,
  moveit_task_constructor_msgs__msg__SubTrajectory * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_moveit_task_constructor_msgs__msg__SolutionInfo(cdr, &ros_message->info);
  }

  // Field name: execution_info
  {
    cdr_deserialize_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(cdr, &ros_message->execution_info);
  }

  // Field name: trajectory
  {
    cdr_deserialize_moveit_msgs__msg__RobotTrajectory(cdr, &ros_message->trajectory);
  }

  // Field name: scene_diff
  {
    cdr_deserialize_moveit_msgs__msg__PlanningScene(cdr, &ros_message->scene_diff);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t get_serialized_size_moveit_task_constructor_msgs__msg__SubTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SubTrajectory__ros_msg_type * ros_message = static_cast<const _SubTrajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
    &(ros_message->info), current_alignment);

  // Field name: execution_info
  current_alignment += get_serialized_size_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
    &(ros_message->execution_info), current_alignment);

  // Field name: trajectory
  current_alignment += get_serialized_size_moveit_msgs__msg__RobotTrajectory(
    &(ros_message->trajectory), current_alignment);

  // Field name: scene_diff
  current_alignment += get_serialized_size_moveit_msgs__msg__PlanningScene(
    &(ros_message->scene_diff), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t max_serialized_size_moveit_task_constructor_msgs__msg__SubTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: execution_info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: trajectory
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__RobotTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scene_diff
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__PlanningScene(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_task_constructor_msgs__msg__SubTrajectory;
    is_plain =
      (
      offsetof(DataType, scene_diff) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_serialize_key_moveit_task_constructor_msgs__msg__SubTrajectory(
  const moveit_task_constructor_msgs__msg__SubTrajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_moveit_task_constructor_msgs__msg__SolutionInfo(
      &ros_message->info, cdr);
  }

  // Field name: execution_info
  {
    cdr_serialize_key_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
      &ros_message->execution_info, cdr);
  }

  // Field name: trajectory
  {
    cdr_serialize_key_moveit_msgs__msg__RobotTrajectory(
      &ros_message->trajectory, cdr);
  }

  // Field name: scene_diff
  {
    cdr_serialize_key_moveit_msgs__msg__PlanningScene(
      &ros_message->scene_diff, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t get_serialized_size_key_moveit_task_constructor_msgs__msg__SubTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SubTrajectory__ros_msg_type * ros_message = static_cast<const _SubTrajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_moveit_task_constructor_msgs__msg__SolutionInfo(
    &(ros_message->info), current_alignment);

  // Field name: execution_info
  current_alignment += get_serialized_size_key_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
    &(ros_message->execution_info), current_alignment);

  // Field name: trajectory
  current_alignment += get_serialized_size_key_moveit_msgs__msg__RobotTrajectory(
    &(ros_message->trajectory), current_alignment);

  // Field name: scene_diff
  current_alignment += get_serialized_size_key_moveit_msgs__msg__PlanningScene(
    &(ros_message->scene_diff), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t max_serialized_size_key_moveit_task_constructor_msgs__msg__SubTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_moveit_task_constructor_msgs__msg__SolutionInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: execution_info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: trajectory
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_moveit_msgs__msg__RobotTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scene_diff
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_moveit_msgs__msg__PlanningScene(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_task_constructor_msgs__msg__SubTrajectory;
    is_plain =
      (
      offsetof(DataType, scene_diff) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SubTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const moveit_task_constructor_msgs__msg__SubTrajectory * ros_message = static_cast<const moveit_task_constructor_msgs__msg__SubTrajectory *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_moveit_task_constructor_msgs__msg__SubTrajectory(ros_message, cdr);
}

static bool _SubTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  moveit_task_constructor_msgs__msg__SubTrajectory * ros_message = static_cast<moveit_task_constructor_msgs__msg__SubTrajectory *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_moveit_task_constructor_msgs__msg__SubTrajectory(cdr, ros_message);
}

static uint32_t _SubTrajectory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_task_constructor_msgs__msg__SubTrajectory(
      untyped_ros_message, 0));
}

static size_t _SubTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_task_constructor_msgs__msg__SubTrajectory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SubTrajectory = {
  "moveit_task_constructor_msgs::msg",
  "SubTrajectory",
  _SubTrajectory__cdr_serialize,
  _SubTrajectory__cdr_deserialize,
  _SubTrajectory__get_serialized_size,
  _SubTrajectory__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SubTrajectory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SubTrajectory,
  get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__msg__SubTrajectory__get_type_hash,
  &moveit_task_constructor_msgs__msg__SubTrajectory__get_type_description,
  &moveit_task_constructor_msgs__msg__SubTrajectory__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, msg, SubTrajectory)() {
  return &_SubTrajectory__type_support;
}

#if defined(__cplusplus)
}
#endif
