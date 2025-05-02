//h
#include <iostream>
#include <string>
#include<memory>
#include <vector>
#include "tic_tac_toe.h"

using std::vector;
using std::cout;
using std::string;
using std::unique_ptr;

#ifndef tic_tac_toe_manager_H
#define tic_tac_toe_manager_H

class tic_tac_toe_manager
{
public:
    tic_tac_toe_manager(){}
    void get_winner_total(int& o, int& x, int& t);
    void save_game(unique_ptr<tic_tac_toe>& board);
private:
    void up_winner_count(string winner);
    vector<unique_ptr<tic_tac_toe>> games;
    int o_wins = {0};
    int x_wins = {0};
    int ties = {0};

};

#endif