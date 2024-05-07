#include "search_algos.h"

/**
 * jump_search - Searching calue in sorted int array with Jump search
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search for in array of int
 * Return: first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int indx;
	int preindx;
	int jpsize;
	int jpstop;

	if (!array || size == 0)
		return (-1);
	jpsize = (int)sqrt((double)size);
	jpstop = 0;
	preindx = indx = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
		jpstop++;
		preindx = indx;
		indx = jpstop * jpsize;
	} while (indx < (int)size && array[indx] < value);
	printf("Value found between indexes [%d] and [%d]\n", preindx, indx);
	for (; preindx <= indx && preindx < (int)size ; preindx++)
	{
		printf("Value checked array[%d] = [%d]\n", preindx, array[preindx]);
		if (array[preindx] == value)
			return (preindx);
	}
	return (-1);
}
