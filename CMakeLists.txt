cmake_minimum_required(VERSION 3.28)
project(projectOne)

set(CMAKE_CXX_STANDARD 17)

add_executable(projectOne main.cpp
        Card.cpp
        Card.h
)
