#include "lists.h"

/**
 * print_dlistint - Printing all the elements of a dlistint_t list
 * @h: pointer of linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int k = 0;

	while (h)
	{
		k++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
