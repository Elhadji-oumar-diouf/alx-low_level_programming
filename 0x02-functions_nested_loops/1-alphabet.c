#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet : Check
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
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
