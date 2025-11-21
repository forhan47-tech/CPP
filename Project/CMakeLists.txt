cmake_minimum_required(VERSION 3.10)

# Project name and language
project(HelloApp LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(include)

# Collect source files
set(SOURCES
    src/main.cpp
    src/hello.cpp
    src/math_utils.cpp
)

# Define the executable
add_executable(hello_app ${SOURCES})
