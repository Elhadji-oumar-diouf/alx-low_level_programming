#include <stdio.h>
#include <stdlib.h>

/**
 *
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 *
 */
 
int _isalpha(int c)
{
	char lower , upper;
	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A' ; upper<= 'Z' ; upper++)
		{
			if (lower == c || upper == c)
			{
				isalpha = 1;
			}
		}

	}

	return (isalpha);
}
