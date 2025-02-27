#include "for.h"
using std::cout;
using std::cin;
using std::setw;

void use_for_loop(int num)
{
    for(auto i=0;i<num;i++)
    {
        cout<<"Hello \n";
    }
}

void multi_table_for(const int rows, const int cols)
{
    for(auto i = 0;i<rows;i++)
    {
        for( auto j = 0;j<cols;j++)
        {
            cout<<setw(4)<<(i + 1)*(j+1);
        }
        cout<<"\n";
    }
}
