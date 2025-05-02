//cpp
#include "tic_tac_toe_manager.h"

//public
void tic_tac_toe_manager::save_game(std::unique_ptr<tic_tac_toe>& board)
{
    
    up_winner_count(board->get_winner());
    games.push_back(std::move(board));
}

void tic_tac_toe_manager::get_winner_total(int& o,int& x, int& t)
{
    o = o_wins;
    x = x_wins;
    t = ties;
}



void tic_tac_toe_manager::up_winner_count(string winner)
{
    if(winner == "X")
    {
        x_wins = x_wins+1;
    }
    else if(winner == "O")
    {
        o_wins = o_wins+1;
    }
    else
    {
        ties = ties +1;
    }
}


void tic_tac_toe_manager::display_all_games(tic_tac_toe_manager& manger)
{
    for(auto& game: manger.games)
    {
        out<<*game<<"\n";
    }
}