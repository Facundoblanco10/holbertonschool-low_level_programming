#include "variadic_functions.h"

/**
* print_strings - function that prints strings
* @separator: separator
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
