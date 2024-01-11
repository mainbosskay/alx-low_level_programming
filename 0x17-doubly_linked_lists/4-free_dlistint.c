#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer of the linked list
 * Return: it is void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
