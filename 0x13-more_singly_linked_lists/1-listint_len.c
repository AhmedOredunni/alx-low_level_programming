#include "lists.h"

/**
 *listint_len - Return the number of element in the list
 *@h: the variable to hold the address of the first node
 *
 *Return: The number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
