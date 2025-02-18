#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test and truth table")
{
	REQUIRE((true and true) == true);
	REQUIRE((false and true) == false);
	REQUIRE((true && false) == false);
	REQUIRE((false && false) == false);
}
TEST_CASE("Test or turh table")
{
	REQUIRE((true or true) == true);
	REQUIRE((true or false) == true);
	REQUIRE((false or true) == true);
	REQUIRE((false or false) == false);
}
TEST_CASE("tewst not tru e tab;le")
{
	REQUIRE((not true) == false);
	REQUIRE((not false) == true);
}
TEST_CASE("test num in range")
{
	REQUIRE(is_num_in_range(1,10,5)==true);
	REQUIRE(is_num_in_range(1,10,0)==false);
	REQUIRE(is_num_in_range(1,10,11)==false);
}
TEST_CASE("is vowel")
{
	REQUIRE(is_vowel('a') == true);
	REQUIRE(is_vowel('e') == true);
	REQUIRE(is_vowel('i') == true);
	REQUIRE(is_vowel('o') == true);
	REQUIRE(is_vowel('u') == true);

	REQUIRE(is_vowel('t') == false);
	REQUIRE(is_vowel('d') == false);
}