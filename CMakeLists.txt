cmake_minimum_required(VERSION 2.8.4)
project(SimpleAlgorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Shape.h Rectangle.h Rectangle.cpp)
add_executable(SimpleAlgorithms ${SOURCE_FILES})