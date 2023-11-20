#include "lists.h"

/**
 * listint_len - Returning the number of elements in a linked listint_t
 * @h: list linked to traverse
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numofnodes = 0;

	while (h)
	{
		numofnodes++;
		h = h->next;
	}
	return (numofnodes);
}
