#include "main.h"

/**
*
*
*
*/

void times_table(void)
{
	int num, mult;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			if ((num * mult) <= 9){
				_putchar(' ');
				_putchar((num * mult) %10 + '0');
			}
			else
			{
				_putchar((num * mult) /10 + '0');
				_putchar((num * mult) %10 + '0');
			}
				if (mult ==9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
