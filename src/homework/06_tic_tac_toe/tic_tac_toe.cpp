//cpp

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using namespace std;


bool Tic_Tac_Toe::game_over()
{
    return check_board_full();
}

void Tic_Tac_Toe::start_game(string First_Player){
    
    Player = First_Player;
    
    clear_board();
    
}

void Tic_Tac_Toe::mark_board(int position)
{
    pegs[position-1] = Player;
    
    set_next_player();
    
}

void Tic_Tac_Toe::display_board() const
{
    for (long unsigned int i=0; i<pegs.size(); i+=3) {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<endl; 
    }
}


//Private functions
void Tic_Tac_Toe::clear_board()
{
    for (auto& peg: pegs) {
        peg = " ";
    }
}

void Tic_Tac_Toe::set_next_player()
{
    if (Player=="X") {
        Player = "O";
    }else
    {
        Player = "X";
    }
}

bool Tic_Tac_Toe::check_board_full()
{
    for (long unsigned int i=0; i<pegs.size(); i++) {
        if (pegs[i]==" ") {
            return false;
        }
    }
    
    return true;
}
