#include "main.h"

/**
 * _memset - Fuctions that fills memory
 * @s: bytes of the memory area
 * @b: the constant byte
 * @n: number
 * Return: it will be s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
		s[k] = b;
	return (s);
}
