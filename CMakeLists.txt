cmake_minimum_required(VERSION 2.6)

PROJECT(CTest)
enable_testing()
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test.cpp)
add_executable(cTest test_1.c)
add_test(cTest cTest)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

set(CMAKE_C_FLAGS "-fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS
    "-fprofile-arcs -ftest-coverage")

add_executable(coverage code_coverage.c)