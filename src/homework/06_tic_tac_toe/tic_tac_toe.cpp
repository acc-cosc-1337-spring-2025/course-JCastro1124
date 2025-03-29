//cpp
#include "tic_tac_toe.h"

bool tic_tac_toe::game_over()
{
    return false; //temporary
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
    if(player == "X")
    {
        player == "O";
    }
    if(player == "O")
    {
        player == "X";
    }
}