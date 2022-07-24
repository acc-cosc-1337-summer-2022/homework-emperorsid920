//write include statements

#include<iostream>
#include "decisions.h"
#include <string>

using namespace std;

int main() 
{
    
    int GradePoints = 0;
    
    int CredPoints = 0;
    
    int CreditHour = 0;
    
    string LetterGrade;

    int TotalCPoints = 0;
    
    int TotalChours = 0;
    
    double GPA = 0.0;
    
    bool done = false;
    char ans = ' ';
        
        do {
            
            cout<<"Please Enter Your Letter Grade: ";
            cin>>LetterGrade;
            
            cout<<"Please Enter Your Credit Hour: ";
            cin>>CreditHour;
            
            
            cout<<"Add more grades " <<"Y or N: ";
            cin>>ans;
            
           
            GradePoints = get_grade_points(LetterGrade);
            
            CredPoints = GradePoints * CreditHour;
            
            
            TotalCPoints += CredPoints;
            TotalChours += CreditHour;

           
            if (ans == 'y' || ans == 'Y') {
                done = true;
            }
        }
        while (!done);
        
    cout<<"Total Credit Points: "<<TotalCPoints<<endl;
    cout<<"Total Credit Hours:  "<<TotalChours<<endl;
    
    
    GPA = calculate_gpa(TotalChours, TotalCPoints);
    
    cout<<"Your Semester GPA is: "<<GPA <<endl;
    
        return 0;
	return 0;
}
