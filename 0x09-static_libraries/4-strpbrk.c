#include "main.h"

/**
 * _strpbrk - String for any of a set of byte
 * @s: first string
 * @accept: byte in the string
 * Return: is either accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *k = accept;

		while (*k != '\0')
		{
			if (*s == *k)
				return (s);
			k++;
		}
		s++;
	}
	return (NULL);
}
