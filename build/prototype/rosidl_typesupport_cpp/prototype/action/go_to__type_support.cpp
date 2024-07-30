// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from prototype:action/GoTo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "prototype/action/detail/go_to__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_Goal_type_support_ids_t;

static const _GoTo_Goal_type_support_ids_t _GoTo_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_Goal_type_support_symbol_names_t _GoTo_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_Goal)),
  }
};

typedef struct _GoTo_Goal_type_support_data_t
{
  void * data[2];
} _GoTo_Goal_type_support_data_t;

static _GoTo_Goal_type_support_data_t _GoTo_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_Goal_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_Goal>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_Goal)() {
  return get_message_type_support_handle<prototype::action::GoTo_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_Result_type_support_ids_t;

static const _GoTo_Result_type_support_ids_t _GoTo_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_Result_type_support_symbol_names_t _GoTo_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_Result)),
  }
};

typedef struct _GoTo_Result_type_support_data_t
{
  void * data[2];
} _GoTo_Result_type_support_data_t;

static _GoTo_Result_type_support_data_t _GoTo_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_Result_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_Result>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_Result)() {
  return get_message_type_support_handle<prototype::action::GoTo_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_Feedback_type_support_ids_t;

static const _GoTo_Feedback_type_support_ids_t _GoTo_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_Feedback_type_support_symbol_names_t _GoTo_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_Feedback)),
  }
};

typedef struct _GoTo_Feedback_type_support_data_t
{
  void * data[2];
} _GoTo_Feedback_type_support_data_t;

static _GoTo_Feedback_type_support_data_t _GoTo_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_Feedback_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_Feedback>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_Feedback)() {
  return get_message_type_support_handle<prototype::action::GoTo_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_SendGoal_Request_type_support_ids_t;

static const _GoTo_SendGoal_Request_type_support_ids_t _GoTo_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_SendGoal_Request_type_support_symbol_names_t _GoTo_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_SendGoal_Request)),
  }
};

typedef struct _GoTo_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GoTo_SendGoal_Request_type_support_data_t;

static _GoTo_SendGoal_Request_type_support_data_t _GoTo_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_SendGoal_Request_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_SendGoal_Request>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_SendGoal_Request)() {
  return get_message_type_support_handle<prototype::action::GoTo_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_SendGoal_Response_type_support_ids_t;

static const _GoTo_SendGoal_Response_type_support_ids_t _GoTo_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_SendGoal_Response_type_support_symbol_names_t _GoTo_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_SendGoal_Response)),
  }
};

typedef struct _GoTo_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GoTo_SendGoal_Response_type_support_data_t;

static _GoTo_SendGoal_Response_type_support_data_t _GoTo_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_SendGoal_Response_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_SendGoal_Response>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_SendGoal_Response)() {
  return get_message_type_support_handle<prototype::action::GoTo_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_SendGoal_type_support_ids_t;

static const _GoTo_SendGoal_type_support_ids_t _GoTo_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_SendGoal_type_support_symbol_names_t _GoTo_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_SendGoal)),
  }
};

typedef struct _GoTo_SendGoal_type_support_data_t
{
  void * data[2];
} _GoTo_SendGoal_type_support_data_t;

static _GoTo_SendGoal_type_support_data_t _GoTo_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_SendGoal_service_typesupport_map = {
  2,
  "prototype",
  &_GoTo_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GoTo_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GoTo_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoTo_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<prototype::action::GoTo_SendGoal>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_GetResult_Request_type_support_ids_t;

static const _GoTo_GetResult_Request_type_support_ids_t _GoTo_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_GetResult_Request_type_support_symbol_names_t _GoTo_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_GetResult_Request)),
  }
};

typedef struct _GoTo_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GoTo_GetResult_Request_type_support_data_t;

static _GoTo_GetResult_Request_type_support_data_t _GoTo_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_GetResult_Request_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_GetResult_Request>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_GetResult_Request)() {
  return get_message_type_support_handle<prototype::action::GoTo_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_GetResult_Response_type_support_ids_t;

static const _GoTo_GetResult_Response_type_support_ids_t _GoTo_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_GetResult_Response_type_support_symbol_names_t _GoTo_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_GetResult_Response)),
  }
};

typedef struct _GoTo_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GoTo_GetResult_Response_type_support_data_t;

static _GoTo_GetResult_Response_type_support_data_t _GoTo_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_GetResult_Response_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_GetResult_Response>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_GetResult_Response)() {
  return get_message_type_support_handle<prototype::action::GoTo_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_GetResult_type_support_ids_t;

static const _GoTo_GetResult_type_support_ids_t _GoTo_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_GetResult_type_support_symbol_names_t _GoTo_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_GetResult)),
  }
};

typedef struct _GoTo_GetResult_type_support_data_t
{
  void * data[2];
} _GoTo_GetResult_type_support_data_t;

static _GoTo_GetResult_type_support_data_t _GoTo_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_GetResult_service_typesupport_map = {
  2,
  "prototype",
  &_GoTo_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GoTo_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GoTo_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoTo_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<prototype::action::GoTo_GetResult>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoTo_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoTo_FeedbackMessage_type_support_ids_t;

static const _GoTo_FeedbackMessage_type_support_ids_t _GoTo_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoTo_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoTo_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoTo_FeedbackMessage_type_support_symbol_names_t _GoTo_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, action, GoTo_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype, action, GoTo_FeedbackMessage)),
  }
};

typedef struct _GoTo_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GoTo_FeedbackMessage_type_support_data_t;

static _GoTo_FeedbackMessage_type_support_data_t _GoTo_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoTo_FeedbackMessage_message_typesupport_map = {
  2,
  "prototype",
  &_GoTo_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GoTo_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GoTo_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoTo_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoTo_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype::action::GoTo_FeedbackMessage>()
{
  return &::prototype::action::rosidl_typesupport_cpp::GoTo_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype, action, GoTo_FeedbackMessage)() {
  return get_message_type_support_handle<prototype::action::GoTo_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace prototype
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GoTo_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<prototype::action::GoTo>()
{
  using ::prototype::action::rosidl_typesupport_cpp::GoTo_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GoTo_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::prototype::action::GoTo::Impl::SendGoalService>();
  GoTo_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::prototype::action::GoTo::Impl::GetResultService>();
  GoTo_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::prototype::action::GoTo::Impl::CancelGoalService>();
  GoTo_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::prototype::action::GoTo::Impl::FeedbackMessage>();
  GoTo_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::prototype::action::GoTo::Impl::GoalStatusMessage>();
  return &GoTo_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
