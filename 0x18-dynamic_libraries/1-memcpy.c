#include "main.h"

/**
 * _memcpy - copying memory
 * @dest: destination
 * @src: source
 * @n: number
 * Return: it is dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
		dest[k] = src[k];
	return (dest);
}
