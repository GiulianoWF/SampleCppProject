cmake_minimum_required(VERSION 3.16)
project(dafult_project)

add_definitions("-std=c++17")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories("${CMAKE_SOURCE_DIR}/includes")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# add_subdirectory(lib1_dir)

add_executable(executable main.cpp)
conan_target_link_libraries(executable)
# target_link_libraries(executable lib1 lib2)

