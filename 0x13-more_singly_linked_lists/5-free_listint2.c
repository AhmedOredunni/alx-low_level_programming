#include "lists.h"

/**
 *free_listint2 - Free the list and set the head to null
 *@head: the head pointer
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
