#include "search_algos.h"

/**
 * linear_search - Searching integerin array using Linear search algorithm
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int indx;

	if (!array)
		return (-1);
	for (indx = 0 ; indx < (int)size ; indx++)
	{
		printf("Value checked array[%u] = [%d]\n", indx, array[indx]);
		if (value == array[indx])
			return (indx);
	}
	return (-1);
}
