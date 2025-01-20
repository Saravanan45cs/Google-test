#include <gtest/gtest.h>
#include <string>
using namespace std;
string concatenate(string a, string b) {
    return a + b;
}


TEST(UtilsTest, ConcatenateStrings) {
    EXPECT_EQ(concatenate("Hello", "World"), "HelloWorld");
    EXPECT_NE(concatenate("Hi", "There"), "HelloThere");

    ASSERT_STREQ("Hello", concatenate("Hel", "lo").c_str());  //STREQ ,STRNE for strings
    EXPECT_STRNE("HELLO", concatenate("Hel", "lo").c_str()); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
