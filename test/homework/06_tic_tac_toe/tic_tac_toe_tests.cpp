#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify Test Full Board") {
    
    Tic_Tac_Toe Game;
    
    Game.mark_board(1);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(2);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(3);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(4);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(5);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(6);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(7);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(8);
    REQUIRE(Game. game_over() ==false);
    Game.mark_board(9);
    REQUIRE(Game. game_over() ==false);
    
    REQUIRE(Game. game_over() == true);
}
