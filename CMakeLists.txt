cmake_minimum_required(VERSION 3.10)
project(Triangles)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(include)

add_executable(VectorsTests tests/vectors_test.cpp source/utils.cpp)

target_link_libraries(VectorsTests gtest gtest_main)
