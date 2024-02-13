cmake_minimum_required(VERSION 3.27)
project(LongCalc)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_library(LongCalcLib STATIC lib/InfFloat.cpp
)

add_executable(LongCalc main.cpp)

target_link_libraries(LongCalc PRIVATE LongCalcLib)

include_directories(LongCalc)

add_subdirectory("Google_tests")