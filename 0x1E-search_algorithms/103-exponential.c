#include "search_algos.h"

int recd_binary_search(int *array, size_t begin, size_t end, int value);

/**
 * recd_binary_search - Search value in an array with binary search
 * @array: pointer to first element
 * @begin: begining index of subarray
 * @end: ending index of subarray
 * @value: value to search for in array
 * Return: first index where value is located or -1
 */

int recd_binary_search(int *array, size_t begin, size_t end, int value)
{
	size_t indx;

	if (!array)
		return (-1);
	while (end >= begin)
	{
		printf("Searching in array: ");
		for (indx = begin ; indx < end ; indx++)
			printf("%d, ", array[indx]);
		printf("%d\n", array[indx]);
		indx = begin + (end - begin) / 2;
		if (array[indx] == value)
			return (indx);
		if (array[indx] > value)
			end = indx - 1;
		else
			begin = indx + 1;
	}
	return (-1);
}

/**
 * exponential_search - Search value in sorted int array using exponential
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: first index where value is located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t indx = 0;
	size_t end;

	if (!array)
		return (-1);
	if (array[0] != value)
	{
		for (indx = 1 ; indx < size && array[indx] <= value ; indx = indx * 2)
			printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
	}
	end = indx < size ? indx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", indx / 2, end);
	return (recd_binary_search(array, indx / 2, end, value));
}
