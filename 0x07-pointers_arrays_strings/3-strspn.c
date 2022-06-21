#include <stdio.h>
#include <stdlib.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *lfou)
{
	int count = 0, flag;
	char *elho = lfou;

	while (*s)
	{
		flag = 0;
		while (*lfou)
		{
			if (*lfou == *s)
			{
				count++;
				flag = 1;
				break;
			}
			lfou++;
		}
		s++;
		lfou = elho;
		if (flag == 0)
			break;
	}
	return (count);
}
