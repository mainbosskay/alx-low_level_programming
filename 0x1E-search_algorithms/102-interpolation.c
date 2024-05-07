#include "search_algos.h"

/**
 * interpolation_search - Search value in sorted array int with interpolation
 * @array: pointer to first element
 * @size: number of element in array
 * @value: value search for in sorted array of int
 * Return: first index where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t postn;
	size_t bottom = 0;
	size_t top = size - 1;
	double interpfact;

	if (!array)
		return (-1);
	while (size)
	{
		interpfact = ((double)(top - bottom) / (array[top] - array[bottom])
				* (value - array[bottom]));
		postn = (size_t)(bottom + interpfact);
		printf("Value checked array[%d]", (int)postn);
		if (postn >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[postn]);
		}
		if (array[postn] == value)
			return ((int)postn);
		if (array[postn] < value)
			bottom = postn + 1;
		else
			top = postn - 1;
		if (bottom == top)
			break;
	}
	return (-1);
}
