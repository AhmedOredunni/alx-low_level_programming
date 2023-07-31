#include "lists.h"

/**
 *print_listint - Used to print the nodes of the list
 *@h: the head of the first node
 *
 *Return: the number and element of the list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
