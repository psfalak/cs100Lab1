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

TEST(EchoTest, SingleChar) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "t";
    EXPECT_EQ("t", echo(2,test_val));
}

TEST(EchoTest, Numbers) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "12"; test_val[2] = "34";
    EXPECT_EQ("12 34", echo(3,test_val));
}

TEST(EchoTest, MultipeStrings){
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "This"; test_val[2] = "is"; test_val[3] = "the"; test_val[4] = "final"; test_val[5] = "test";
    EXPECT_EQ("This is the final test", echo(6,test_val));


}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
