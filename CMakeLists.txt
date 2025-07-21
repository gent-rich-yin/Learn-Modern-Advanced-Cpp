cmake_minimum_required(VERSION 3.10)

project(learn-cpp CXX)

set(CMAKE_CXX_STANDARD 17) # Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED TRUE) # Make C++ standard requirement strict

add_subdirectory("my-class")
add_subdirectory("my-helloworld")
