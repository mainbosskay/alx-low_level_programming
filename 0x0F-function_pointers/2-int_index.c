#include "function_pointers.h"

/**
 * int_index - Searching for an integer
 * @array: array
 * @size: number of elements
 * @cmp: pointer
 * Return: either -1 or 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (k = 0 ; k < size ; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
