#include <stdio.h>
#include <stdlib.h>
/**
* swap_int - function that swaps the values of two integer
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
