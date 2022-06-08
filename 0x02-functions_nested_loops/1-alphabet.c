#include <stdio.h>
#include <stdlib.h>

/**
 *main - check the code
 *
 *function alphabet
 *Return: Always 0 (Success);
 */

void print_alphabet(void)
{
	char Alpha;

	for (Alpha = 'a' ; Alpha <= 'z' ; Alpha++)
	{
		putchar(Alpha);
	}

 	putchar('\n');
}
