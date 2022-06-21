#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *elho = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (elho);
}
