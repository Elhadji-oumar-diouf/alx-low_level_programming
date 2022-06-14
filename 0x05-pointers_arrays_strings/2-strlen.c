#include <stdio.h>
#include <stdlib.h>

/**
* int _strlen - a function that takes a pointer to an int as parameter
* @n: integer pointer
* Return : Nothing
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
