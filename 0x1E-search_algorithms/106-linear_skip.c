#include "search_algos.h"

/**
 * linear_skip - Search value in a sorted skip list of integers
 * @list: pointer to the head of the list to search
 * @value: the value to search for in the list
 * Return: pointer to the first node where value is located or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t begin = 0;
	size_t end = 0;
	skiplist_t *recnd, *newnd;

	if (!list)
		return (NULL);
	recnd = list;
	newnd = recnd->express ? recnd->express : recnd;
	while (newnd)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)newnd->index, newnd->n);
		if (newnd->n >= value)
			break;
		recnd = newnd;
		if ((recnd->n < value) && (recnd->express == NULL))
		{
			while (newnd->next)
				newnd = newnd->next;
			break;
		}
		newnd = recnd->express ? recnd->express : recnd;
	}
	begin = recnd->index;
	end = newnd->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)begin, (int)end);
	while (recnd)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)recnd->index, recnd->n);
		if (recnd->n == value)
			return (recnd);
		recnd = recnd->next;
	}
	return (NULL);
}
