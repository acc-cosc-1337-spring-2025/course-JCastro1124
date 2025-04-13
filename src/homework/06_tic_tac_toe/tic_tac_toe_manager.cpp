//cpp
#include "tic_tac_toe_manager.h"

//public
void tic_tac_toe_manager::save_game(tic_tac_toe board)
{
    games.push_back(board);
    up_winner_count(board.get_winner());
}

void tic_tac_toe_manager::get_winner_total(int& o,int& x, int& t)
{
    o = o_wins;
    x = x_wins;
    t = ties;
}


//private
void tic_tac_toe_manager::up_winner_count(string winner)
{
    if(winner == "X")
    {
        x_wins +=1;
    }
    else if(winner == "O")
    {
        o_wins +=1;
    }
    else
    {
        ties +=1;
    }
}
