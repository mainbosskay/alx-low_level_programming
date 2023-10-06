#include <stdio.h>

/**
 * main - printing characters
 * Return: is void
 */

int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		putchar(k);
	for (k = 'A' ; k <= 'Z' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
