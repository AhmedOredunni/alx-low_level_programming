#include "main.h"
#include <ctype.h>

/**
 * _isupper - Print whether a character is Uppercase or not
 * @c: Character to check
 *
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}

