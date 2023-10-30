#include "main.h"

/**
 * str_concat - Concatenating two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or result
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int k = 0;
	int t = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;
	t = length1 + length2;
	result = malloc((sizeof(char) * t) + 1);
	if (result == NULL)
		return (NULL);
	length2 = 0;
	while (k < t)
	{
		if (k <= length1)
			result[k] = s1[k];
		if (k >= length1)
		{
			result[k] = s2[length2];
			length2++;
		}
		k++;
	}
	result[k] = '\0';
	return (result);
}
