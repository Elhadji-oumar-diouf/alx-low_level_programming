#include <stdio.h>
#include <stdlib.h>
/**
 *print_to_98 - Check 
 * @n: A input integer
 * Description: It prints 9 times table starting with 0
 *from n to 98, followed by a new line
 * Return: Nothing.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
}
