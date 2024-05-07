#include "search_algos.h"

void get_array(int *array, int begin, int end);

/**
 * get_array - Printing elements of array within specific range
 * @array: pointer to array
 * @begin: begining of index to print from
 * @end: ending index for printing
 * Return: it is void
 */

void get_array(int *array, int begin, int end)
{
	int indx;

	printf("Searching in array: ");
	for (indx = begin ; indx < end ; indx++)
	{
		printf("%d, ", array[indx]);
	}
	printf("%d\n", array[indx]);
}

/**
 * binary_search - Seaching for value in sorted int array
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int begin;
	int mid;
	int end;

	if (!array)
		return (-1);
	begin = 0;
	end = size - 1;
	while (begin <= end)
	{
		get_array(array, begin, end);
		mid = (begin + end) / 2;
		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			begin = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
