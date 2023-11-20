#include "lists.h"

/**
 * delete_nodeint_at_index - Deleting a node in a listint_t at a certain index
 * @head: pointer to the first element
 * @index: index
 * Return: 1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempva;
	listint_t *copy = *head;
	unsigned int k;

	if (!copy)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (k = 0 ; k < (index - 1); k++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	tempva = copy->next;
	copy->next = tempva->next;
	free(tempva);
	return (1);
}
