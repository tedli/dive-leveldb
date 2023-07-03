#----------------------------------------------------------------
# Generated CMake target import file for configuration "DEBUG".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gflags::gflags_static" for configuration "DEBUG"
set_property(TARGET gflags::gflags_static APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gflags::gflags_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgflags_static_debug.a"
  )

list(APPEND _cmake_import_check_targets gflags::gflags_static )
list(APPEND _cmake_import_check_files_for_gflags::gflags_static "${_IMPORT_PREFIX}/lib/libgflags_static_debug.a" )

# Import target "gflags::gflags_nothreads_static" for configuration "DEBUG"
set_property(TARGET gflags::gflags_nothreads_static APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gflags::gflags_nothreads_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgflags_nothreads_static_debug.a"
  )

list(APPEND _cmake_import_check_targets gflags::gflags_nothreads_static )
list(APPEND _cmake_import_check_files_for_gflags::gflags_nothreads_static "${_IMPORT_PREFIX}/lib/libgflags_nothreads_static_debug.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
