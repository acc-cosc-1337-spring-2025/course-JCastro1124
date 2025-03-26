#include "bank_account.h"
#include <iostream>
using std::cout;


int main()
{
	//variable of a class is equal to an object in memory
	BankAccount account(500); //own data type
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}