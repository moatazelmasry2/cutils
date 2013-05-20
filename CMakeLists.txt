cmake_minimum_required (VERSION 2.6)

project (cutils)
#add_subdirectory (include) 
#add_subdirectory (src)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
include_directories ("${PROJECT_SOURCE_DIR}/include")

add_library(cutils
    src/tsearch_binarytree.c 
    src/hashset.c 
    src/tsearch_hs.c)

add_executable (tsearch2_bt_demo examples/tsearch2_bt_demo.c)
target_link_libraries (tsearch2_bt_demo cutils) 

add_executable (tsearch_hs_demo examples/tsearch_hs_demo.c)
target_link_libraries (tsearch_hs_demo cutils)