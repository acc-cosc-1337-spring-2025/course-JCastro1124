#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "reference.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("test value/ref para(var)")
{
	int num1 = ;
	int num2 = ;
	reference(num1,num2);
	REQUIRE(num1==5);
	REQUIRE(num2 == 20);
}