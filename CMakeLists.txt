cmake_minimum_required(VERSION 3.16)
project(c C)

set(CMAKE_C_STANDARD 99)

add_executable(c source/main.c headers/calculos.c headers/calculos.h headers/datastructure.c headers/datastructure.h)