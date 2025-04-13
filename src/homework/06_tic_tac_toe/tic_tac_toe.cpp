//cpp
//public
#include "tic_tac_toe.h"

bool tic_tac_toe::game_over() //update
{
    string tie_match = "C";
    if(check_column_win() == true)
    {
        set_next_player();
        set_winner(get_player());
        return true;
    }
    else if(check_across_win() == true)
    {
        set_next_player();
        set_winner(get_player());
        return true;
    }
    else if(check_row_win() == true)
    {
        set_next_player();
        set_winner(get_player());
        return true;
    }
    else if(check_board_full() == true)
    {
        set_winner(tie_match);
        return true;
    }
    else
    {
        return false;
    }
    return false;
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

bool tic_tac_toe::check_column_win()
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

bool tic_tac_toe::check_row_win()
{
    string temp;
    for(long unsigned int i = 0; i <= pegs.size(); i+=3)
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

bool tic_tac_toe::check_across_win()
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