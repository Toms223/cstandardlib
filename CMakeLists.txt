cmake_minimum_required(VERSION 3.25)
project(DataStructures C)

set(CMAKE_C_STANDARD 23)

add_library(DataStructures Datastructures/ArrayList.c Datastructures/LinkedList.c)
add_executable(test Datastructures/main.c Datastructures/ArrayList.c Datastructures/LinkedList.c)
