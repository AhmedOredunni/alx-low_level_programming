#include "main.h"

/**
 * print_to_98 - Print from the number given to 98
 * @n: the given number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
}
