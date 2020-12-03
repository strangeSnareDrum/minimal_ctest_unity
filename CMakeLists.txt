cmake_minimum_required(VERSION 3.16)

project(quake_proj C)

include(CTest)

option(UNIT_TESTS_ENABLED "Enable unit tests" ON)

add_subdirectory(my_module)
