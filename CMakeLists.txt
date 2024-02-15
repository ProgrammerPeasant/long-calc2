cmake_minimum_required(VERSION 3.27)
project(LongCalc)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_library(LongCalcLib STATIC lib/InfFloat.cpp
)

include_directories(LongCalc)

add_subdirectory("Google_tests")

add_executable(pi_num pi_chud.cpp)
target_link_libraries(pi_num LongCalcLib)

#add_executable(tests Google_tests/InfFloatTest.cpp)
#target_link_libraries(tests LongCalcLib)
add_custom_target(pi COMMAND pi_num)
add_custom_target(tests COMMAND Google_Tests_run)