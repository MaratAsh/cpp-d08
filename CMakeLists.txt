cmake_minimum_required(VERSION 3.21)
project(cpp_08)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_08_00
        ex00/main.cpp
        )

add_executable(cpp_08_01
        ex01/main.cpp
        ex01/Span.cpp
        ex01/Span.hpp
        )

add_executable(cpp_08_02
        ex02/main.cpp
        )
