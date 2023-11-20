#include "lists.h"

/**
 * reverse_listint - Reversing a listint_t linked list
 * @head: pointer to the first node
 * Return: a pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prior;
	listint_t *later;

	if (head == NULL || *head == NULL)
		return (NULL);
	later = NULL;
	while ((*head)->next != NULL)
	{
		prior = (*head)->next;
		(*head)->next = later;
		later = *head;
		*head = prior;
	}
	(*head)->next = later;
	return (*head);
}
