#include "lists.h"

/**
 * get_nodeint_at_index - Returning the nth node of a listint_t
 * @head: first node
 * @index: index of the node
 * Return: NULL or the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0 ; k < index ; k++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
