#include "main.h"

int check_prime(int n, int k);

/**
 * is_prime_number - Returning 1 as the prime number
 * @n: number being checked
 * Return: value of integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Checking the prime number
 * @n: number being checked
 * @k: number
 * Return: 1 or 0
 */

int check_prime(int n, int k)
{
	if (n <= 1)
		return (0);
	else if (n % k == 0 && k > 1)
		return (0);
	else if ((n / k) < k)
		return (1);
	else
		return (check_prime(n, k + 1));
}
