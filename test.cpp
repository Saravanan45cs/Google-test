#include <gtest/gtest.h>

int multiply(int a, int b) {
    return a * b;
}


TEST(MathTest, Multiplication) {
    ASSERT_EQ(multiply(2, 0), 0);  // Stops execution if fails -fatal failure
    EXPECT_NE(multiply(2, 3), 7);  // Continues even if fails -non fatal failure
}


TEST(Testname,Subtest_1) {
    ASSERT_TRUE(1==1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
