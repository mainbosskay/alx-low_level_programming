#include "lists.h"

/**
 * dlistint_len - Returning the number of elements in a linked dlistint_t list
 * @h: pointer of the linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
