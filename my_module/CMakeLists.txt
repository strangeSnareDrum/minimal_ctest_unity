cmake_minimum_required(VERSION 3.16)

project(my_module C)

set(src src/module.c)

add_library(${PROJECT_NAME} ${src})

target_include_directories(${PROJECT_NAME} PUBLIC inc)

if (UNIT_TESTS_ENABLED)
    message("Unit tests are enabled")
    add_subdirectory(test)
endif()