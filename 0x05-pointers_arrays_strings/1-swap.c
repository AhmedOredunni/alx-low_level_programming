#include "main.h"

/**
 * swap_int - Swap numbers pass to it
 * @a: first number
 * @b: second number
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
