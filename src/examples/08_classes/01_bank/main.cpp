#include "bank_account.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	//variable of a class is equal to an object in memory
	auto amount = 0;
	BankAccount account1(500); //own data type
	cout<<"Balance: "<<account1.get_balance()<<"\n";

	cout<<"Enter amount to deposit: ";
	cin>>amount;
	account1.deposit(amount);
	cout<<"Balance: "<<account1.get_balance()<<"\n";

	cout<<"Enter amount to withdraw: ";
	cin>>amount;
	account1.withdraw(amount);
	cout<<"Balance: "<<account1.get_balance()<<"\n";

	return 0;
}