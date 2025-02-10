#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("TEST echo variable")
{
	REQUIRE(echo_variable(5) == 5);
}
TEST_CASE("TEST substract numbers")
{
	REQUIRE(subtract_numbers(10,5) == 5);
	
}
/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("test add to double .3 3 tiumes")
{
	REQUIRE(add_to_double_1(0) == .9);
	REQUIRE(add_to_double_1(1) == 1.0);
}
/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

