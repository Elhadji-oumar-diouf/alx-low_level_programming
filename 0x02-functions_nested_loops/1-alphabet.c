#include <stdio.h>
#include <stdlib.h>

/**
 *main - check the code
 *
 *Description:for function print_alphabet
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
