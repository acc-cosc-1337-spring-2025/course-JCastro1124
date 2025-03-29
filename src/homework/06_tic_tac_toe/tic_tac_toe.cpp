//cpp
//public
#include "tic_tac_toe.h"

bool tic_tac_toe::game_over()
{
    return check_board_full();
}

void tic_tac_toe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void tic_tac_toe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void tic_tac_toe::display_board() const
{
    for (long unsigned int i = 0; i < pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
    
}


//private functions
void tic_tac_toe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";//clears board
    }
    
}

void tic_tac_toe::set_next_player()
{
    if(player != "O")
    {
        player = "O";
    }
    else if(player != "X")
    {
        player = "X";
    }
}

bool tic_tac_toe::check_board_full()
{
    for(long unsigned int i = 0; i <pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}