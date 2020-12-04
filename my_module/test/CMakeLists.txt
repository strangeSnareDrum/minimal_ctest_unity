add_executable(test1_target test1.c)
target_link_libraries(test1_target unity)
target_link_libraries(test1_target my_module)
add_test(NAME test1 COMMAND test1_target)