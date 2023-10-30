#include "main.h"

/**
 * create_array - Array of characters
 * @size: arrays size
 * @c: character used
 * Return: either NULL or the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (k = 0 ; k < size ; k++)
		array[k] = c;
	return (array);
}
