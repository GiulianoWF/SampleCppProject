cmake_minimum_required(VERSION 3.16)
project(dafult_project)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Boost REQUIRED)

add_executable(executable main.cpp)
target_link_libraries(executable boost::boost) 

get_target_property(MY_TARGET_INCLUDE_DIRS executable INCLUDE_DIRECTORIES)
foreach(DIR ${MY_TARGET_INCLUDE_DIRS})
  message(STATUS "Dir='${DIR}'")
endforeach()


get_target_property(FOO_INCLUDE_DIRS ZLIB::ZLIB INTERFACE_INCLUDE_DIRECTORIES)
foreach(DIR ${FOO_INCLUDE_DIRS})

  message(STATUS "Foo::Foo includes='${DIR}'")
endforeach()

