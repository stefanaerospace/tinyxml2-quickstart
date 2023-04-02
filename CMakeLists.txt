cmake_minimum_required(VERSION 3.2)

find_package(tinyxml2 REQUIRED)

project(xml CXX)
add_executable(xml main.cpp xml.cpp)
target_link_libraries(xml PRIVATE tinyxml2::tinyxml2)
