#include "main.h"

/**
 * _strcpy - Function that copies a string
 * @dest: destination is the first parameter
 * @src: source is the second parameter
 * Return: is destination
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0 ; src[k] != '\0' ; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
