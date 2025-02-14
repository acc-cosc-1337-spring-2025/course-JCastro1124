#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal__amount)
{
	return meal__amount * SALES_TAX;
}
double get_tip_amount(double meal_amount, double tip_rate)
{
	tip_rate /= 100;
	return meal_amount * tip_rate;
}

