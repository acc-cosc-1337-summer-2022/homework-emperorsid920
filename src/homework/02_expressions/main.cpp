//write include statements

#include <iostream>
#include "hwexpressions.h"
//write namespace using statement for cout

using namespace::std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
//    cout<<"Hello World"<<endl;

    double mealAmount =0.0;
    double taxAmount = 0.0;
    double tipAmount = 0.0;
    double tipRate = 0.0;
    
    double totAmount = 0.0;
    
    cout<<"Please enter the meal amount: ";
    cin>> mealAmount;
    
    cout<<"Please enter the tip rate: ";
    cin>> tipRate;
    
    
    
    taxAmount = get_sales_tax_amount(mealAmount);
    tipAmount = get_tip_amount(mealAmount, tipRate);
    
    
    
    totAmount = taxAmount + tipAmount;
    
    cout<<"Meal Amount:  "<<mealAmount<<endl;
    cout<<"Sales Tax:    "<<taxAmount<<endl;
    cout<<"Tip Amount:   "<<tipAmount<<endl;
    cout<<"Total:        "<<totAmount<<endl;
    
	return 0;
}
