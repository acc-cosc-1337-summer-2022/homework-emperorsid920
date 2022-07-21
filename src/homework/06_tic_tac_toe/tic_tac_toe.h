//h

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

 
#include<iostream>
#include <string>
#include <vector>
using namespace std;

class Tic_Tac_Toe {
private:
    string Player;
    
  
    
    vector<string> pegs = vector<string> (9, " ");
    
    
    void set_next_player();
    bool check_board_full();
    
    
public:
    bool game_over();
    void mark_board(int);
    string get_player() const{return Player;}
    void start_game(string);
    void display_board() const;
    void clear_board();
}; 

#endif
