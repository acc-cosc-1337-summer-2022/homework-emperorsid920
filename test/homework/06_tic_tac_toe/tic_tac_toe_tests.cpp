#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify Test Full Board") {
    
    Tic_Tac_Toe Game;
    
    Game.start_game("X")
    
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
    REQUIRE(Game.get_winner() == "C");
}

TEST_CASE("Verify get_player()") {
    
    Tic_Tac_Toe Game1 ,Game2;
    Game1.start_game("X");
    
    REQUIRE(Game1.get_player() == "X");
    
    Game2.start_game("O");
    REQUIRE(Game2.get_player() == "O");
    
    
}

TEST_CASE("Verify Column Win 1st Column") {
    
    Tic_Tac_Toe Game3;
    Game3.start_game("X");
    Game3.mark_board(1);//W
    Game3.mark_board(2);
    Game3.mark_board(4);//W
    Game3.mark_board(6);
    Game3.mark_board(7);//W
    
    REQUIRE(Game3.game_over() == true);
    

}

TEST_CASE("Verify Column Win 2nd Column") {
    
    Tic_Tac_Toe Game4;
    Game4.start_game("X");
    Game4.mark_board(2);//W
    Game4.mark_board(3);
    Game4.mark_board(5);//W
    Game4.mark_board(6);
    Game4.mark_board(8);//W
    
    REQUIRE(Game4.game_over() == true);
    

}

TEST_CASE("Verify Column Win 3rd Column") {
    
    Tic_Tac_Toe Game5;
    Game5.start_game("X");
    Game5.mark_board(3);//W
    Game5.mark_board(1);
    Game5.mark_board(6);//W
    Game5.mark_board(4);
    Game5.mark_board(9);//W
    
    REQUIRE(Game5.game_over() == true);
    

}

TEST_CASE("Verify Row Win 1st Row") {
    
    Tic_Tac_Toe Game6;
    Game6.start_game("X");
    Game6.mark_board(1);//W
    Game6.mark_board(4);
    Game6.mark_board(2);//W
    Game6.mark_board(5);
    Game6.mark_board(3);//W
    
    REQUIRE(Game6.game_over() == true);
    

}

TEST_CASE("Verify Row Win 2nd Row") {
    
    Tic_Tac_Toe Game7;
    Game7.start_game("X");
    Game7.mark_board(4);//W
    Game7.mark_board(1);
    Game7.mark_board(5);//W
    Game7.mark_board(3);
    Game7.mark_board(6);//W
    
    REQUIRE(Game7.game_over() == true);
    

}

TEST_CASE("Verify Row Win 3rd Row") {
    
    Tic_Tac_Toe Game8;
    Game8.start_game("X");
    Game8.mark_board(7);//W
    Game8.mark_board(1);
    Game8.mark_board(8);//W
    Game8.mark_board(3);
    Game8.mark_board(9);//W
    
    REQUIRE(Game8.game_over() == true);
    

}

TEST_CASE("Verify Row Win 1st Diagonal") {
    
    Tic_Tac_Toe Game9;
    Game9.start_game("X");
    Game9.mark_board(1);//W
    Game9.mark_board(1);
    Game9.mark_board(5);//W
    Game9.mark_board(3);
    Game9.mark_board(9);//W
    
    REQUIRE(Game9.game_over() == true);
    

}


TEST_CASE("Verify Row Win 1st Diagonal") {
    
    Tic_Tac_Toe Game10;
    Game10.start_game("X");
    Game10.mark_board(3);//W
    Game10.mark_board(1);
    Game10.mark_board(5);//W
    Game10.mark_board(3);
    Game10.mark_board(7);//W
    
    REQUIRE(Game10.game_over() == true);
    

}
