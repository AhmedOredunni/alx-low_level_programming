#include <ctype.h>
#include "main.h"

/**
 * _islower - check whether is lower or not
 * @c: The character to be checked
 * Return: int 1 or 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
