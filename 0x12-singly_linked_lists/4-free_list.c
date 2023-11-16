#include "lists.h"

/**
 * free_list - Freeing list_t list
 * @head: head of list
 * Return: it is void
 */

void free_list(list_t *head)
{
	list_t *tempva;

	while ((tempva = head) != NULL)
	{
		head = head->next;
		free(tempva->str);
		free(tempva);
	}
}
