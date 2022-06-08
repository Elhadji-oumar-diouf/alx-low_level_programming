#include <stdio.h>
#include <stdlib.h>

/**
 *print_alphabet_x10 - Check
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char Alpha;
	int i;
	
	for (i = 0 ; i < 10 ; i++)
	{
		for (Alpha = 'a' ; Alpha <= 'z' ; Alpha++)
		{
			putchar(Alpha);
		}
		putchar('\n');
	}
}
