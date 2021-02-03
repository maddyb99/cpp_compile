cmake_minimum_required(VERSION 3.10)

# set the project name
project(CalculatorTest)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES calculate/add.cpp convert/convert.cpp main_test.cpp ./../Calculate/calculate.cpp ./../Convert/convert.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# add the executable
add_executable(CalculatorTest ${SOURCES} main_test.cpp)

target_link_libraries(CalculatorTest PUBLIC ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)

target_include_directories(CalculatorTest PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/../Calculate"
                          "${PROJECT_SOURCE_DIR}/../Convert"
                          "${PROJECT_SOURCE_DIR}/calculate"
                          "${PROJECT_SOURCE_DIR}/convert"
                          )

enable_testing()
add_test( CalculatorTest CalculatorTest )