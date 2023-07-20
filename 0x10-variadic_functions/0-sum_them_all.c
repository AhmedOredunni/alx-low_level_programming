#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all the argument passed to it
 * @n: number of argument pass to it
 *
 * Return: integer value of the summation of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);


	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
