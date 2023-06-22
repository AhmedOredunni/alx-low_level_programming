#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Check if c is a digit or not
 * @c: parameter to check
 *
 * Return: 1 if it's a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
