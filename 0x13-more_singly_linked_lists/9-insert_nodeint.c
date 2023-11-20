#include "lists.h"

/**
 * insert_nodeint_at_index - Inserting a new node in a listint_t
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert in the new node
 * Return: NULL or address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *copy = *head;
	unsigned int k;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!idx)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (k = 0 ; k < (idx - 1) ; k++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
