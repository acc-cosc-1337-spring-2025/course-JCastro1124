//add include statements
#include "repetition.h"
//add function(s) code here
int factorial(int num)
{
    int total = 1;
    for(int i = 0;i<num;i++)
    {
        total *= (i+1);
    }
    return total;
}

int gcd(int p1,int p2)
{
    int temp;
    while(p1 != p2)
    {
        if(p1<p2)
        {
            temp = p1;
            p1 = p2;
            p2 = temp;
        }
        if(p1>p2)
        {
            p1 -= p2;
        }
    }
    return p1;
}