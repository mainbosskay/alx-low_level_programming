#include "main.h"

/**
 * string_nconcat - Concatenating two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: Pointer or 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0;
	unsigned int t = 0;
	unsigned int d = 0;
	unsigned int j = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[d])
		d++;
	if (n >= d)
		j = k + d;
	else
		j = k + n;
	result = malloc(sizeof(char) * j + 1);
	if (result == NULL)
		return (NULL);
	d = 0;
	while (t < j)
	{
		if (t <= k)
			result[t] = s1[t];
		if (t >= k)
		{
			result[t] = s2[d];
			d++;
		}
		t++;
	}
	result[t] = '\0';
	return (result);
}
