cmake_minimum_required(VERSION 3.2)

project(xml CXX)
add_executable(xml main.cpp)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/tinyxml2/)
