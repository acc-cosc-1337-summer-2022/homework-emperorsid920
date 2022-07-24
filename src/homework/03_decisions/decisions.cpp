//write include statement for decisions header

//write include statement for decisions header

#include "decisions.h"
#include <string>

using namespace std;

using namespace std;
//Write code for function(s) code here


int get_grade_points(string letter_grade)
{
    int GPA = 0;
  
    if (letter_grade == "A") {
        GPA = 4;
    }else if (letter_grade == "B") {
        GPA = 3;
    }else if (letter_grade == "C") {
        GPA = 2;
    }else if (letter_grade == "D") {
        GPA = 1;
    }else if (letter_grade == "F") {
        GPA = 0;
    }
    
    return GPA;
}


double calculate_gpa(int  credit_hours,double Grade_points)
{
    double credit_points;
    
    if (credit_hours !=0) {
        credit_points = Grade_points / credit_hours;
    }else {
        credit_points = -1;
    }
   
    
    
    return credit_points;
}
