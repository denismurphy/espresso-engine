cmake_minimum_required(VERSION 3.24)
project(espresso_engine C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(espresso_engine
        coffee_machine.c
        coffee_machine.h
        library.h library.h)
