cmake_minimum_required (VERSION 3.0)
project (ADS)

include_directories ("${PROJECT_SOURCE_DIR}/Sorting")
include_directories ("${PROJECT_SOURCE_DIR}/Tree")
file(GLOB SOURCES Sorting/*.cc Tree/*.cc)

add_executable(testsort testsort.cc ${SOURCES})
add_executable(test_lab Test_lab.cc ${SOURCES})
add_executable(testtree testbin_tree.cc ${SOURCES})
