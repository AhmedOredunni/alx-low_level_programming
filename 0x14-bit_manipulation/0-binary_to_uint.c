#include "main.h"

/**
 *binary_to_uint - Change every binary number to unsigned int
 *@b: Binary to convert
 *
 *Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int c;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		decimal = 2 * decimal + (b[c] - '0');
	}
	return (decimal);
}
