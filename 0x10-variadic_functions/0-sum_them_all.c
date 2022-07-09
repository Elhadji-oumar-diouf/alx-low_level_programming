#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ass;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ass, n);
	for (; i < n; i++)
		sum += va_arg(ass, int);

	va_end(ass);
	return (sum);
}
