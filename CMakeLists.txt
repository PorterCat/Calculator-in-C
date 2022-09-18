cmake_minimum_required(VERSION 3.23)
project(Calculator_in_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Calculator_in_C
        calculator.c)
