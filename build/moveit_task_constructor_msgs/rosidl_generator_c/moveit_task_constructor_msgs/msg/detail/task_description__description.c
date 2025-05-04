// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_task_constructor_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#include "moveit_task_constructor_msgs/msg/detail/task_description__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_task_constructor_msgs
const rosidl_type_hash_t *
moveit_task_constructor_msgs__msg__TaskDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x9b, 0x13, 0xbe, 0x11, 0x93, 0x29, 0xf9,
      0xfc, 0xa3, 0x98, 0xd8, 0x8e, 0xfa, 0xc6, 0x2d,
      0x44, 0x83, 0xe6, 0xdd, 0x1a, 0x9c, 0x3c, 0x36,
      0xab, 0x4a, 0x6c, 0xe6, 0xb9, 0xcf, 0xab, 0x20,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "moveit_task_constructor_msgs/msg/detail/property__functions.h"
#include "moveit_task_constructor_msgs/msg/detail/stage_description__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t moveit_task_constructor_msgs__msg__Property__EXPECTED_HASH = {1, {
    0xea, 0x16, 0xd4, 0xc1, 0x53, 0x53, 0x89, 0xaa,
    0x9e, 0xdf, 0xc1, 0x25, 0x50, 0x51, 0xba, 0x89,
    0xa4, 0x1c, 0xa2, 0x20, 0x5d, 0xa0, 0x84, 0xb3,
    0xf8, 0xb6, 0xac, 0xf0, 0x82, 0x8c, 0x4b, 0x91,
  }};
static const rosidl_type_hash_t moveit_task_constructor_msgs__msg__StageDescription__EXPECTED_HASH = {1, {
    0x12, 0x30, 0x64, 0xfe, 0x42, 0x3e, 0x70, 0x5e,
    0x8e, 0xed, 0xaa, 0x17, 0xdb, 0xbb, 0xb8, 0xd8,
    0xdd, 0xdb, 0x6b, 0xf4, 0xfc, 0x84, 0xd3, 0x6a,
    0x42, 0x1e, 0x84, 0xb6, 0xd5, 0x45, 0x6c, 0xb6,
  }};
#endif

static char moveit_task_constructor_msgs__msg__TaskDescription__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/TaskDescription";
static char moveit_task_constructor_msgs__msg__Property__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/Property";
static char moveit_task_constructor_msgs__msg__StageDescription__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/StageDescription";

// Define type names, field names, and default values
static char moveit_task_constructor_msgs__msg__TaskDescription__FIELD_NAME__task_id[] = "task_id";
static char moveit_task_constructor_msgs__msg__TaskDescription__FIELD_NAME__stages[] = "stages";

static rosidl_runtime_c__type_description__Field moveit_task_constructor_msgs__msg__TaskDescription__FIELDS[] = {
  {
    {moveit_task_constructor_msgs__msg__TaskDescription__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__TaskDescription__FIELD_NAME__stages, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {moveit_task_constructor_msgs__msg__StageDescription__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_task_constructor_msgs__msg__TaskDescription__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {moveit_task_constructor_msgs__msg__Property__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__StageDescription__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_task_constructor_msgs__msg__TaskDescription__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_task_constructor_msgs__msg__TaskDescription__TYPE_NAME, 48, 48},
      {moveit_task_constructor_msgs__msg__TaskDescription__FIELDS, 2, 2},
    },
    {moveit_task_constructor_msgs__msg__TaskDescription__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&moveit_task_constructor_msgs__msg__Property__EXPECTED_HASH, moveit_task_constructor_msgs__msg__Property__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = moveit_task_constructor_msgs__msg__Property__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&moveit_task_constructor_msgs__msg__StageDescription__EXPECTED_HASH, moveit_task_constructor_msgs__msg__StageDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = moveit_task_constructor_msgs__msg__StageDescription__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# unique id of this task\n"
  "string task_id\n"
  "\n"
  "# list of all stages, including the task stage itself\n"
  "StageDescription[] stages";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_task_constructor_msgs__msg__TaskDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_task_constructor_msgs__msg__TaskDescription__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 121, 121},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_task_constructor_msgs__msg__TaskDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_task_constructor_msgs__msg__TaskDescription__get_individual_type_description_source(NULL),
    sources[1] = *moveit_task_constructor_msgs__msg__Property__get_individual_type_description_source(NULL);
    sources[2] = *moveit_task_constructor_msgs__msg__StageDescription__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
