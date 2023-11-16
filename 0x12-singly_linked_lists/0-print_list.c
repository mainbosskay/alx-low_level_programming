#include "lists.h"

/**
 * print_list - prints all elements of a linked list_t list
 * @h: pointer to the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numn = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numn++;
	}
	return (numn);
}
