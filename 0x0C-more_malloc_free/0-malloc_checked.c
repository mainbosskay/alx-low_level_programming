#include "main.h"

/**
 * malloc_checked - Allocating memory
 * @b: memory
 * Return: either pointers or 98
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
