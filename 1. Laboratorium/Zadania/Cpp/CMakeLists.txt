cmake_minimum_required(VERSION 3.8)
project(Cpp)

add_compile_options(-std=gnu++17 -O2 -Wall -Wconversion -Werror)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cpp main.cpp)
