#include "lists.h"

/**
 * print_list - Printing all the elements of a list
 * @h: singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int k;

	if (h == NULL)
		return (0);
	for  (k = 1 ; h->next != NULL ; k++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (k);
}
