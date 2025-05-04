// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_task_constructor_msgs:msg/TaskStatistics.idl
// generated code does not contain a copyright notice

#include "moveit_task_constructor_msgs/msg/detail/task_statistics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_task_constructor_msgs
const rosidl_type_hash_t *
moveit_task_constructor_msgs__msg__TaskStatistics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x03, 0x5a, 0x41, 0x5c, 0x0f, 0x86, 0x80,
      0x3e, 0x80, 0x7a, 0x19, 0x71, 0xe5, 0xfe, 0x7d,
      0xd8, 0x04, 0x8b, 0x8d, 0x0d, 0x94, 0x1d, 0x60,
      0xea, 0x3b, 0xf9, 0x4a, 0xa9, 0x65, 0xfe, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "moveit_task_constructor_msgs/msg/detail/stage_statistics__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t moveit_task_constructor_msgs__msg__StageStatistics__EXPECTED_HASH = {1, {
    0x7d, 0x5f, 0x09, 0xcc, 0x99, 0xa3, 0x92, 0xda,
    0x9d, 0xae, 0x32, 0xbd, 0x34, 0xf2, 0x8b, 0x80,
    0xc1, 0x62, 0x86, 0x3e, 0xb9, 0x30, 0xc2, 0xec,
    0x0f, 0x60, 0xd2, 0x2c, 0x2e, 0xba, 0xcc, 0x8c,
  }};
#endif

static char moveit_task_constructor_msgs__msg__TaskStatistics__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/TaskStatistics";
static char moveit_task_constructor_msgs__msg__StageStatistics__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/StageStatistics";

// Define type names, field names, and default values
static char moveit_task_constructor_msgs__msg__TaskStatistics__FIELD_NAME__task_id[] = "task_id";
static char moveit_task_constructor_msgs__msg__TaskStatistics__FIELD_NAME__stages[] = "stages";

static rosidl_runtime_c__type_description__Field moveit_task_constructor_msgs__msg__TaskStatistics__FIELDS[] = {
  {
    {moveit_task_constructor_msgs__msg__TaskStatistics__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__TaskStatistics__FIELD_NAME__stages, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {moveit_task_constructor_msgs__msg__StageStatistics__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_task_constructor_msgs__msg__TaskStatistics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {moveit_task_constructor_msgs__msg__StageStatistics__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_task_constructor_msgs__msg__TaskStatistics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_task_constructor_msgs__msg__TaskStatistics__TYPE_NAME, 47, 47},
      {moveit_task_constructor_msgs__msg__TaskStatistics__FIELDS, 2, 2},
    },
    {moveit_task_constructor_msgs__msg__TaskStatistics__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&moveit_task_constructor_msgs__msg__StageStatistics__EXPECTED_HASH, moveit_task_constructor_msgs__msg__StageStatistics__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = moveit_task_constructor_msgs__msg__StageStatistics__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# unique id of generating task\n"
  "string task_id\n"
  "\n"
  "# list of all stages, including the task stage itself\n"
  "StageStatistics[] stages";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_task_constructor_msgs__msg__TaskStatistics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_task_constructor_msgs__msg__TaskStatistics__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 126, 126},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_task_constructor_msgs__msg__TaskStatistics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_task_constructor_msgs__msg__TaskStatistics__get_individual_type_description_source(NULL),
    sources[1] = *moveit_task_constructor_msgs__msg__StageStatistics__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
