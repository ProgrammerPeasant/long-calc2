cmake_minimum_required(VERSION 3.27)
project(LongCalc)

set(CMAKE_CXX_STANDARD 20)

set(HEADER_FILES
        InfFloat.h
)

set(SOURCE_FILES
        InfFloat.cpp
)

add_library(LongCalcLib STATIC lib/InfFloat.cpp
        main.cpp
)

include_directories(LongCalc)

add_subdirectory(Google_tests)