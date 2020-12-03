
add_executable(test1_target test1.c)
add_test(NAME test1 COMMAND test1_target)

add_executable(test2_target test2.c)
add_test(NAME test2 COMMAND test2_target)
enable_testing()
