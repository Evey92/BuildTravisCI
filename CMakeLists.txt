cmake_minimum_required (VERSION 3.5)

project (BuildTravisCI)
include(gtest.cmake)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})

#add_executable (BuildTravisCI TravisTest/source/TravisTest.cpp)

set(TARGET_SRC ${PROJECT_SOURCE_DIR}TravisTest/source/TravisTest.cpp)

add_executable((BuildTravisCI ${TARGET_SRC})

find_package (Threads)
target_link_libraries(BuildTravisCI gtest ${CMAKE_THREAD_LIBS_INIT})

#target_compile_options(tests PRIVATE /std:c++17 /W4 /WX)

#    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Ox")
#   set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Od")