#include "lists.h"

/**
 * sum_listint - Suming up of all data of listint_t
 * @head: first node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
