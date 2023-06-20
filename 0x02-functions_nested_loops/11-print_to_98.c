#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print from the number given to 98
 * @n: the given number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
		        if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
			        printf("%d\n", j);
		}
	}
}
