//write include statements
#include "dna.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
//write using statements


/*
 
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
    
    
   
    
    
    string userDNA = "";
    double Percernt = 0;
    
    cout<<"Please Enter Your DNA: ";
    cin>>userDNA;
    
     
     bool done = false;
     char ans = ' ';
         
         while (!done) {
        
        int choice = 0;
        cout<<"Enter your choice"<<endl;
        cout<<"Press 1: For Get GC Content"<<endl;
        cout<<"Press 2: For Get DNA Complement"<<endl;
        
        
        cin>>choice;
        
        switch (choice) {
            case 1:
            
                
                Percernt = get_gc_content(userDNA);
                cout<<Percernt<<endl;
                
            break;
            case 2:
                
                get_dna_complement(userDNA);
                
            break;
        }

       
        cout<<"Are you done? " <<"Y or N: ";
        cin>>ans;
        
        if (ans == 'y' || ans == 'Y') {
            done = true;
        }
    }
     
     
    
	return 0;
}
