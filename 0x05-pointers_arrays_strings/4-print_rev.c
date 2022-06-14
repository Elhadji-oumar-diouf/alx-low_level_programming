#include <stdio.h>
#include <stdlib.h>
void print_rev(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (len)
	{
        	putchar(s[--len]);
	}
	putchar('\n');
}
