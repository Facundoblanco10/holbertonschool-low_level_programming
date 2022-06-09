#include "main.h"
#include <stdlib.h>

/**
* print_last_digit - entry point
* @n: numero
* Return: Always 0.
*/
int print_last_digit(int n)
{
	n = abs(n % 10);
	_putchar(n + '0');
	return (n);
}
