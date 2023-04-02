cmake_minimum_required(VERSION 3.2)

project(xml CXX)
find_package(tinyxml2 REQUIRED)
add_executable(xml main.cpp xml.cpp)
target_link_libraries(xml PRIVATE tinyxml2::tinyxml2)
