
#include "int.h"
using std::cout;
/*
Function echo_variable returns the incoming parameter

@param int-integer type
@return return the int parameter
*/
void use_int_data_type()
{
    int num = 5;
    cout<<num;
}

void reassign_int_data_type()
{
    int num = 5;
    cout<<num<<"\n";
    num = 10;
    cout<<num<<"\n";
    num = 15.5;
    cout<<num<<"\n";
}

int echo_variable(int num)
{
    return num;
}

int subtract_numbers(int num1, int num2)
{
    int result;
    result = num1 - num2;
    return result;
}