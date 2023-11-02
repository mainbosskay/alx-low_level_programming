#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size);
int _strdigit(char *s);
void _puts(char *s);
void rev_num_str(int start, int end, char *ns);
int _strlen(char *s);
char *strmul(char *a, char *b);

/**
 * _calloc - Allocating bytes
 * @nmemb: elements number
 * @size: number of bytes
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *result;

	if (size == 0 || nmemb == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	for (k = 0 ; k < nmemb * size ; ++k)
		result[k] = 0;
	return (result);
}

/**
 * _strdigit - string s that is composed of only digits
 * @s: string
 * Return: 1 or 0
 */

int _strdigit(char *s)
{
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * _puts - printing string s
 * @s: string
 * Return: it is void
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*(s++));
}

/**
 * rev_num_str - reversing a number string up to zero trail
 * @start: beginning number
 * @end: ending number
 * @ns: numbers string
 * Return: it is void
 */

void rev_num_str(int start, int end, char *ns)
{
	int k;
	int t;
	char tmp;

	while (ns[end] == 0 && end != start)
		end--;
	for (k = start, t = end ; k <= t ; k++, t--)
	{
		tmp = ns[k] + '0';
		ns[k] = ns[t] + '0';
		ns[t] = tmp;
	}
}

/**
 * _strlen - Calculating length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int k;

	for (k = 0 ; s[k] ; k++)
		;
	return (k);
}

/**
 * strmul - Multiplying two number as strings
 * @a: number 1
 * @b: number 2
 * Return: pointer
 */

char *strmul(char *a, char *b)
{
	int k, t, d, j, l, m, n = 0;
	char *result;
	char count, count1, sum, sum1;

	if (*a == '-')
	{
		n ^= 1;
		a++;
	}
	if (*b == '-')
	{
		n ^= 1;
		b++;
	}
	k = _strlen(a);
	t = _strlen(b);
	result = _calloc(k + t + 1 + n, sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n)
		result[0] = '-';
	for (d = t - 1, m = n ; d >= 0 ; d--, m++)
	{
		count1 = 0;
		sum1 = 0;
		for (j = k - 1, l = m ; j >= 0 ; j--, l++)
		{
			count = (a[j] - '0') * (b[d] - '0') + count1;
			count1 = count / 10;
			count %= 10;
			sum = result[l] + count + sum1;
			sum1 = sum / 10;
			sum %= 10;
			result[l] = sum;
		}
		result[l] = sum1 + count1;
	}
	rev_num_str(n, l, result);
	return (result);
}

/**
 * main - multiplying two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: it is 0
 */

int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!_strdigit(argv[1]) || !_strdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	result = strmul(argv[1], argv[2]);
	if (result == NULL)
	{
		_puts("Error\n");
		exit(98);
	}
	_puts(result);
	_putchar('\n');
	free(result);
	exit(EXIT_SUCCESS);
}
