#include "lists.h"

/**
 * add_dnodeint_end - Adding a new node at the end of a dlistint_t list
 * @head: double pointer of the linked list
 * @n: integer value to be added to the new node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *hdnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	hdnode = *head;
	if (hdnode)
	{
		while (hdnode->next)
			hdnode = hdnode->next;
		hdnode->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	newnode->prev = hdnode;
	return (newnode);
}
