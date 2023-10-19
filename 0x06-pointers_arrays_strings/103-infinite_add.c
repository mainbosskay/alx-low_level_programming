#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first parameter
 * @n2: second parameter
 * @r: buffer that stores result
 * @size_r: size of buffer
 * Return: is r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k1 = 0, k2 = 0, t, d, j, p, sum = 0;

	while (*(n1 + k1) != '\0')
		k1++;
	while (*(n1 + k2) != '\0')
		k2++;
	if (k1 >= k2)
		d = k1;
	else
		d = k2;
	if (size_r <= d + 1)
		return (0);
	r[d + 1] = '\0';
	k1--, k2--, size_r--;
	j = *(n1 + k1) - 48, p = *(n2 + k2) - 48;
	while (d >= 0)
	{
		t = j + p + sum;
		if (t >= 10)
			sum = t / 10;
		else
			sum = 0;
		if (t > 0)
			*(r + d) = (t % 10) + 48;
		else
			*(r + d) = '0';
		if (k1 > 0)
			k1--, j = *(n1 + k1) - 48;
		else
			j = 0;
		if (k2 > 0)
			k2--, p = *(n2 + k2) - 48;
		else
			p = 0;
		d--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
