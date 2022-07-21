

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using namespace std;

int main() 
{
    Tic_Tac_Toe Game;
    string first_player;
    char user_choice = 'y';
    
    do{
        cout<<"Enter first player: ";
        cin>>first_player;
        
        Game.start_game(first_player);
        
        int position;
        while (!Game.game_over()){
            
            cout<<"Enter a position: ";
            cin>>position;
            Game.mark_board(position);
            Game.display_board();
        }
        
        cout<<"Play Again, enter y or Y? ";
        cin>>user_choice;
        
    }while(user_choice == 'y' || user_choice =='Y');
    
   
	return 0;
}
