#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: An input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
