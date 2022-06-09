#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet : Check
 * Description : this function print the alphabet in lowercase followed by a new line
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
