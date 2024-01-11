#include "lists.h"

/**
 * delete_dnodeint_at_index - Deleting node at index of a dlistint_t list
 * @head: double pointer of the linked list
 * @index: index of new node
 * Return: either 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int k;
	dlistint_t *firsthead;
	dlistint_t *secondhead;

	firsthead = *head;
	if (firsthead)
		while (firsthead->prev)
			firsthead = firsthead->prev;
	k = 0;
	while (firsthead)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = firsthead->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				secondhead->next = firsthead->next;
				if (firsthead->next)
					firsthead->next->prev = secondhead;
			}
			free(firsthead);
			return (1);
		}
		secondhead = firsthead;
		firsthead = firsthead->next;
		k++;
	}
	return (-1);
}
