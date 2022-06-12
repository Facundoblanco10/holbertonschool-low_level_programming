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

	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			if (s == (n - l))
			{
			_putchar('\\');
			_putchar('\n');
			}
			else
			{
			_putchar(' ');
			}
		}
	}
}
