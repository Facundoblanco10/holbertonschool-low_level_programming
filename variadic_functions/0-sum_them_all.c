#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of parameters
* Return: result
*/

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		res += va_arg(ap, int);
	va_end(ap);
	return (res);
}
