#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght = strlen(dest);
	int k;

	for (k = 0 ; k < n && *src != '\0' ; k++)
	{
		dest[lenght + k] = *src;
		src++;
	}
	dest[lenght + k] = '\0';
	return (dest);
}
