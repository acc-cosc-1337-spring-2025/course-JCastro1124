#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

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