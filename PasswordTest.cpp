/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
	
}



//practice quiz
TEST(PasswordTest, mixed_case_with_upper_and_lower)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("Hello");
    ASSERT_TRUE(actual);
}

TEST(PasswordTest, all_lower_case)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("hello");
    ASSERT_FALSE(actual);
}

TEST(PasswordTest, all_upper_case)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("HELLO");
    ASSERT_FALSE(actual);
}

TEST(PasswordTest, mixed_case_with_symbols)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("HeLLo@123");
    ASSERT_TRUE(actual);
}

TEST(PasswordTest, single_upper_case_letter)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("A");
    ASSERT_FALSE(actual);
}

TEST(PasswordTest, single_lower_case_letter)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("a");
    ASSERT_FALSE(actual);
}

TEST(PasswordTest, empty_string)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("");
    ASSERT_FALSE(actual);
}

TEST(PasswordTest, mixed_case_multiple_letters)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("aBcDeFgH");
    ASSERT_TRUE(actual);
}
