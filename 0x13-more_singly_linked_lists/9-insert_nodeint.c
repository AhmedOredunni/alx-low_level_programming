#include "lists.h"

/**
 *insert_nodeint_at_index - Insert node at a particular index
 *@head: the pointer that points to the first node
 *@idx: the given index
 *@n: the data to add
 *
 * Return: the address of the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *ptr2;

	ptr2 = malloc(sizeof(listint_t));
	if (!ptr2)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}

	for (i = 0; ptr && i < idx - 1; i++)
	{
		ptr = ptr->next;
	}

	if (!ptr)
	{
		free(ptr2);
		return (NULL);
	}

	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
