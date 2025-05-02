//h
#include "tic_tac_toe.h"
#ifndef Tic_Tac_Toe_4
#define Tic_Tac_Toe_4

class tic_tac_toe_4 : public tic_tac_toe
{
public:
    tic_tac_toe_4(): tic_tac_toe(4){}
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_across_win() override;

};



#endif