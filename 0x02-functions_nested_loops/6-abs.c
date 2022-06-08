#include <stdio.h>
#include <stdlib.h>

/**
 * _abc
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
*/
int _abs(int man)
{
	if (man >= 0)
		return (man);
	else
		return (man * -1);
}
