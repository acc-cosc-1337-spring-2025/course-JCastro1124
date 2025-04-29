#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <memory>
#include <iostream>
#include <utility>

using std::unique_ptr; using std::make_unique; 
using std::cin;
using namespace::std;
using std::move;

int main() 
{
	tic_tac_toe game;
	tic_tac_toe_manager game_m;
	string p1;
	string choice = "y";
	bool run_game = false;
	int X=0;int O=0;int tie = 0;
	do
	{
		cout<<"Enter first player(X or O): ";
		cin>>p1;

		while(p1 != "X" && p1 != "O")
		{
			cout<<"Again! Enter first player(X or O): ";
			cin>>p1;
		}
		game_m.get_winner_total(O,X,tie);
		cout<<"X wins: "<<X<<"\nO wins: "<<O<<"\nties: "<<tie<<"\n"; 
		game.start_game(p1);

		int position;
		while(!run_game)
		{
			
			game.display_board();
			cout<<"Enter a position(1-9): ";
			cin>>position;
			while(position < 1 || position > 9)
			{
				
				cout<<"Invalid:Enter a position(1-9): ";
				cin>>position;
			}
			game.mark_board(position);
			run_game = game.game_over();
			
		}
		game.display_board();
		game_m.save_game(game);
		game_m.up_winner_count(game.get_winner());
		cout<<"The winner is: "<<game.get_winner()<<"\n";
		cout<<"X wins: "<<X<<"\nO wins: "<<O<<"\nties: "<<tie<<"\n"; 

		cout<<"Would you like to play again(Y/N): ";
		cin>>choice;
		run_game = false;

	} while(choice == "Y" or choice == "y");

	return 0;
}