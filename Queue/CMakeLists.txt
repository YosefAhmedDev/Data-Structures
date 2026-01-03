cmake_minimum_required(VERSION 4.0)
project(Queue C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Queue
        main.c
        queue.c
        queue.h)
