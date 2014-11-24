cmake_minimum_required(VERSION 2.8.4)
project(project_ray)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES test.cpp PositionComponent.cpp)

add_executable(project_ray ${SOURCE_FILES})
