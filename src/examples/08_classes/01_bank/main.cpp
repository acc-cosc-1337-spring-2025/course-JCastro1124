#include "bank_account.h"
#include <iostream>
using std::cout;


int main()
{
	BankAccount account;
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}