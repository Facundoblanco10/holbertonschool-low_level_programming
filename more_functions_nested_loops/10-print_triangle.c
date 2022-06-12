#include "main.h"

/**
* print_triangle - entry point
*
* @size: size of the triangle
*/

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = a; b <= size - 1; b++)
			{
				if (b == size - 1)
				{
					for (c = a; c > -1; c--)
					{
						_putchar('#');
					}
				}
				else
				{
					_putchar('.');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
