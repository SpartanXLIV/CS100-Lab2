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

TEST(EchoTest, WordIsBonkus) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Bonkus";
	EXPECT_EQ("Bonkus", echo(2,test_val));
}

TEST(EchoTest, HaloInfinite) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Halo"; test_val[2] = "Infinite";
    EXPECT_EQ("Halo Infinite", echo(3,test_val));
}

TEST(EchoTest, RipAndTear) {
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Rip"; test_val[2] = "and"; test_val[3] = "tear";
	EXPECT_EQ("Rip and tear", echo(4,test_val));
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

