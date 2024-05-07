#include "search_algos.h"

int first_report(int *array, size_t begin, size_t end, int value);

/**
 * first_report - Search the first report of a value with binary search
 * @array: pointer to the first element
 * @begin: begining index of subarray
 * @end: ending index of subarray
 * @value: value to search for in array
 * Return: index where the first report is located or -1
 */

int first_report(int *array, size_t begin, size_t end, int value)
{
	size_t indx;

	if (end < begin)
		return (-1);
	printf("Searching in array: ");
	for (indx = begin ; indx < end ; indx++)
		printf("%d, ", array[indx]);
	printf("%d\n", array[indx]);
	indx = begin + (end - begin) / 2;
	if (array[indx] == value && (indx == begin || array[indx - 1] != value))
		return (indx);
	if (array[indx] >= value)
		return (first_report(array, begin, indx, value));
	return (first_report(array, indx + 1, end, value));
}

/**
 * advanced_binary - Search value in array of int with advanced binary
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (first_report(array, 0, size - 1, value));
}
