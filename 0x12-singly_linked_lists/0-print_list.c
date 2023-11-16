#include "lists.h"

/**
 * print_list - Printing all the elements of list_t
 * @h: linked list
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t numnode;

	numnode = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numnode++;
	}
	return (numnode);
}
