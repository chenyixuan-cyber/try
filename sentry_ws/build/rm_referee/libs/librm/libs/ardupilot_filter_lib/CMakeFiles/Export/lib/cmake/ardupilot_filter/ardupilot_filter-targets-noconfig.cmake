#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ardupilot_filter::ardupilot_filter" for configuration ""
set_property(TARGET ardupilot_filter::ardupilot_filter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ardupilot_filter::ardupilot_filter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libardupilot_filter.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS ardupilot_filter::ardupilot_filter )
list(APPEND _IMPORT_CHECK_FILES_FOR_ardupilot_filter::ardupilot_filter "${_IMPORT_PREFIX}/lib/libardupilot_filter.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
