#include "lists.h"

/**
 * free_listint2 - Frees a listint_t two
 * @head: pointer
 * Return: it is void
 */

void free_listint2(listint_t **head)
{
	listint_t *tempva2;

	if (!head)
		return;
	while (*head)
	{
		tempva2 = (*head)->next;
		free(*head);
		*head = tempva2;
	}
	*head = NULL;
}
