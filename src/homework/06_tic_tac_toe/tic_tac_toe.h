//h
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::vector;
using std::cout;
using std::string;


#ifndef tic_tac_toe_H
#define tic_tac_toe_H

class tic_tac_toe
{
public:
    bool game_over();
    void start_game(string first_player); //out
    void mark_board(int position); //out
    string get_player() const{return player;};  //in
    void display_board() const; //out
    string get_winner() const{return winner;};
private:
    string player;
    vector<string> pegs {9," "}; //in
    string winner;
    void set_next_player(); //out
    bool check_board_full(); //out
    void clear_board(); //out

    bool check_column_win();
    bool check_row_win();
    bool check_across_win();
    void set_winner(string win_player) {winner = win_player;};
};

#endif tic_tac_toe_H

