#include <stdio.h>

/**
 * main - printing of characters in reverse
 * Return: is 0
 */

int main(void)
{
	char k;

	for (k = 'z' ; k >= 'a' ; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
