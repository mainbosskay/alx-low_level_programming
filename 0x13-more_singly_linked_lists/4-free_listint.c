#include "lists.h"

/**
 * free_listint - Frees a listint_t
 * @head: list
 * Return: it is void
 */

void free_listint(listint_t *head)
{
	listint_t *tempva;

	while (head)
	{
		tempva = head->next;
		free(head);
		head = tempva;
	}
}
