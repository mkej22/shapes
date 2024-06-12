cmake_minimum_required(VERSION 3.28)
project(untitled4)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled4 main.cpp
        shapes/Shape.h
        shapes/Shape.cpp
        shapes/Rectangle.h
        shapes/Rectangle.cpp
        shapes/Circle.cpp)
