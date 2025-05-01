//h
#include "tic_tac_toe.h"
#ifndef Tic_Tac_Toe_3
#define Tic_Tac_Toe_3

class tic_tac_toe_3 : public tic_tac_toe
{
public:
    tic_tac_toe_3(): tic_tac_toe(3){}
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_across_win() override;

};



#endif
