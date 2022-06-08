#include <stdio.h>
#include <stdlib.h>
/**
*print_last_digit check
*@num:An integer input
*Description :This function prints the last digit of a number
*Returns the value of the last digit num
*/
int print_last_digit(int num){
	int digit;

	if (num < 0)
	{
		digit = -1 * (num % 10);
	}
	else
	{
		digit = num % 10;
	}
	putchar((digit % 10) + '0');
	return (digit % 10);
}
