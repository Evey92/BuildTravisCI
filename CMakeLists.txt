cmake_minimum_required (VERSION 2.8)

project (BuildTravisCI)
include(gtest.cmake)

SET(COVERAGE OFF CACHE BOOL "Coverage")

add_executable (BuildTravisCI TravisTest/source/TravisTest.cc)

find_package (Threads)
target_link_libraries(BuildTravisCI gtest ${CMAKE_THREAD_LIBS_INIT})
