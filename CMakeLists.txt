cmake_minimum_required (VERSION 3.0)
project (ADS)

include_directories ("${PROJECT_SOURCE_DIR}/Sorting")
include_directories ("${PROJECT_SOURCE_DIR}/Tree")

file(GLOB T_SRC Tree/*.cc)
file(GLOB S_SRC Sorting/*.cc)

add_library(treelib STATIC ${T_SRC})
add_library(sortlib STATIC ${S_SRC})

add_executable(testsort testsort.cc)
add_executable(test_lab Test_lab.cc)
add_executable(testtree testbin_tree.cc)

target_link_libraries(testtree treelib)
target_link_libraries(testsort sortlib)
target_link_libraries(test_lab sortlib)
