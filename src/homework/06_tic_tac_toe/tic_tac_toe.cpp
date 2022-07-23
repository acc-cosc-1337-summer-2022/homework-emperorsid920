//cpp

//cpp

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using namespace std;

//Public Functions
bool Tic_Tac_Toe::game_over()
{
    //Updates to be put out
    
    if (check_column_win()) {
        set_winner();
        return true;
    }else if (check_row_win()){
        set_winner();
        return true;
    }else if (check_diagonal_win()){
        set_winner();
        return true;
    }else if (check_board_full()){
        Winner = "C";
        return true;
    }
    
    return false;
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
    //New Function
string Tic_Tac_Toe::get_winner()
{
    return Winner;
}

//Private Functions
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

    //New Functions
bool Tic_Tac_Toe::check_column_win()
{
    if (pegs[0]!=" " && pegs[0] == pegs[3] && pegs[0] == pegs[6]){
       
        
        return true;
    }else if (pegs[1]!=" " &&pegs[1] == pegs[4] && pegs[1] == pegs[7]){
        
        
        
        return true;
    }else if (pegs[2]!=" " && pegs[2] == pegs[5] && pegs[2] == pegs[8]){
        
       
        
        return true;
    }
    return false;
}

bool Tic_Tac_Toe::check_row_win()
{
    
    if (pegs[0]!=" " && pegs[0] == pegs[1] && pegs[0] == pegs[2]){
        
        
        
        return true;
    }else if (pegs[3]!= " " && pegs[3] == pegs[4] && pegs[3] == pegs[5]){
        
        
        
        return true;
    }else if (pegs[6]!= " " &&pegs[6] == pegs[7] && pegs[6] == pegs[8]){
        
        
        return true;
    }
    
    return false;
}

bool Tic_Tac_Toe::check_diagonal_win()
{
    if (pegs[0]!=" " && pegs[0] == pegs[4] && pegs[0] == pegs[8]){
        
       
        
        return true;
    }else if (pegs[2]!=" " && pegs[2] == pegs[4] && pegs[2] == pegs[6]){
        
       
        
        return true;
    }
    return false;
}

void Tic_Tac_Toe::set_winner(){
    if (Player=="X") {
        Winner = "O";
    }else
    {
        Winner = "X";
    }
}
