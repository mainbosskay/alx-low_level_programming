#include "main.h"

/**
 * _strchr - Locating character in a string
 * @s: string
 * @c: first character
 * Return: either s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
