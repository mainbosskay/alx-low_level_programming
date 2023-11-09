#include "variadic_functions.h"

/**
 * print_all - printing anything
 * @format: list of argument
 * Return: it is void
 */

void print_all(const char * const format, ...)
{
	char *string;
	char *separator = "";
	int k = 0;
	va_list ag;

	va_start(ag, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ag, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ag, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ag, double));
					break;
				case 's':
					string = va_arg(ag, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					k++;
					continue;
			}
			separator = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(ag);
}
