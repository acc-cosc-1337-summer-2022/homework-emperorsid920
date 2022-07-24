//add include statements

//add function(s) code here
#include "dna.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


double get_gc_content(const string& dna)
{
    
    int length = dna.length();
    int counter = 0;
   double percent =0;
    
    for (int i =0; i<length; i++) {
        if (dna[i] == 'G' || dna[i] == 'C') {
            counter++;
        }
    }
    
    
    
    percent = (double)counter / (double)length;
    
   // cout<<percent<<endl;
    

  
    return percent;
    
}

string get_dna_complement(string dna)
{
    string newDNA = reverse_string(dna);
    int length = dna.length();
    for (int i =0; i<length; i++) {
        if (dna[i] =='A') {
            newDNA[i] = 'T';
        }else if (dna[i] =='T'){
            newDNA[i]='A';
        
        }
        
        if (dna[i] =='C') {
            newDNA[i] = 'G';
        }else if (dna[i] =='G'){
            newDNA[i]='C';
        
        }
        
    }
    
    cout<<newDNA<<endl;
    
    return newDNA;
}

string reverse_string(string dna)
{
    int length = dna.length();
    
    string revDNA = dna;
    
    int revCounter = length-1;
    
    for (int i=0; i<length; i++) {
        revDNA[i] = dna[revCounter];
        
        revCounter--;
    }
    
   
   // cout<<"The reversal is: "<<revDNA<<endl;
    
    
    return revDNA;
}
