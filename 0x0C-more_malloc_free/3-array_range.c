#include "main.h"

/**
 * array_range - Creating an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int k;
	int t;
	int *result;

	if (min > max)
		return (NULL);
	k = (max - min) + 1;
	result = malloc(sizeof(int) * k);
	if (result == NULL)
		return (NULL);
	for (t = 0 ; min <= max ; t++)
		result[t] = min++;
	return (result);
}
