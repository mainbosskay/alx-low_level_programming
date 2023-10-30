#include "main.h"

/**
 * change_free_grid - two dimesional array
 * @grid: array
 * @length: arrays height
 * Return: it is void
 */

void change_free_grid(char **grid, unsigned int length)
{
	if (grid != NULL && length != 0)
	{
		for (; length > 0 ; length--)
			free(grid[length]);
		free(grid[length]);
		free(grid);
	}
}

/**
 * strtow - splitting a string into words
 * @str: string
 * Return: either NULL or pointer of an array
 */

char **strtow(char *str)
{
	char **result;
	unsigned int k, length, d, j, s1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (k = length = 0 ; str[k] != '\0' ; k++)
		if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			length++;
	result = malloc((length + 1) * sizeof(char *));
	if (result == NULL || length == 0)
	{
		free(result);
		return (NULL);
	}
	for (d = s1 = 0 ; d < length ; d++)
	{
		for (k = s1 ; str[k] != '\0' ; k++)
		{
			if (str[k] == ' ')
				s1++;
			if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			{
				result[d] = malloc((k - s1 + 2) * sizeof(char));
				if (result[d] == NULL)
				{
					change_free_grid(result, d);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0 ; s1 <= k ; s1++, j++)
			result[d][j] = str[s1];
		result[d][j] = '\0';
	}
	result[d] = NULL;
	return (result);
}
