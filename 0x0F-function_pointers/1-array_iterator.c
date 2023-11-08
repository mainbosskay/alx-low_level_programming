#include "function_pointers.h"

/**
 * array_iterator - Executing a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: it is void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (k < size)
		{
			action(array[k]);
			k++;
		}
	}
}
