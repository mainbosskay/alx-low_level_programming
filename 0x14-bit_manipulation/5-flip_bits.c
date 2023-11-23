#include "main.h"

/**
 * flip_bits - Returning the number of bits you need to flip
 * @n: number 1
 * @m: number 2
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flp = n ^ m;
	unsigned long int k = 0;

	while (flp > 0)
	{
		k = k + (flp & 1);
		flp >>= 1;
	}
	return (k);
}
