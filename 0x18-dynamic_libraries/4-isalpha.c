#include "main.h"
/**
 * _isalpha - checking for uppercase and lowercase alphabet
 * @c: checking for c
 * Return: will be 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
