#include "lists.h"

/**
 *print_listint - Used to print the nodes of the list
 *@h: the head of the first node
 *
 *Return: the number and element of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
