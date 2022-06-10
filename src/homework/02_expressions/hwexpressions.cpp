#include "expressions.h"

#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here



double get_sales_tax_amount(double meal_amount)
{
    double total_amount1 = meal_amount * tax_rate;
    
    return total_amount1;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
    double tip_Amount = meal_amount *(tip_rate/100);
    double totalAmount = meal_amount + tip_Amount;
    
    return totalAmount;
}
