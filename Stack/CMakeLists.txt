cmake_minimum_required(VERSION 4.0)
project(Stack C)

set(CMAKE_C_STANDARD 11)

add_executable(Stack main.c
        source.c
        stack.c
        stack.h)
