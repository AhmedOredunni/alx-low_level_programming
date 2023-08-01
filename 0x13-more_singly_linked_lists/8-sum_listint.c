#include "lists.h"

/**
 *sum_listint - Give the sum of the data in the node
 *@head: the pointer that hold the address of the firt node
 *
 *Return: the sum of the data in the node
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
