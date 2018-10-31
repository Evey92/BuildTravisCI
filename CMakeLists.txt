cmake_minimum_required (VERSION 3.5)

project (BuildTravisCI)
include(gtest.cmake)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})

find_package (Threads)
target_link_libraries(BuildTravisCI gtest ${CMAKE_THREAD_LIBS_INIT})

set(TARGET_SRC TravisTest/source.TravisTest.cpp)

add_executable(BuildTravisCI ${TARGET_SRC})