#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/


bool tic_tac_toe_3::check_across_win()
{
    string temp;
    if(pegs[0] == "X" || pegs[0] == "O"){temp=pegs[0];}

    if(pegs[4]==temp)
    {
        if(pegs[8]==temp)
        {
            return true;
        }
    }
    if(pegs[2] == "X" || pegs[2] == "O"){temp=pegs[2];}
    if (pegs[4]==temp)
    {
        if(pegs[6]==temp)
        {
            return true;
        }
    }
    return false;
}


bool tic_tac_toe_3::check_row_win()
{
    string temp;
    for(long unsigned int i = 0; i <= pegs.size()-1; i+=3)
    {
        if(pegs[i] == "X" || pegs[i] == "O"){temp=pegs[i];}
        if (pegs[i+1] == temp)
        {
            if (pegs[i+2] == temp)
            {
                return true;
            }
            
        }
        
    }
    return false;
}


bool tic_tac_toe_3::check_column_win()
{
    string temp;
    for(int i = 0; i <= 2; i++)
    {
        if(pegs[i] == "X" || pegs[i] == "O"){temp=pegs[i];}
        if (pegs[i+3] == temp)
        {
            if (pegs[i+6] == temp)
            {
                return true;
            }
            
        }
        
    }
    return false;
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
