#include "lists.h"

/**
 *delete_nodeint_at_index - Delete the node at a particular index
 *@head: The pointer that point to the first node
 *@index: Location of the node to be deleted
 *
 * Return: 1 if successful and -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *previous = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!previous || !(previous->next))
			return (-1);
		previous = previous->next;
	}

	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
