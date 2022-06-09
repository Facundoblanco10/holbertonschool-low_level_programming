#include "main.h"
#include <stdlib.h>
/**
* main - entry point
* @n: numero
* Return: Always 0.
*/
int print_last_digit(int n)
{
	_putchar((abs(n)) % 10 + '0');
	return ((abs(n)) % 10 );
}
