cmake_minimum_required(VERSION 3.2)

project(xml CXX)

# get the repo without git submodule
include(FetchContent)
FetchContent_Declare(
  tinyxml2
  GIT_REPOSITORY https://github.com/leethomason/tinyxml2.git
  GIT_TAG        e05956094c27117f989d22f25b75633123d72a83 # master as of Aug 26, 2023
)
FetchContent_MakeAvailable(tinyxml2)

add_executable(xml main.cpp xml.cpp)
target_link_libraries(xml PRIVATE tinyxml2::tinyxml2)
