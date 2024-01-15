#include "main.h"

/**
 * _strstr - Locating substring
 * @haystack: first substring
 * @needle: subctring
 * Return: it is 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *k = haystack;
		char *t = needle;

		while (*k == *t && *t != '\0')
		{
			k++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return (0);
}
