#include <stdio.h>
/**
 * _isalpha - Check
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 ** @c : An input character
*/
int print_sign(int n){
	int number;
	
	if (n > 0)
	{
		number = 1;
		putchar('+');
	}

	else if (n == 0)
	{
		number = 0;
		putchar('0');
	}

	else
	{
		number = -1;
		putchar('-');
	}
	
	return (number);
}
