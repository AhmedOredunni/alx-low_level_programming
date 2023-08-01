#include "lists.h"

/**
 *get_nodeint_at_index - Get the node at the desired location
 *@head: The pointer to the first node
 *@index: position of the desired node
 *
 *Return: the data of the desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	index--;
	while (index != 1)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}

