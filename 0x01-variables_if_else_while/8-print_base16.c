#include <stdio.h>

/**
 * main - printing hexadecimal
 * Return: is 0
 */

int main(void)
{
	int k;
	char t;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	for (t = 'a' ; t <= 'f' ; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
