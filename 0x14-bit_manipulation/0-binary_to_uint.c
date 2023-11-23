#include "main.h"

/**
 * binary_to_uint - Converting a binary numberto unsigned int
 * @b: pointer
 * Return: either 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (k = 0 ; b[k] != '\0' ; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0 ; b[k] != '\0' ; k++)
	{
		num <<= 1;
		if (b[k] == '1')
			num = num + 1;
	}
	return (num);
}
