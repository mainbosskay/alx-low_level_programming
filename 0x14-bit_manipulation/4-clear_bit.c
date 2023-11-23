#include "main.h"

/**
 * clear_bit - Setting value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of the bit
 * Return: either 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);
	k = 1 << index;
	if (*n & k)
		*n ^= k;
	return (1);
}
