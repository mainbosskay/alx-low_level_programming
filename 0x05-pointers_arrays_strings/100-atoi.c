#include "main.h"

/**
 * _atoi - string into integer
 * @s: is the parameter
 * Return: is void
 */

int _atoi(char *s)
{
	int k;
	int t;
	int d;
	int sum;
	int j;
	int p;

	k = 0;
	t = 0;
	d = 0;
	sum = 0;
	j = 0;
	p = 0;

	while (s[sum] != '\0')
		sum++;
	while (k < sum && j == 0)
	{
		if (s[k] == '-')
			t++;
		if (s[k] >= '0' && s[k] <= '9')
		{
			p = s[k] - '0';
			if (t % 2)
				p = -p;
			d = d * 10 + p;
			j = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			j = 0;
		}
		k++;
	}
	if (j == 0)
		return (0);
	return (d);
}
