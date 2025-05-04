#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mycobot_mtc_pick_place_demo::cluster_extraction" for configuration "Release"
set_property(TARGET mycobot_mtc_pick_place_demo::cluster_extraction APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mycobot_mtc_pick_place_demo::cluster_extraction PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcluster_extraction.so"
  IMPORTED_SONAME_RELEASE "libcluster_extraction.so"
  )

list(APPEND _cmake_import_check_targets mycobot_mtc_pick_place_demo::cluster_extraction )
list(APPEND _cmake_import_check_files_for_mycobot_mtc_pick_place_demo::cluster_extraction "${_IMPORT_PREFIX}/lib/libcluster_extraction.so" )

# Import target "mycobot_mtc_pick_place_demo::get_planning_scene_client" for configuration "Release"
set_property(TARGET mycobot_mtc_pick_place_demo::get_planning_scene_client APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mycobot_mtc_pick_place_demo::get_planning_scene_client PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libget_planning_scene_client.so"
  IMPORTED_SONAME_RELEASE "libget_planning_scene_client.so"
  )

list(APPEND _cmake_import_check_targets mycobot_mtc_pick_place_demo::get_planning_scene_client )
list(APPEND _cmake_import_check_files_for_mycobot_mtc_pick_place_demo::get_planning_scene_client "${_IMPORT_PREFIX}/lib/libget_planning_scene_client.so" )

# Import target "mycobot_mtc_pick_place_demo::normals_curvature_and_rsd_estimation" for configuration "Release"
set_property(TARGET mycobot_mtc_pick_place_demo::normals_curvature_and_rsd_estimation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mycobot_mtc_pick_place_demo::normals_curvature_and_rsd_estimation PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libnormals_curvature_and_rsd_estimation.so"
  IMPORTED_SONAME_RELEASE "libnormals_curvature_and_rsd_estimation.so"
  )

list(APPEND _cmake_import_check_targets mycobot_mtc_pick_place_demo::normals_curvature_and_rsd_estimation )
list(APPEND _cmake_import_check_files_for_mycobot_mtc_pick_place_demo::normals_curvature_and_rsd_estimation "${_IMPORT_PREFIX}/lib/libnormals_curvature_and_rsd_estimation.so" )

# Import target "mycobot_mtc_pick_place_demo::object_segmentation" for configuration "Release"
set_property(TARGET mycobot_mtc_pick_place_demo::object_segmentation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mycobot_mtc_pick_place_demo::object_segmentation PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libobject_segmentation.so"
  IMPORTED_SONAME_RELEASE "libobject_segmentation.so"
  )

list(APPEND _cmake_import_check_targets mycobot_mtc_pick_place_demo::object_segmentation )
list(APPEND _cmake_import_check_files_for_mycobot_mtc_pick_place_demo::object_segmentation "${_IMPORT_PREFIX}/lib/libobject_segmentation.so" )

# Import target "mycobot_mtc_pick_place_demo::plane_segmentation" for configuration "Release"
set_property(TARGET mycobot_mtc_pick_place_demo::plane_segmentation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mycobot_mtc_pick_place_demo::plane_segmentation PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libplane_segmentation.so"
  IMPORTED_SONAME_RELEASE "libplane_segmentation.so"
  )

list(APPEND _cmake_import_check_targets mycobot_mtc_pick_place_demo::plane_segmentation )
list(APPEND _cmake_import_check_files_for_mycobot_mtc_pick_place_demo::plane_segmentation "${_IMPORT_PREFIX}/lib/libplane_segmentation.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
