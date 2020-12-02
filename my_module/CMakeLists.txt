cmake_minimum_required(VERSION 3.16)

project(my_module C)

set(src module.c)

add_library(${PROJECT_NAME} ${src})

target_include_directories(${PROJECT_NAME} PUBLIC inc)