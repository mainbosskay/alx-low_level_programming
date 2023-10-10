#include "main.h"

/**
 * _abs - printing absolute value
 * @k: the parameter is k
 * Return: its is k or -k
 */

int _abs(int k)
{
	if (k < 0)
		return (-k);
	else if (k >= 0)
		return (k);
	return (0);
}
