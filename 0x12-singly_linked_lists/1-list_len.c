#include <stdio.h>
#include "lists.h"

/**
 * list_len - Find the length of the list
 * @h: the pointer variable, pointing to the head
 *
 * Return: the length of the list
 */


size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
