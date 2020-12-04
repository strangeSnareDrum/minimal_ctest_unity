#include <unity.h>
#include <module.h>

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_module_add(void) {
    int a = 14, b = 8;
    TEST_ASSERT_EQUAL_INT(a + b, module_add(a, b));
}

void test_module_sub(void) {
    int a = 14, b = 8;
    TEST_ASSERT_EQUAL_INT(a - b, module_sub(a, b));
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_module_add);
    RUN_TEST(test_module_sub);
    return UNITY_END();
}