#include "tic_tac_toe.h"

using std::cin;

int main() 
{
	tic_tac_toe game;
	string p1;
	string choice = "y";
	vector <int> temp_pos;
	bool check_pos;
	do
	{
		cout<<"Enter first player(X or O): ";
		cin>>p1;

		while(p1 != "X" || p1 != "O")
		{
			cout<<"Again! Enter first player(X or O): ";
			cin>>p1;
		}


		game.start_game(p1);

		int position;
		while(!game.game_over())
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
		cout<<"The winner is: "<<game.get_winner();
		cout<<"Would you like to play again(Y/N): ";
		cin>>choice;


	} while(choice == "Y" or choice == "y");

	return 0;
}