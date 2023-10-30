#include "main.h"

/**
 * _strdup - Returning a pointer
 * @str: string
 * Return: either a pointer or NULL
 */

char *_strdup(char *str)
{
	int k;
	int sum = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	for (k = 0 ; str[k] != '\0' ; k++)
		sum++;
	cpy = malloc(sizeof(char) * sum + 1);
	if (cpy == NULL)
		return (NULL);
	for (k = 0 ; str[k] != '\0' ; k++)
		cpy[k] = str[k];
	return (cpy);
}
