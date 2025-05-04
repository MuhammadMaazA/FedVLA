#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "warehouse_ros_mongo::warehouse_ros_mongo" for configuration ""
set_property(TARGET warehouse_ros_mongo::warehouse_ros_mongo APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(warehouse_ros_mongo::warehouse_ros_mongo PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libwarehouse_ros_mongo.so"
  IMPORTED_SONAME_NOCONFIG "libwarehouse_ros_mongo.so"
  )

list(APPEND _cmake_import_check_targets warehouse_ros_mongo::warehouse_ros_mongo )
list(APPEND _cmake_import_check_files_for_warehouse_ros_mongo::warehouse_ros_mongo "${_IMPORT_PREFIX}/lib/libwarehouse_ros_mongo.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
