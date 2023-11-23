#include "main.h"

/**
 * get_endianness - Checking the endianness
 * Return: either 0 or 1
 */

int get_endianness(void)
{
	int k;
	char *t;

	k = 1;
	t = (char *)&k;
	return (*t);
}
