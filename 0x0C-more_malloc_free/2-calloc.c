#include "main.h"

/**
 * _calloc - Allocating memory of an array
 * @nmemb: elements numbers
 * @size: sizes of byte
 * Return: pointer or 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	for (k = 0 ; k < (nmemb * size) ; k++)
		result[k] = 0;
	return (result);
}
