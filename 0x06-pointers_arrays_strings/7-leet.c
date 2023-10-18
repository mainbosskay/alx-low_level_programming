#include "main.h"

/**
 * leet - encoding a string
 * @l: is the function used
 * Return: is l
 */

char *leet(char *l)
{
	int k;
	int t;
	char *d = "aAeEoOtTlL";
	char *p = "4433007711";

	for (k = 0 ; l[k] != '\0' ; k++)
	{
		for (t = 0 ; t < 10 ; t++)
		{
			if (l[k] == d[t])
				l[k] = p[t];
		}
	}
	return (l);
}
