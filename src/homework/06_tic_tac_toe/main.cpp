#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin;

int main() 
{
	tic_tac_toe game;
	tic_tac_toe_manager game_m;
	string p1;
	string choice = "y";
	bool run_game;
	int o_w=0;
	int x_w=0;
	int tie=0;
	do
	{
		cout<<"Enter first player(X or O): ";
		cin>>p1;

		while(p1 != "X" && p1 != "O")
		{
			cout<<"Again! Enter first player(X or O): ";
			cin>>p1;
		}


		game.start_game(p1);
		run_game = game.game_over();

		int position;
		while(game.game_over()==false)
		{
			game.display_board();
			cout<<"Enter a position(1-9): ";
			cin>>position;
			while(true)
			{
				if (position < 1 || position > 9)
				{
					cout<<"Invalid:Enter a position(1-9): ";
					cin>>position;
				}
				else{break;}
			}
			game.mark_board(position);
			
		}
		game_m.save_game(game);
		game_m.get_winner_total(o_w,x_w,tie);
		cout<<"The winner is: "<<game.get_winner()<<"\n";
		cout<<"x wins: "<<x_w<<" |o wins: "<<o_w<<" |ties: "<<tie<<"\n";

		cout<<"Would you like to play again(Y/N): ";
		cin>>choice;


	} while(choice == "Y" or choice == "y");

	return 0;
}