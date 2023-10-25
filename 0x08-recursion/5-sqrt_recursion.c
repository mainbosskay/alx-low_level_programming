#include "main.h"

int _sqrt(int n, int k);

/**
 * _sqrt_recursion - Natural Square root of a number
 * @n: number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculating natural square root
 * @n: number calculated
 * @k: number
 * Return: natural square root
 */

int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
		return (-1);
	else if (sqrt == n)
		return (k);
	else
		return (_sqrt(n, k + 1));
}
