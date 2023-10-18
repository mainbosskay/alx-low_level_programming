#include "main.h"

/**
 * cap_string - Capitalizing all string
 * @l: is the parameter used
 * Return: is l
 */

char *cap_string(char *l)
{
	int k;
	int t;
	char d[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

	for (k = 0 ; l[k] != '\0' ; k++)
	{
		if (k == 0 && l[k] >= 'a' && l[k] <= 'z')
			l[k] = l[k] - 32;
		for (t = 0 ; t < 13 ; t++)
		{
			if (l[k] == d[t])
			{
				if (l[k + 1] >= 'a' && l[k + 1] <= 'z')
					l[k + 1] = l[k + 1] - 32;
			}
		}
	}
	return (l);
}
