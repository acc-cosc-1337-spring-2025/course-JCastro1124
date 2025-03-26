#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify bank get balace")
{
	BankAccount account(500);
	REQUIRE(account.get_balance()==500);
}
TEST_CASE("verify bank acoung deposit")
{
	BankAccount account(500);
	REQUIRE(account.get_balance()==500);

	account.deposit(50);
	REQUIRE(account.get_balance()==550);
}

TEST_CASE("test bank acc depsoyu wit 2 diff ob")
{
	BankAccount acc1(500);
	BankAccount acc2(230);

	REQUIRE(acc1.get_balance()==500);
	REQUIRE(acc2.get_balance()==230);

	acc1.deposit(50);
	acc2.deposit(70);

	REQUIRE(acc1.get_balance()==550);
	REQUIRE(acc2.get_balance()==300);
}

TEST_CASE("test acc withdraw")
{
	BankAccount acc(500);
	REQUIRE(acc.get_balance()==500);
	acc.withdraw(50);
	REQUIRE(acc.get_balance()==450);
}