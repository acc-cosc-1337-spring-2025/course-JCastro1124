#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	int min, max, num;

	cout<<"Enter min num: ";
	cin>>min;

	cout<<"Enter max num: ";
	cin>>max;

	cout<<"Enter num: ";
	cin>>num;

	auto in_range = is_num_in_range(min,max,num);

	cout<<in_range<<"\n";

	return 0;
}
