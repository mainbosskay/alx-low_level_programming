#include "main.h"

/**
 * rev_string - function that reverse
 * @s: is the parameter used
 * Return: is void
 */

void rev_string(char *s)
{
	int k;
	int sum = 0;

	for (k = 0 ; s[k] != 0 ; k++)
		sum++;
	for (k = 0 ; k < sum / 2 ; k++)
	{
		char t;

		t = s[k];
		s[k] = s[sum - 1 - k];
		s[sum - 1 - k] = t;
	}
}
