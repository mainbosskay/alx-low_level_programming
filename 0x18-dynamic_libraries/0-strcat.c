#include "main.h"

/**
 * _strcat - Concatenating strings
 * @dest: first parameter
 * @src: second parameter
 * Return: is to dest
 */

char *_strcat(char *dest, char *src)
{
	int klenght = 0;
	int tlenght = 0;
	int d;

	for (d = 0 ; dest[d] != '\0' ; d++)
		klenght++;
	for (d = 0 ; src[d] != '\0' ; d++)
		tlenght++;
	for (d = 0 ; d <= tlenght ; d++)
		dest[klenght + d] = src[d];
	return (dest);
}
