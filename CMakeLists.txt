cmake_minimum_required(VERSION 3.16)

project(quake_proj C)

include(CTest)

option(UNIT_TESTS_ENABLED "Enable unit tests" ON)

if(UNIT_TESTS_ENABLED)
    add_subdirectory(externals/Unity)
endif()

add_subdirectory(my_module)
