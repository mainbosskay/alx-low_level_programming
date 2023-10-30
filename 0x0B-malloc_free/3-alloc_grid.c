#include "main.h"

/**
 * alloc_grid - Returning a pointer to a two dimensional array
 * @width: columns
 * @height: rows
 * Return: either 0 or pointer of array
 */

int **alloc_grid(int width, int height)
{
	int k;
	int t;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);
	for (k = 0 ; k < height ; k++)
	{
		result[k] = malloc(sizeof(int) * width);
		if (result[k] == NULL)
		{
			free(result);
			for (t = 0 ; t <= height ; t++)
				free(result[t]);
			return (NULL);
		}
		for (t = 0; t < width ; t++)
			result[k][t] = 0;
	}
	return (result);
}
