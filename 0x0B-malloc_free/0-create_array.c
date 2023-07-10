#include "main.h"
#include <stdlib.h>

/**
 *create_array - Pointer function, that create an array
 *@size: the size of the array
 *@c: character to be stored
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
