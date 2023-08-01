#include "lists.h"

/**
 *pop_listint - Return the head's data
 *@head: the head node
 *
 *Return: The data inside the element that was deleted,
 *or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
