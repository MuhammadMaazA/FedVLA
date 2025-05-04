// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_task_constructor_msgs:msg/TrajectoryExecutionInfo.idl
// generated code does not contain a copyright notice

#include "moveit_task_constructor_msgs/msg/detail/trajectory_execution_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_task_constructor_msgs
const rosidl_type_hash_t *
moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0xc8, 0x25, 0x5c, 0xd2, 0x11, 0x45, 0x6b,
      0xe6, 0xc8, 0xeb, 0x3a, 0x96, 0xeb, 0x61, 0x7a,
      0x86, 0xe6, 0xc3, 0x90, 0x23, 0xd7, 0x5e, 0x6e,
      0xb9, 0x2c, 0x9e, 0x91, 0xee, 0x06, 0x2a, 0xeb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/TrajectoryExecutionInfo";

// Define type names, field names, and default values
static char moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__FIELD_NAME__controller_names[] = "controller_names";

static rosidl_runtime_c__type_description__Field moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__FIELDS[] = {
  {
    {moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__FIELD_NAME__controller_names, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__TYPE_NAME, 56, 56},
      {moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# List of controllers to use when executing the trajectory\n"
  "string[] controller_names";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__TYPE_NAME, 56, 56},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_task_constructor_msgs__msg__TrajectoryExecutionInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
