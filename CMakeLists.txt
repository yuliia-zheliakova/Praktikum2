cmake_minimum_required(VERSION 3.29)
project(Praktikum2 C)

set(CMAKE_C_STANDARD 90)

set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -pedantic-errors -ansi")

message(STATUS "Compiler options: ${CMAKE_C_FLAGS} ${CMAKE_C_FLAGS_DEBUG} ${CMAKE_C_FLAGS_RELEASE}")

add_executable(Praktikum2 main.c
        zahlen.h
        zahlen.c)
