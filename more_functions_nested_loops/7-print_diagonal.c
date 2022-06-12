#include "main.h"

/**
* print_diagonal - entry point
*
* @n: number n
*/

void print_diagonal(int n)
{
	int l;
	int s;

	for (l = (n - n); l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
