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

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}			
	}
	else
			_putchar('\n');
}
