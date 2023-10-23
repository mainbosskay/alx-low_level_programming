#include "main.h"

/**
 * _strspn - prefix substring
 * @s: initial segment
 * @accept: string
 * Return: the character
 */

unsigned int _strspn(char *s, char *accept)
{
	int k;
	int t;

	for (k = 0 ; s[k] != '\0' ; k++)
	{
		for (t = 0 ; s[k] != accept[t] ; t++)
		{
			if (accept[t] == '\0')
				return (k);
		}
	}
	return (0);
}
