cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(CMAKE_BUILD_TYPE Debug)

include(gtest.cmake)
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})

project (BuildTravisCI)
set(TARGET_SRC TravisTest/source/TravisTest.cpp)

add_executable(BuildTravisCI ${TARGET_SRC})

find_package (Threads)
target_link_libraries(BuildTravisCI gtest ${CMAKE_THREAD_LIBS_INIT})