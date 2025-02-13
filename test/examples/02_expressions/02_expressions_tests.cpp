#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify op pre 1")
{
	REQUIRE(op_pre_1(2,6,3) == 4);
	REQUIRE(op_pre_1(2,10,2) == 7);
}
TEST_CASE("Verify op pre 2")
{
	REQUIRE(op_pre_2(2,6,2) == 4);
	REQUIRE(op_pre_2(2,10,2) == 6);
}
TEST_CASE("TEST constant")
{
	REQUIRE(calc_interset(100) == 5);
}