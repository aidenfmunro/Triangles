# Minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Triangles VERSION 1.0)

# Set C++ standard (optional)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directory for header files
include_directories(include)

# Add the executable by specifying all .cpp files from source folder
file(GLOB SOURCES "source/*.cpp")

# Create the executable
add_executable(main ${SOURCES})

# Link the include directory for headers
target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/include)
