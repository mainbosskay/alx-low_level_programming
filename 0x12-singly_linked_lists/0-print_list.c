#include "lists.h"

/**
 * print_list - Printing all elements of list_t list
 * @h: linked list
 * Return: either the length of the list or zero
 */

size_t print_list(const list_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("%[d] %s\n", h->len, h->str);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
