// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_task_constructor_msgs:msg/SolutionInfo.idl
// generated code does not contain a copyright notice
#include "moveit_task_constructor_msgs/msg/detail/solution_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_task_constructor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_task_constructor_msgs/msg/detail/solution_info__struct.h"
#include "moveit_task_constructor_msgs/msg/detail/solution_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // comment, planner_id
#include "rosidl_runtime_c/string_functions.h"  // comment, planner_id
#include "visualization_msgs/msg/detail/marker__functions.h"  // markers

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_serialize_visualization_msgs__msg__Marker(
  const visualization_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_deserialize_visualization_msgs__msg__Marker(
  eprosima::fastcdr::Cdr & cdr,
  visualization_msgs__msg__Marker * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t get_serialized_size_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t max_serialized_size_visualization_msgs__msg__Marker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
bool cdr_serialize_key_visualization_msgs__msg__Marker(
  const visualization_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t get_serialized_size_key_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
size_t max_serialized_size_key_visualization_msgs__msg__Marker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_task_constructor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, Marker)();


using _SolutionInfo__ros_msg_type = moveit_task_constructor_msgs__msg__SolutionInfo;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_serialize_moveit_task_constructor_msgs__msg__SolutionInfo(
  const moveit_task_constructor_msgs__msg__SolutionInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: cost
  {
    cdr << ros_message->cost;
  }

  // Field name: comment
  {
    const rosidl_runtime_c__String * str = &ros_message->comment;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stage_id
  {
    cdr << ros_message->stage_id;
  }

  // Field name: planner_id
  {
    const rosidl_runtime_c__String * str = &ros_message->planner_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: markers
  {
    size_t size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_visualization_msgs__msg__Marker(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_deserialize_moveit_task_constructor_msgs__msg__SolutionInfo(
  eprosima::fastcdr::Cdr & cdr,
  moveit_task_constructor_msgs__msg__SolutionInfo * ros_message)
{
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: cost
  {
    cdr >> ros_message->cost;
  }

  // Field name: comment
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->comment.data) {
      rosidl_runtime_c__String__init(&ros_message->comment);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->comment,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'comment'\n");
      return false;
    }
  }

  // Field name: stage_id
  {
    cdr >> ros_message->stage_id;
  }

  // Field name: planner_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->planner_id.data) {
      rosidl_runtime_c__String__init(&ros_message->planner_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->planner_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'planner_id'\n");
      return false;
    }
  }

  // Field name: markers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->markers.data) {
      visualization_msgs__msg__Marker__Sequence__fini(&ros_message->markers);
    }
    if (!visualization_msgs__msg__Marker__Sequence__init(&ros_message->markers, size)) {
      fprintf(stderr, "failed to create array for field 'markers'");
      return false;
    }
    auto array_ptr = ros_message->markers.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_visualization_msgs__msg__Marker(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t get_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolutionInfo__ros_msg_type * ros_message = static_cast<const _SolutionInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cost
  {
    size_t item_size = sizeof(ros_message->cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: comment
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->comment.size + 1);

  // Field name: stage_id
  {
    size_t item_size = sizeof(ros_message->stage_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planner_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planner_id.size + 1);

  // Field name: markers
  {
    size_t array_size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_visualization_msgs__msg__Marker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t max_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cost
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: comment
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: stage_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: planner_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: markers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__Marker(
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
    using DataType = moveit_task_constructor_msgs__msg__SolutionInfo;
    is_plain =
      (
      offsetof(DataType, markers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_serialize_key_moveit_task_constructor_msgs__msg__SolutionInfo(
  const moveit_task_constructor_msgs__msg__SolutionInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: cost
  {
    cdr << ros_message->cost;
  }

  // Field name: comment
  {
    const rosidl_runtime_c__String * str = &ros_message->comment;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stage_id
  {
    cdr << ros_message->stage_id;
  }

  // Field name: planner_id
  {
    const rosidl_runtime_c__String * str = &ros_message->planner_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: markers
  {
    size_t size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_visualization_msgs__msg__Marker(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t get_serialized_size_key_moveit_task_constructor_msgs__msg__SolutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolutionInfo__ros_msg_type * ros_message = static_cast<const _SolutionInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cost
  {
    size_t item_size = sizeof(ros_message->cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: comment
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->comment.size + 1);

  // Field name: stage_id
  {
    size_t item_size = sizeof(ros_message->stage_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planner_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planner_id.size + 1);

  // Field name: markers
  {
    size_t array_size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_visualization_msgs__msg__Marker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t max_serialized_size_key_moveit_task_constructor_msgs__msg__SolutionInfo(
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
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cost
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: comment
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: stage_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: planner_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: markers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_visualization_msgs__msg__Marker(
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
    using DataType = moveit_task_constructor_msgs__msg__SolutionInfo;
    is_plain =
      (
      offsetof(DataType, markers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SolutionInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const moveit_task_constructor_msgs__msg__SolutionInfo * ros_message = static_cast<const moveit_task_constructor_msgs__msg__SolutionInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_moveit_task_constructor_msgs__msg__SolutionInfo(ros_message, cdr);
}

static bool _SolutionInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  moveit_task_constructor_msgs__msg__SolutionInfo * ros_message = static_cast<moveit_task_constructor_msgs__msg__SolutionInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_moveit_task_constructor_msgs__msg__SolutionInfo(cdr, ros_message);
}

static uint32_t _SolutionInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
      untyped_ros_message, 0));
}

static size_t _SolutionInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_task_constructor_msgs__msg__SolutionInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolutionInfo = {
  "moveit_task_constructor_msgs::msg",
  "SolutionInfo",
  _SolutionInfo__cdr_serialize,
  _SolutionInfo__cdr_deserialize,
  _SolutionInfo__get_serialized_size,
  _SolutionInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SolutionInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolutionInfo,
  get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__msg__SolutionInfo__get_type_hash,
  &moveit_task_constructor_msgs__msg__SolutionInfo__get_type_description,
  &moveit_task_constructor_msgs__msg__SolutionInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, msg, SolutionInfo)() {
  return &_SolutionInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
