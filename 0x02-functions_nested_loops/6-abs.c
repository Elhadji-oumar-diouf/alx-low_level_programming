#include <stdio.h>
#include <stdlib.h>

/**
 * _abc
 * @man: An input number
 * Description: function that computes the absolute value of an integer
 * Return: Absolut value of number man abc
 * -1 if number is negative
*/
int _abs(int man)
{
	if (man >= 0)
		return (man);
	else
		return (man * -1);
}
