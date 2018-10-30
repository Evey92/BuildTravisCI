cmake_minimum_required (VERSION 2.8)

project (BuildTravisCI)
include(gtest.cmake)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})

add_executable (BuildTravisCI TravisTest/source/TravisTest.cpp)

find_package (Threads)
target_link_libraries(BuildTravisCI gtest ${CMAKE_THREAD_LIBS_INIT})
