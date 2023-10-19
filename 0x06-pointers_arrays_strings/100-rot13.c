#include "main.h"

/**
 * rot13 - encoding a string using rot13
 * @l: is the parameter used
 * Return: is l
 */

char *rot13(char *l)
{
	int k;
	int t;
	char *d = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (k = 0 ; l[k] != '\0' ; k++)
	{
		for (t = 0 ; d[t] != '\0' ; t++)
		{
			if (l[k] == d[t])
			{
				l[k] = p[t];
				break;
			}
		}
	}
	return (l);
}
