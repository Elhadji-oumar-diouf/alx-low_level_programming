#include <stdio.h>
#include <stdlib.h>

/**
 * _abc - Check
 * @man: An input number
 * Description: function the absolute value of an integer
 * Return: Absolut value of number man
*/
int _abs(int man)
{
	if (man >= 0)
		return (man);
	else
		return (man * -1);
}
