
cmake_minimum_required(VERSION 3.0)
project (mnt)

set (CMAKE_BUILD_TYPE debug)
set (CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++20")
file (
    GLOB_RECURSE
    source_files
    src/main.cpp
    src/vibes.cpp
)

add_executable(
    ${PROJECT_NAME}
    ${source_files}
)