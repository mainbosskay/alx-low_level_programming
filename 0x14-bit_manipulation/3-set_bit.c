#include "main.h"

/**
 * set_bit - Setting value of a bitto 1 at a given index
 * @n: pointer
 * @index: index of the bit
 * Return: either 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);
	k = 1 << index;
	*n = (*n | k);
	return (1);
}
