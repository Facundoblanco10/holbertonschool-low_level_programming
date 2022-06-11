#include "main.h"

/**
* print_line - entry point
*
* @n: number n
*/

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
