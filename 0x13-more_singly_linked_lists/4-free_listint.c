#include "lists.h"

/**
 *free_listint - Free up the list
 *@head: the head pointer of the list
 *
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
