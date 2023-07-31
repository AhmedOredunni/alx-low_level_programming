#include "lists.h"

/**
 *add_nodeint- Used to add to the begining of the node
 *@head: a pointer that holds the address of the head
 *@n: the integer to add
 *
 *Return: the pointer to the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
