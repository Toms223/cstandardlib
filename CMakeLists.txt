cmake_minimum_required(VERSION 3.25)
project(DataStructures C)

set(CMAKE_C_STANDARD 23)

add_library(DataStructures Datastructures/List.c)
add_executable(test Datastructures/main.c Datastructures/List.c)
