cmake_minimum_required(VERSION 3.0)
project(SlicerExampleProject C)

set(CMAKE_C_STANDARD 11)

include_directories("${CMAKE_SOURCE_DIR}/include")

add_subdirectory(src)
