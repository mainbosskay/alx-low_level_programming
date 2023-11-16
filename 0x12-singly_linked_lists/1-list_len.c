#include "lists.h"

/**
 * list_len - Number of elements in linked list_t list
 * @h: linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
