#include "lists.h"

/**
 * sum_dlistint - Summing up all the data (n) of a dlistint_t linked list
 * @head: pointer of the linked list
 * Return: sum of all the data (n) of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
