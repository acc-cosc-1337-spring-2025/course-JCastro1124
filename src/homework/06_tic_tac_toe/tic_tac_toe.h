//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::vector;
using std::cout;
using std::string;


#ifndef tic_tac_toe_H
#define tic_tac_toe_H

class tic_tac_toe
{
public:
    tic_tac_toe(){}
    tic_tac_toe(int size) : pegs(size*size," "){}
    bool game_over();
    void start_game(string first_player); //out
    void mark_board(int position); //out
    string get_player() const{return player;};  //in
    void display_board() const; //out
    string get_winner() const{return winner;};

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_across_win();



private:
    string player;
    string winner;
    void set_next_player(); //out
    bool check_board_full(); //out
    void clear_board(); //out

    
    void set_winner() {winner = player;};
};

#endif

