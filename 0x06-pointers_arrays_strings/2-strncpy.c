#include "main.h"

/**
 * _strncpy - Copying string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: is dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0 ; k < n && src[k] != '\0' ; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
