//h
#include <iostream>
#include <string>
#include <vector>
using std::vector;

using std::string;


class tic_tac_toe
{
public:
    bool game_over();
    void start_game(string first_player); //out
    void mark_board(int position); //out
    string get_player() const{return player;};  //in
    void display_board() const; //
private:
    string player;
    vector<string> pegs {9," "}; //in
    void set_next_player(); //out
    bool check_board_full(); //
    void clear_board(); //out

};



