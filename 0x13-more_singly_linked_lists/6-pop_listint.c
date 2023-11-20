#include "lists.h"

/**
 * pop_listint - Deleting the head node of a listint_t
 * @head: pointer to the first element
 * Return: either 0 or head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tempva;
	int nodeele;

	if (*head == NULL)
		return (0);
	tempva = *head;
	nodeele = (*head)->n;
	*head = (*head)->next;
	free(tempva);
	return (nodeele);
}
