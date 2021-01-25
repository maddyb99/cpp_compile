cmake_minimum_required(VERSION 3.10)

# set the project name
project(Calculator)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES Calculate/calculate.cpp Convert/convert.cpp main.cpp)


# add the executable
add_executable(Calculator ${SOURCES} main.cpp)

#target_link_libraries(Calculator PUBLIC Calculate Convert)

target_include_directories(Calculator PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/Calculate"
                          "${PROJECT_SOURCE_DIR}/Convert"
                          )