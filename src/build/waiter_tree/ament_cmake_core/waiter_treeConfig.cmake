# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_waiter_tree_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED waiter_tree_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(waiter_tree_FOUND FALSE)
  elseif(NOT waiter_tree_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(waiter_tree_FOUND FALSE)
  endif()
  return()
endif()
set(_waiter_tree_CONFIG_INCLUDED TRUE)

# output package information
if(NOT waiter_tree_FIND_QUIETLY)
  message(STATUS "Found waiter_tree: 0.0.0 (${waiter_tree_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'waiter_tree' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${waiter_tree_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(waiter_tree_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${waiter_tree_DIR}/${_extra}")
endforeach()
