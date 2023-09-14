#include "src/unity.h"
#include "Main.h"
void setUp() {}
void tearDown() {}
void sumTest() {
    TEST_ASSERT_EQUAL_INT(20, 25);
}
int main() {
   UNITY_BEGIN();
   RUN_TEST(sumTest);
   UNITY_END();
}