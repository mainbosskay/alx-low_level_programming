#include "search_algos.h"

/**
 * jump_list - Search value in sorted int list with jump search algo
 * @list: pointer to the head
 * @size: number of nodes in the list
 * @value: value to search for in the list
 * Return: pointer to first node where value is located or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t indx = 0;
	size_t jpsize = 0;
	size_t stpcnt = (size_t)sqrt((double)size);
	listint_t *prvnd;

	if (!list || size == 0)
		return (NULL);
	do {
		prvnd = list;
		jpsize++;
		indx = jpsize * stpcnt;
		while (list->next && list->index < indx)
			list = list->next;
		if (!list->next && indx != list->index)
			indx = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)indx, list->n);
	} while (indx < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prvnd->index, (int)list->index);
	for (; prvnd && prvnd->index <= list->index ; prvnd = prvnd->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prvnd->index, prvnd->n);
		if (prvnd->n == value)
			return (prvnd);
	}
	return (NULL);
}
