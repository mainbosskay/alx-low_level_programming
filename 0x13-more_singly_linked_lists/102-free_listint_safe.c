#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: pointer to the head
 * Return: the size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length;
	int d;
	listint_t *temp;

	length = 0;
	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
