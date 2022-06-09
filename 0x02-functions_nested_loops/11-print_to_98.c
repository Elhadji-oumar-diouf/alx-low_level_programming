#include <stdio.h>
#include <stdlib.h>
/**
 * @n: integer
 * Description: It prints 9 times table starting with 0
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
