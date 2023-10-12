#include "main.h"

/**
 * _isdigit - 0 through 9
 * @c: c is the parameter used
 * Return: it is either 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
