// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_task_constructor_msgs:msg/Property.idl
// generated code does not contain a copyright notice

#include "moveit_task_constructor_msgs/msg/detail/property__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_task_constructor_msgs
const rosidl_type_hash_t *
moveit_task_constructor_msgs__msg__Property__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x16, 0xd4, 0xc1, 0x53, 0x53, 0x89, 0xaa,
      0x9e, 0xdf, 0xc1, 0x25, 0x50, 0x51, 0xba, 0x89,
      0xa4, 0x1c, 0xa2, 0x20, 0x5d, 0xa0, 0x84, 0xb3,
      0xf8, 0xb6, 0xac, 0xf0, 0x82, 0x8c, 0x4b, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char moveit_task_constructor_msgs__msg__Property__TYPE_NAME[] = "moveit_task_constructor_msgs/msg/Property";

// Define type names, field names, and default values
static char moveit_task_constructor_msgs__msg__Property__FIELD_NAME__name[] = "name";
static char moveit_task_constructor_msgs__msg__Property__FIELD_NAME__description[] = "description";
static char moveit_task_constructor_msgs__msg__Property__FIELD_NAME__type[] = "type";
static char moveit_task_constructor_msgs__msg__Property__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field moveit_task_constructor_msgs__msg__Property__FIELDS[] = {
  {
    {moveit_task_constructor_msgs__msg__Property__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__Property__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__Property__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_task_constructor_msgs__msg__Property__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_task_constructor_msgs__msg__Property__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_task_constructor_msgs__msg__Property__TYPE_NAME, 41, 41},
      {moveit_task_constructor_msgs__msg__Property__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string description\n"
  "string type\n"
  "string value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_task_constructor_msgs__msg__Property__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_task_constructor_msgs__msg__Property__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_task_constructor_msgs__msg__Property__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_task_constructor_msgs__msg__Property__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
