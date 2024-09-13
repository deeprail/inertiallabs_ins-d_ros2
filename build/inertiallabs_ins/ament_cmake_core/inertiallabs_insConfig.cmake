# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_inertiallabs_ins_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED inertiallabs_ins_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(inertiallabs_ins_FOUND FALSE)
  elseif(NOT inertiallabs_ins_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(inertiallabs_ins_FOUND FALSE)
  endif()
  return()
endif()
set(_inertiallabs_ins_CONFIG_INCLUDED TRUE)

# output package information
if(NOT inertiallabs_ins_FIND_QUIETLY)
  message(STATUS "Found inertiallabs_ins: 0.0.0 (${inertiallabs_ins_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'inertiallabs_ins' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${inertiallabs_ins_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(inertiallabs_ins_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${inertiallabs_ins_DIR}/${_extra}")
endforeach()
