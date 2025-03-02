//write include statements
#include <iostream>
#include "repetition.h"
//write using statements
using std::cin;
using std::cout;

int main() 
{
	int temp1,temp2,temp3,ans;
	char quit_ans;
	do
	{
		cout<<"1-Factorial \n"<<"2-Greatest Common Divisor \n"<<"3-Exit \n";
		cin>>ans;
		if (ans == 1)
		{
			cout<<"what is the factorial: ";
			cin>>temp1;
			temp2 = factorial(temp1);
			cout<<"The factorial of "<<temp1<<" is "<<temp2<<"\n";
		}
		else if (ans ==2)
		{
			cout<<"What is parameter 1: ";
			cin>>temp1;
			cout<<"What is parameter 2: ";
			cin>>temp2;
			temp3 = gcd(temp1,temp2);
			cout<<"The greatest common divisor between "<<temp1<<" and "<<temp2<<" is "<<temp3<<"\n";
		}
		else if(ans == 3)
		{
			cout<<"Are ypu sure(Y/N): ";
			cin>>quit_ans;
			if(quit_ans == 'Y' || quit_ans == 'y')
			{
				break;
			}
		}
		
	} while (true);
	


	return 0;
}
