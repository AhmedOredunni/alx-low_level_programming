#include "lists.h"

/**
 *reverse_listint - Reverse the linked list
 *@head: the pointer variable pointing to the first node
 *
 *Return: the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
