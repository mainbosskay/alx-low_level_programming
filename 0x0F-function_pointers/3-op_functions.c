#include "3-calc.h"

/**
 * op_add - Sum up two numbers
 * @a: number 1
 * @b: number 2
 * Return: the sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracting two numbers
 * @a: number 1
 * @b: number 2
 * Return: the difference between the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplying two numbers
 * @a: number 1
 * @b: number 2
 * Return: the multiplication of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Dividing two numbers
 * @a: number 1
 * @b: number 2
 * Return: the division of the two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The module of two numbers
 * @a: number 1
 * @b: number 2
 * Return: modulus of the two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
