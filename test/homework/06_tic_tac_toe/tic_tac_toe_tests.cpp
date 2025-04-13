#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
//board tester
TEST_CASE("Test board is full")
{
	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(2); //(x,2)
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //(o,1)
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //(x,4)
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //(o,3)
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //(x,5)
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //(o,6)
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //(x,7)
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //(o,8)
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //(x,9)
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner()== "C");

}
//player tester
TEST_CASE("test play get")
{
	tic_tac_toe game_test_1;
	game_test_1.start_game("X");
	REQUIRE(game_test_1.get_player()== "X");

	tic_tac_toe game_test_2;
	game_test_2.start_game("O");
	REQUIRE(game_test_2.get_player()== "O");
}
//coulm tester
TEST_CASE("test colum 1")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1); // X
	game.mark_board(2); //O
	game.mark_board(4); //X
	game.mark_board(3); //O
	game.mark_board(7);//X

	REQUIRE(game.game_over()==true);

}
TEST_CASE("test colum 2")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(2); // X
	game.mark_board(1); //O
	game.mark_board(5); //X
	game.mark_board(4); //O
	game.mark_board(8);//X

	REQUIRE(game.game_over()==true);
}
TEST_CASE("test colum 3")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(3); // X
	game.mark_board(1); //O
	game.mark_board(6); //X
	game.mark_board(5); //O
	game.mark_board(9);//X

	REQUIRE(game.game_over()==true);
}
//row tester
TEST_CASE("test row 1")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1); // X
	game.mark_board(6); //O
	game.mark_board(2); //X
	game.mark_board(5); //O
	game.mark_board(3);//X

	REQUIRE(game.game_over()==true);
}
TEST_CASE("test row 2")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(4); // X
	game.mark_board(1); //O
	game.mark_board(5); //X
	game.mark_board(2); //O
	game.mark_board(6);//X

	REQUIRE(game.game_over()==true);
}
TEST_CASE("test row 3")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(7); // X
	game.mark_board(1); //O
	game.mark_board(8); //X
	game.mark_board(2); //O
	game.mark_board(9);//X

	REQUIRE(game.game_over()==true);
}
//across
TEST_CASE("Test across top")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(1); // X
	game.mark_board(4); //O
	game.mark_board(5); //X
	game.mark_board(2); //O
	game.mark_board(9);//X

	REQUIRE(game.game_over()==true);
}
TEST_CASE("Test across bottom")
{
	tic_tac_toe game;
	game.start_game("X");
	game.mark_board(7); // X
	game.mark_board(4); //O
	game.mark_board(5); //X
	game.mark_board(2); //O
	game.mark_board(3);//X

	REQUIRE(game.game_over()==true);
}

TEST_CASE("tic tac toe manager tests")
{
	tic_tac_toe game;
	tic_tac_toe_manager game_m;

	game.start_game("X");// game 1
	game.mark_board(7); // X
	game.mark_board(4); //O
	game.mark_board(5); //X
	game.mark_board(2); //O
	game.mark_board(3);//X
	game.game_over(); // x win 1
	game_m.save_game(game);

	game.start_game("X"); // game 2
	game.mark_board(1); // X
	game.mark_board(4); //O
	game.mark_board(5); //X
	game.mark_board(2); //O
	game.mark_board(9);//X
	game.game_over(); // x win 2
	game_m.save_game(game);

	game.start_game("X");
	game.mark_board(1); // X
	game.mark_board(6); //O
	game.mark_board(2); //X
	game.mark_board(5); //O
	game.mark_board(3);//X
	game.game_over(); // x win 3
	game_m.save_game(game);
	
	int x= 0;
	int o= 0;
	int t= 0;
	game_m.get_winner_total(o,x,t);

	REQUIRE(x==3);
	REQUIRE(o==0);
	REQUIRE(t==0);
}