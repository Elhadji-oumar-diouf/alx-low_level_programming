#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Check Holberton
 * @man: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number man
*/
int _abs(int man)
{
	if (man >= 0)
		return (man);
	else
		return (man * -1);
}
