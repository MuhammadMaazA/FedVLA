// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_task_constructor_msgs:msg/StageStatistics.idl
// generated code does not contain a copyright notice

#include "moveit_task_constructor_msgs/msg/detail/stage_statistics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_task_constructor_msgs
const rosidl_type_hash_t *
moveit_task_constructor_msgs__msg__StageStatistics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x5f, 0x09, 0xcc, 0x99, 0xa3, 0x92, 0xda,
      0x9d, 0xae, 0x32, 0xbd, 0x34, 0xf2, 0x8b, 0x80,
      0xc1, 0x62, 0x86, 0x3e, 0xb9, 0x30, 0xc2, 0xec,
      0x0f, 0x60, 0xd2, 0x2c, 0x2e, 0xba, 0xcc, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char moveit_task_constructor_msgs__msg__StageStatistics__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/StageStatistics";

// Define type names, field names, and default values
static char moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__id[] = "id";
static char moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__solved[] = "solved";
static char moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__failed[] = "failed";
static char moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__num_failed[] = "num_failed";
static char moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__total_compute_time[] = "total_compute_time";

static rosidl_runtime_c__type_description__Field moveit_task_constructor_msgs__msg__StageStatistics__FIELDS[] = {
  {
    {moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__solved, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__failed, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__num_failed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__StageStatistics__FIELD_NAME__total_compute_time, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_task_constructor_msgs__msg__StageStatistics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_task_constructor_msgs__msg__StageStatistics__TYPE_NAME, 48, 48},
      {moveit_task_constructor_msgs__msg__StageStatistics__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# dynamically changing information for a stage\n"
  "\n"
  "# unique id within task\n"
  "uint32 id\n"
  "\n"
  "# successful solution IDs of this stage, sorted by increasing cost\n"
  "uint32[] solved\n"
  "\n"
  "# (optional) failed solution IDs of this stage\n"
  "uint32[] failed\n"
  "# number of failed solutions (if failed is empty)\n"
  "uint32   num_failed\n"
  "# total computation time in seconds\n"
  "float64 total_compute_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_task_constructor_msgs__msg__StageStatistics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_task_constructor_msgs__msg__StageStatistics__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 363, 363},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_task_constructor_msgs__msg__StageStatistics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_task_constructor_msgs__msg__StageStatistics__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
