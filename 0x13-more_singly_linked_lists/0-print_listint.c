#include "lists.h"

/**
 * print_listint - Printing all the elements of listint
 * @h: linked list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numofnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numofnodes++;
	}
	return (numofnodes);
}
