#include "main.h"
/**
 * _isupper - uppercase character
 * @c: c is the parameter used
 * Return: it is either 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
