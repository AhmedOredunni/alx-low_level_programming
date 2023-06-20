#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check whether inputed character is alph
 * @c: The character to be checked
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
