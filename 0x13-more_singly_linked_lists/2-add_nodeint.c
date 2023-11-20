#include "lists.h"

/**
 * add_nodeint - Adding new node at the beginning of listint_t
 * @head: pointer to the first node
 * @n: integer
 * Return: NULL or address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
