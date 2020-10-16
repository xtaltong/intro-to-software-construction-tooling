#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, Tab) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\t";
    EXPECT_EQ("\t", echo(2,test_val));
}

TEST(EchoTest, Numbers) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "1234567890";
    EXPECT_EQ("1234567890", echo(2,test_val));
}

TEST(EchoTest, CapitalLetters) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "HELLO";
    EXPECT_EQ("HELLO", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
