#include <iostream>
#include "expressions.h"

using std::cout;
using std::cin;
int main()
{
    int num1, num2, num3;
    cout<<"enter num1: ";
    cin>>num1;

    cout<<"enter num2: ";
    cin>>num2;

    cout<<"enter num3: ";
    cin>>num3;

    auto result = op_pre_1(num1,num2,num3);
    cout<<"result: "<<result;

    
    return 0;
}