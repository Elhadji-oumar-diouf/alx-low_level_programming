#include <stdio.h>
#include <stdlib.h>

/**
 * _isalpha - Check
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 ** @c : An input character
 */

int _isalpha(int c)
{
	char lower, upper;
	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A' ; upper <= 'Z' ; upper++)
		{
			if (lower == c || upper == c)
			{
				isalpha = 1;
			}
		}

	}

	return (isalpha);
}
