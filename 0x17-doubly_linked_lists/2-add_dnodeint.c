#include "lists.h"

/**
 * add_dnodeint - Adding a new node at the beginning of a dlistint_t list
 * @head: double pointer of the linked list
 * @n: value to be added to the new node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	if (newnode->next)
		(newnode->next)->prev = newnode;
	return (newnode);
}
